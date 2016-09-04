/* -----------------------------------------------------------------------------
 *
 * (c) The University of Glasgow 2001-2004
 *
 * Definitions for package `base' which are visible in Haskell land.
 *
 * ---------------------------------------------------------------------------*/

#ifndef __HSBASE_H__
#define __HSBASE_H__

#include "HsBaseConfig.h"

/* ultra-evil... */
#undef PACKAGE_BUGREPORT
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef PACKAGE_TARNAME
#undef PACKAGE_VERSION

/* Needed to get the macro version of errno on some OSs (eg. Solaris).
   We must do this, because these libs are only compiled once, but
   must work in both single-threaded and multi-threaded programs. */
#define _REENTRANT 1

#include "HsFFI.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#if HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif
#if HAVE_UNISTD_H
#include <unistd.h>
#endif
#if HAVE_SYS_STAT_H
#include <sys/stat.h>
#endif
#if HAVE_FCNTL_H
# include <fcntl.h>
#endif
#if HAVE_TERMIOS_H
#include <termios.h>
#endif
#if HAVE_SIGNAL_H
#include <signal.h>
/* Ultra-ugly: OpenBSD uses broken macros for sigemptyset and sigfillset (missing casts) */
#if __OpenBSD__
#undef sigemptyset
#undef sigfillset
#endif
#endif
#if HAVE_ERRNO_H
#include <errno.h>
#endif
#if HAVE_STRING_H
#include <string.h>
#endif
#if HAVE_DIRENT_H
#include <dirent.h>
#endif
#if HAVE_UTIME_H
#include <utime.h>
#endif
#if HAVE_SYS_UTSNAME_H
#include <sys/utsname.h>
#endif
#if HAVE_GETTIMEOFDAY
#  if HAVE_SYS_TIME_H
#   include <sys/time.h>
#  endif
#elif HAVE_GETCLOCK
# if HAVE_SYS_TIMERS_H
#  define POSIX_4D9 1
#  include <sys/timers.h>
# endif
#endif
#if HAVE_TIME_H
#include <time.h>
#endif
#if HAVE_SYS_TIMEB_H
#include <sys/timeb.h>
#endif
#if HAVE_WINDOWS_H
#include <windows.h>
#endif
#if HAVE_SYS_TIMES_H
#include <sys/times.h>
#endif
#if HAVE_WINSOCK_H && defined(__MINGW32__)
#include <winsock.h>
#endif
#if HAVE_LIMITS_H
#include <limits.h>
#endif
#if HAVE_WCTYPE_H
#include <wctype.h>
#endif
#if HAVE_INTTYPES_H
# include <inttypes.h>
#elif HAVE_STDINT_H
# include <stdint.h>
#endif

#if !defined(__MINGW32__) && !defined(irix_HOST_OS)
# if HAVE_SYS_RESOURCE_H
#  include <sys/resource.h>
# endif
#endif

#if !HAVE_GETRUSAGE && HAVE_SYS_SYSCALL_H
# include <sys/syscall.h>
# if defined(SYS_GETRUSAGE)	/* hpux_HOST_OS */
#  define getrusage(a, b)  syscall(SYS_GETRUSAGE, a, b)
#  define HAVE_GETRUSAGE 1
# endif
#endif

/* For System */
#if HAVE_SYS_WAIT_H
#include <sys/wait.h>
#endif
#if HAVE_VFORK_H
#include <vfork.h>
#endif
#include "lockFile.h"
#include "dirUtils.h"
#include "WCsubst.h"

#include "runProcess.h"

#if defined(__MINGW32__)
#include <io.h>
#include <fcntl.h>
#include "timeUtils.h"
#include <shlobj.h>
#include <share.h>
#endif

#if HAVE_SYS_SELECT_H
#include <sys/select.h>
#endif

/* in inputReady.c */
int inputReady(int fd, int msecs, int isSock);

/* in Signals.c */
extern HsInt nocldstop;

