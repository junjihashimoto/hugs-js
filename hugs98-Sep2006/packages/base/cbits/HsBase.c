/* -----------------------------------------------------------------------------
 *
 * (c) The University of Glasgow 2001-2004
 *
 * Definitions for package `base' which are visible in Haskell land.
 *
 * ---------------------------------------------------------------------------*/

#include "HsBase.h"

int __hscore_get_errno(void) { return errno; }
void __hscore_set_errno(int e) { errno = e; }

#if !defined(_MSC_VER)
int __hscore_s_isreg(int m)  { return S_ISREG(m);  }
int __hscore_s_isdir(int m)  { return S_ISDIR(m);  }
int __hscore_s_isfifo(int m) { return S_ISFIFO(m); }
int __hscore_s_isblk(int m)  { return S_ISBLK(m);  }
int __hscore_s_ischr(int m)  { return S_ISCHR(m);  }
#ifdef S_ISSOCK
int __hscore_s_issock(int m) { return S_ISSOCK(m); }
#endif
#endif

#if !defined(_MSC_VER) && !defined(__MINGW32__) && !defined(_WIN32)
int
__hscore_sigemptyset( sigset_t *set )
{ return sigemptyset(set); }

int
__hscore_sigfillset( sigset_t *set )
{ return sigfillset(set); }

int
__hscore_sigaddset( sigset_t * set, int s )
{ return sigaddset(set,s); }

int
__hscore_sigdelset( sigset_t * set, int s )
{ return sigdelset(set,s); }

int
__hscore_sigismember( sigset_t * set, int s )
{ return sigismember(set,s); }
#endif

void *
__hscore_memcpy_dst_off( char *dst, int dst_off, char *src, size_t sz )
{ return memcpy(dst+dst_off, src, sz); }

void *
__hscore_memcpy_src_off( char *dst, char *src, int src_off, size_t sz )
{ return memcpy(dst, src+src_off, sz); }

HsBool
__hscore_supportsTextMode()
{
#if defined(_MSC_VER) || defined(__MINGW32__) || defined(_WIN32)
  return HS_BOOL_FALSE;
#else
  return HS_BOOL_TRUE;
#endif
}

HsInt
__hscore_bufsiz()
{
  return BUFSIZ;
}

HsInt
__hscore_seek_cur()
{
  return SEEK_CUR;
}

HsInt
__hscore_o_binary()
{
#if defined(_MSC_VER)
  return O_BINARY;
#else
  return CONST_O_BINARY;
#endif
}

int
__hscore_o_rdonly()
{
#ifdef O_RDONLY
  return O_RDONLY;
#else
  return 0;
#endif
}

int
__hscore_o_wronly( void )
{
#ifdef O_WRONLY
  return O_WRONLY;
#else
  return 0;
#endif
}

int
__hscore_o_rdwr( void )
{
#ifdef O_RDWR
  return O_RDWR;
#else
  return 0;
#endif
}

int
__hscore_o_append( void )
{
#ifdef O_APPEND
  return O_APPEND;
#else
  return 0;
#endif
}

int
__hscore_o_creat( void )
{
#ifdef O_CREAT
  return O_CREAT;
#else
  return 0;
#endif
}

int
__hscore_o_excl( void )
{
#ifdef O_EXCL
  return O_EXCL;
#else
  return 0;
#endif
}

int
__hscore_o_trunc( void )
{
#ifdef O_TRUNC
  return O_TRUNC;
#else
  return 0;
#endif
}

int
__hscore_o_noctty( void )
{
#ifdef O_NOCTTY
  return O_NOCTTY;
#else
  return 0;
#endif
}

int
__hscore_o_nonblock( void )
{
#ifdef O_NONBLOCK
  return O_NONBLOCK;
#else
  return 0;
#endif
}

HsInt
__hscore_seek_set( void )
{
  return SEEK_SET;
}

HsInt
__hscore_seek_end( void )
{
  return SEEK_END;
}

int
__hscore_ftruncate( int fd, off_t where )
{
#if defined(HAVE_FTRUNCATE)
  return ftruncate(fd,where);
#elif defined(HAVE__CHSIZE)
  return _chsize(fd,where);
#else
#error at least ftruncate or _chsize functions are required to build
#endif
}

HsInt
__hscore_setmode( HsInt fd, HsBool toBin )
{
#if defined(_MSC_VER) || defined(__MINGW32__) || defined(_WIN32)
  return setmode(fd,(toBin == HS_BOOL_TRUE) ? _O_BINARY : _O_TEXT);
#else
  return 0;
#endif
}

#if __GLASGOW_HASKELL__

HsInt
__hscore_PrelHandle_write( HsInt fd, HsAddr ptr, HsInt off, int sz )
{
  return write(fd,(char *)ptr + off, sz);
}

HsInt
__hscore_PrelHandle_read( HsInt fd, HsAddr ptr, HsInt off, int sz )
{
  return read(fd,(char *)ptr + off, sz);

}

#if defined(_MSC_VER) || defined(__MINGW32__) || defined(_WIN32)
HsInt
__hscore_PrelHandle_send( HsInt fd, HsAddr ptr, HsInt off, int sz )
{
    return send(fd,(char *)ptr + off, sz, 0);
}

HsInt
__hscore_PrelHandle_recv( HsInt fd, HsAddr ptr, HsInt off, int sz )
{
    return recv(fd,(char *)ptr + off, sz, 0);
}
#endif

#endif /* __GLASGOW_HASKELL__ */

HsInt
__hscore_mkdir( HsAddr pathName, HsInt mode )
{
#if defined(_MSC_VER) || defined(__MINGW32__) || defined(_WIN32)
  return mkdir(pathName);
#else
  return mkdir(pathName,mode);
#endif
}

HsInt
__hscore_lstat( HsAddr fname, HsAddr st )
{
#if HAVE_LSTAT
  return lstat((const char*)fname, (struct stat*)st);
#else
  return stat((const char*)fname, (struct stat*)st);
#endif
}

#ifdef PATH_MAX
/* A size that will contain many path names, but not necessarily all
 * (PATH_MAX is not defined on systems with unlimited path length,
 * e.g. the Hurd).
 */
HsInt __hscore_long_path_size() { return PATH_MAX; }
#else
HsInt __hscore_long_path_size() { return 4096; }
#endif

#ifdef R_OK
mode_t __hscore_R_OK() { return R_OK; }
#endif
#ifdef W_OK
mode_t __hscore_W_OK() { return W_OK; }
#endif
#ifdef X_OK
mode_t __hscore_X_OK() { return X_OK; }
#endif

#ifdef S_IRUSR
mode_t __hscore_S_IRUSR() { return S_IRUSR; }
#endif
#ifdef S_IWUSR
mode_t __hscore_S_IWUSR() { return S_IWUSR; }
#endif
#ifdef S_IXUSR
mode_t __hscore_S_IXUSR() { return S_IXUSR; }
#endif

HsAddr
__hscore_d_name( struct dirent* d )
{
  return (HsAddr)(d->d_name);
}

HsInt
__hscore_end_of_dir( void )
{
  return READDIR_ERRNO_EOF;
}

void
__hscore_free_dirent(HsAddr dEnt)
{
#if HAVE_READDIR_R
  free(dEnt);
#endif
}

HsInt
__hscore_sizeof_stat( void )
{
  return sizeof(struct stat);
}

time_t __hscore_st_mtime ( struct stat* st ) { return st->st_mtime; }
off_t  __hscore_st_size  ( struct stat* st ) { return st->st_size; }
#if !defined(_MSC_VER)
mode_t __hscore_st_mode  ( struct stat* st ) { return st->st_mode; }
#endif

#if HAVE_TERMIOS_H
tcflag_t __hscore_lflag( struct termios* ts ) { return ts->c_lflag; }

void
__hscore_poke_lflag( struct termios* ts, tcflag_t t ) { ts->c_lflag = t; }

unsigned char*
__hscore_ptr_c_cc( struct termios* ts )
{ return (unsigned char*) &ts->c_cc; }

HsInt
__hscore_sizeof_termios( void )
{
#ifndef __MINGW32__
  return sizeof(struct termios);
#else
  return 0;
#endif
}
#endif

#if !defined(_MSC_VER) && !defined(__MINGW32__) && !defined(_WIN32)
HsInt
__hscore_sizeof_sigset_t( void )
{
  return sizeof(sigset_t);
}
#endif

int
__hscore_echo( void )
{
#ifdef ECHO
  return ECHO;
#else
  return 0;
#endif

}

int
__hscore_tcsanow( void )
{
#ifdef TCSANOW
  return TCSANOW;
#else
  return 0;
#endif

}