#if !defined(_MSC_VER) && !defined(__MINGW32__) && !defined(_WIN32)
/* in execvpe.c */
extern int execvpe(char *name, char *const argv[], char **envp);
extern void pPrPr_disableITimers (void);
#endif

/* -----------------------------------------------------------------------------
   64-bit operations, defined in longlong.c
   -------------------------------------------------------------------------- */

#ifdef SUPPORT_LONG_LONGS

StgInt stg_gtWord64 (StgWord64, StgWord64);
StgInt stg_geWord64 (StgWord64, StgWord64);
StgInt stg_eqWord64 (StgWord64, StgWord64);
StgInt stg_neWord64 (StgWord64, StgWord64);
StgInt stg_ltWord64 (StgWord64, StgWord64);
StgInt stg_leWord64 (StgWord64, StgWord64);

StgInt stg_gtInt64 (StgInt64, StgInt64);
StgInt stg_geInt64 (StgInt64, StgInt64);
StgInt stg_eqInt64 (StgInt64, StgInt64);
StgInt stg_neInt64 (StgInt64, StgInt64);
StgInt stg_ltInt64 (StgInt64, StgInt64);
StgInt stg_leInt64 (StgInt64, StgInt64);

StgWord64 stg_remWord64  (StgWord64, StgWord64);
StgWord64 stg_quotWord64 (StgWord64, StgWord64);

StgInt64 stg_remInt64    (StgInt64, StgInt64);
StgInt64 stg_quotInt64   (StgInt64, StgInt64);
StgInt64 stg_negateInt64 (StgInt64);
StgInt64 stg_plusInt64   (StgInt64, StgInt64);
StgInt64 stg_minusInt64  (StgInt64, StgInt64);
StgInt64 stg_timesInt64  (StgInt64, StgInt64);

StgWord64 stg_and64  (StgWord64, StgWord64);
StgWord64 stg_or64   (StgWord64, StgWord64);
StgWord64 stg_xor64  (StgWord64, StgWord64);
StgWord64 stg_not64  (StgWord64);

StgWord64 stg_uncheckedShiftL64   (StgWord64, StgInt);
StgWord64 stg_uncheckedShiftRL64  (StgWord64, StgInt);
StgInt64  stg_uncheckedIShiftL64  (StgInt64, StgInt);
StgInt64  stg_uncheckedIShiftRL64 (StgInt64, StgInt);
StgInt64  stg_uncheckedIShiftRA64 (StgInt64, StgInt);

StgInt64  stg_intToInt64    (StgInt);
StgInt    stg_int64ToInt    (StgInt64);
StgWord64 stg_int64ToWord64 (StgInt64);

StgWord64 stg_wordToWord64  (StgWord);
StgWord   stg_word64ToWord  (StgWord64);
StgInt64  stg_word64ToInt64 (StgWord64);

StgInt64  stg_integerToInt64 (StgInt sa, StgByteArray /* Really: mp_limb_t* */ da);
StgWord64 stg_integerToWord64 (StgInt sa, StgByteArray /* Really: mp_limb_t* */ da);

#endif /* SUPPORT_LONG_LONGS */

/* -----------------------------------------------------------------------------
   INLINE functions.

   These functions are given as inlines here for when compiling via C,
   but we also generate static versions into the cbits library for
   when compiling to native code.
   -------------------------------------------------------------------------- */


extern int __hscore_get_errno(void);
extern void __hscore_set_errno(int e);

#if !defined(_MSC_VER)
extern int __hscore_s_isreg(int m);
extern int __hscore_s_isdir(int m);
extern int __hscore_s_isfifo(int m);
extern int __hscore_s_isblk(int m)  ;
extern int __hscore_s_ischr(int m)  ;
#ifdef S_ISSOCK
extern int __hscore_s_issock(int m) ;
#endif
#endif

#if !defined(_MSC_VER) && !defined(__MINGW32__) && !defined(_WIN32)
extern int
__hscore_sigemptyset( sigset_t *set )
  ;

extern int
__hscore_sigfillset( sigset_t *set )
  ;

extern int
__hscore_sigaddset( sigset_t * set, int s )
  ;

extern int
__hscore_sigdelset( sigset_t * set, int s )
  ;

extern int
__hscore_sigismember( sigset_t * set, int s )
  ;
#endif

extern void *
__hscore_memcpy_dst_off( char *dst, int dst_off, char *src, size_t sz )
  ;

extern void *
__hscore_memcpy_src_off( char *dst, char *src, int src_off, size_t sz )
  ;

extern HsBool
__hscore_supportsTextMode()
  ;


extern HsInt
__hscore_bufsiz()
  ;

extern HsInt
__hscore_seek_cur()
  ;


extern HsInt
__hscore_o_binary()
  ;


extern int
__hscore_o_rdonly()
  ;


extern int
__hscore_o_wronly( void )
  ;

extern int
__hscore_o_rdwr( void )
  ;


extern int
__hscore_o_append( void )
  ;

extern int
__hscore_o_creat( void )
  ;

extern int
__hscore_o_excl( void )
  ;

extern int
__hscore_o_trunc( void )
  ;

extern int
__hscore_o_noctty( void )
  ;

extern int
__hscore_o_nonblock( void )
  ;

extern HsInt
__hscore_seek_set( void )
  ;

extern HsInt
__hscore_seek_end( void )
  ;

extern int
__hscore_ftruncate( int fd, off_t where )
  ;

extern HsInt
__hscore_setmode( HsInt fd, HsBool toBin )
  ;

#if __GLASGOW_HASKELL__

extern HsInt
__hscore_PrelHandle_write( HsInt fd, HsAddr ptr, HsInt off, int sz )
  ;

extern HsInt
__hscore_PrelHandle_read( HsInt fd, HsAddr ptr, HsInt off, int sz )
  ;

#if defined(_MSC_VER) || defined(__MINGW32__) || defined(_WIN32)
extern HsInt
__hscore_PrelHandle_send( HsInt fd, HsAddr ptr, HsInt off, int sz )
  ;

extern HsInt
__hscore_PrelHandle_recv( HsInt fd, HsAddr ptr, HsInt off, int sz )
  ;
#endif

#endif /* __GLASGOW_HASKELL__ */

extern HsInt
__hscore_mkdir( HsAddr pathName, HsInt mode )
  ;

extern HsInt
__hscore_lstat( HsAddr fname, HsAddr st )
  ;

#ifdef PATH_MAX
/* A size that will contain many path names, but not necessarily all
 * (PATH_MAX is not defined on systems with unlimited path length,
 * e.g. the Hurd).
 */
extern HsInt __hscore_long_path_size() ;
#else
extern HsInt __hscore_long_path_size() ;
#endif

#ifdef R_OK
extern mode_t __hscore_R_OK() ;
#endif
#ifdef W_OK
extern mode_t __hscore_W_OK() ;
#endif
#ifdef X_OK
extern mode_t __hscore_X_OK() ;
#endif

#ifdef S_IRUSR
extern mode_t __hscore_S_IRUSR() ;
#endif
#ifdef S_IWUSR
extern mode_t __hscore_S_IWUSR() ;
#endif
#ifdef S_IXUSR
extern mode_t __hscore_S_IXUSR() ;
#endif

extern HsAddr
__hscore_d_name( struct dirent* d )
  ;

extern HsInt
__hscore_end_of_dir( void )
  ;

extern void
__hscore_free_dirent(HsAddr dEnt)
  ;

extern HsInt
__hscore_sizeof_stat( void )
  ;

extern time_t __hscore_st_mtime ( struct stat* st ) ;
extern off_t  __hscore_st_size  ( struct stat* st ) ;
#if !defined(_MSC_VER)
extern mode_t __hscore_st_mode  ( struct stat* st ) ;
#endif