int
__hscore_icanon( void )
{
#ifdef ICANON
  return ICANON;
#else
  return 0;
#endif
}

int __hscore_vmin( void )
{
#ifdef VMIN
  return VMIN;
#else
  return 0;
#endif
}

int __hscore_vtime( void )
{
#ifdef VTIME
  return VTIME;
#else
  return 0;
#endif
}

int __hscore_sigttou( void )
{
#ifdef SIGTTOU
  return SIGTTOU;
#else
  return 0;
#endif
}

int __hscore_sig_block( void )
{
#ifdef SIG_BLOCK
  return SIG_BLOCK;
#else
  return 0;
#endif
}

int __hscore_sig_setmask( void )
{
#ifdef SIG_SETMASK
  return SIG_SETMASK;
#else
  return 0;
#endif
}

int
__hscore_f_getfl( void )
{
#ifdef F_GETFL
  return F_GETFL;
#else
  return 0;
#endif
}

int
__hscore_f_setfl( void )
{
#ifdef F_SETFL
  return F_SETFL;
#else
  return 0;
#endif
}

// defined in rts/RtsStartup.c.

int __hscore_hs_fileno (FILE *f) { return fileno (f); }

int __hscore_open(char *file, int how, mode_t mode) {
#ifdef __MINGW32__
	if ((how & O_WRONLY) || (how & O_RDWR) || (how & O_APPEND))
	  return _sopen(file,how,_SH_DENYRW,mode);
	else
	  return _sopen(file,how,_SH_DENYWR,mode);
#else
	return open(file,how,mode);
#endif
}

// These are wrapped because on some OSs (eg. Linux) they are
// macros which redirect to the 64-bit-off_t versions when large file
// support is enabled.
//
off_t __hscore_lseek(int fd, off_t off, int whence) {
	return (lseek(fd,off,whence));
}

int __hscore_stat(char *file, struct stat *buf) {
	return (stat(file,buf));
}

int __hscore_fstat(int fd, struct stat *buf) {
	return (fstat(fd,buf));
}

// select-related stuff

#if !defined(__MINGW32__)
int  hsFD_SETSIZE(void) { return FD_SETSIZE; }
void hsFD_CLR(int fd, fd_set *fds) { FD_CLR(fd, fds); }
int  hsFD_ISSET(int fd, fd_set *fds) { return FD_ISSET(fd, fds); }
void hsFD_SET(int fd, fd_set *fds) { FD_SET(fd, fds); }
int  sizeof_fd_set(void) { return sizeof(fd_set); }
#endif

// gettimeofday()-related

#if !defined(__MINGW32__)
#define TICK_FREQ  50

HsInt sizeofTimeVal(void) { return sizeof(struct timeval); }

HsInt getTicksOfDay(void)
{
    struct timeval tv;
    gettimeofday(&tv, (struct timezone *) NULL);
    return (tv.tv_sec * TICK_FREQ +
	    tv.tv_usec * TICK_FREQ / 1000000);
}

void setTimevalTicks(struct timeval *p, HsInt ticks)
{
    p->tv_sec  = ticks / TICK_FREQ;
    p->tv_usec = (ticks % TICK_FREQ) * (1000000 / TICK_FREQ);
}
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

int __hscore_CSIDL_PROFILE()  { return CSIDL_PROFILE;  }
int __hscore_CSIDL_APPDATA()  { return CSIDL_APPDATA;  }
int __hscore_CSIDL_WINDOWS()  { return CSIDL_WINDOWS;  }
int __hscore_CSIDL_PERSONAL() { return CSIDL_PERSONAL; }
#endif

#if defined(__MINGW32__)
unsigned int __hscore_get_osver(void) { return _osver; }
#endif

/* ToDo: write a feature test that doesn't assume 'environ' to
 *    be in scope at link-time. */
char **__hscore_environ() { return environ; }

/* lossless conversions between pointers and integral types */
void *    __hscore_from_uintptr(uintptr_t n) { return (void *)n; }
void *    __hscore_from_intptr (intptr_t n)  { return (void *)n; }
uintptr_t __hscore_to_uintptr  (void *p)     { return (uintptr_t)p; }
intptr_t  __hscore_to_intptr   (void *p)     { return (intptr_t)p; }

#endif /* __HSBASE_H__ */