#if HAVE_TERMIOS_H
extern tcflag_t __hscore_lflag( struct termios* ts ) ;

extern void
__hscore_poke_lflag( struct termios* ts, tcflag_t t ) ;

extern unsigned char*
__hscore_ptr_c_cc( struct termios* ts )
  ;

extern HsInt
__hscore_sizeof_termios( void )
  ;
#endif

#if !defined(_MSC_VER) && !defined(__MINGW32__) && !defined(_WIN32)
extern HsInt
__hscore_sizeof_sigset_t( void )
  ;
#endif

extern int
__hscore_echo( void )
  ;

extern int
__hscore_tcsanow( void )
  ;

extern int
__hscore_icanon( void )
  ;

extern int __hscore_vmin( void )
  ;

extern int __hscore_vtime( void )
  ;

extern int __hscore_sigttou( void )
  ;

extern int __hscore_sig_block( void )
  ;

extern int __hscore_sig_setmask( void )
  ;

extern int
__hscore_f_getfl( void )
  ;

extern int
__hscore_f_setfl( void )
  ;

// defined in rts/RtsStartup.c.
extern void* __hscore_get_saved_termios(int fd);
extern void __hscore_set_saved_termios(int fd, void* ts);

extern int __hscore_hs_fileno (FILE *f) ;

extern int __hscore_open(char *file, int how, mode_t mode) ;

// These are wrapped because on some OSs (eg. Linux) they are
// macros which redirect to the 64-bit-off_t versions when large file
// support is enabled.
//
extern off_t __hscore_lseek(int fd, off_t off, int whence) ;

extern int __hscore_stat(char *file, struct stat *buf) ;

extern int __hscore_fstat(int fd, struct stat *buf) ;

// select-related stuff

#if !defined(__MINGW32__)
extern int  hsFD_SETSIZE(void) ;
extern void hsFD_CLR(int fd, fd_set *fds) ;
extern int  hsFD_ISSET(int fd, fd_set *fds) ;
extern void hsFD_SET(int fd, fd_set *fds) ;
extern int  sizeof_fd_set(void) ;
extern void hsFD_ZERO(fd_set *fds);
#endif

// gettimeofday()-related

#if !defined(__MINGW32__)
#define TICK_FREQ  50

extern HsInt sizeofTimeVal(void) ;

extern HsInt getTicksOfDay(void)
  ;

extern void setTimevalTicks(struct timeval *p, HsInt ticks)
  ;
#endif /* !defined(__MINGW32__) */

// Directory-related

#if defined(__MINGW32__)

/* Make sure we've got the reqd CSIDL_ constants in scope;
 * w32api header files are lagging a bit in defining the full set.
 */
#if !defined(CSIDL_APPDATA)
#define CSIDL_APPDATA 0x001a
#endif
#if !defined(CSIDL_PERSONAL)
#define CSIDL_PERSONAL 0x0005
#endif
#if !defined(CSIDL_PROFILE)
#define CSIDL_PROFILE 0x0028
#endif
#if !defined(CSIDL_WINDOWS)
#define CSIDL_WINDOWS 0x0024
#endif

extern int __hscore_CSIDL_PROFILE()  ;
extern int __hscore_CSIDL_APPDATA()  ;
extern int __hscore_CSIDL_WINDOWS()  ;
extern int __hscore_CSIDL_PERSONAL() ;
#endif

#if defined(__MINGW32__)
extern unsigned int __hscore_get_osver(void) ;
#endif

/* ToDo: write a feature test that doesn't assume 'environ' to
 *    be in scope at link-time. */
extern char** environ;
extern char **__hscore_environ() ;

/* lossless conversions between pointers and integral types */
extern void *    __hscore_from_uintptr(uintptr_t n) ;
extern void *    __hscore_from_intptr (intptr_t n)  ;
extern uintptr_t __hscore_to_uintptr  (void *p)     ;
extern intptr_t  __hscore_to_intptr   (void *p)     ;

#endif /* __HSBASE_H__ */

