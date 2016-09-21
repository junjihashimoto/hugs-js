/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 17 "parser.y" /* yacc.c:339  */

#ifndef lint
#define lint
#endif
#define defTycon(n,l,lhs,rhs,w)	 tyconDefn(intOf(l),lhs,rhs,w); sp-=n
#define sigdecl(l,vs,t)		 ap(SIGDECL,triple(l,vs,t))
#define fixdecl(l,ops,a,p)	 ap(FIXDECL,\
				    triple(l,ops,mkInt(mkSyntax(a,intOf(p)))))
#define grded(gs)		 ap(GUARDED,gs)
#define bang(t)			 ap(BANG,t)
#define only(t)			 ap(ONLY,t)
#define letrec(bs,e)		 (nonNull(bs) ? ap(LETREC,pair(bs,e)) : e)
#define qualify(ps,t)		 (nonNull(ps) ? ap(QUAL,pair(ps,t)) : t)
#define exportSelf()		 singleton(ap(MODULEENT,mkCon(module(currentModule).text)))
#define yyerror(s)		 /* errors handled elsewhere */
#define YYSTYPE			 Cell

#ifdef YYBISON
# if !defined(__GNUC__) || __GNUC__ <= 1
static void __yy_memcpy Args((char*,char*, unsigned int));
# endif
#endif

#ifdef _MANAGED
static void yymemcpy (char *yyto, const char *yyfrom, size_t yycount);
#endif

static Cell   local gcShadow	 Args((Int,Cell));
static Void   local syntaxError	 Args((String));
static String local unexpected	 Args((Void));
static Cell   local checkPrec	 Args((Cell));
static Cell   local buildTuple	 Args((List));
static List   local checkCtxt	 Args((List));
static Cell   local checkPred	 Args((Cell));
static Pair   local checkDo	 Args((List));
static Cell   local checkTyLhs	 Args((Cell));
static Cell   local checkConstr	 Args((Cell));

#if MUDO
static Pair   local checkMDo	 Args((List));
#endif

#if !TREX
static Void   local noTREX	 Args((String));
#endif
#if !IPARAM
static Void   local noIP	 Args((String));
#endif
#if !MUDO
static Void   local noMDo	 Args((String));
#endif

/* For the purposes of reasonably portable garbage collection, it is
 * necessary to simulate the YACC stack on the Hugs stack to keep
 * track of all intermediate constructs.  The lexical analyser
 * pushes a token onto the stack for each token that is found, with
 * these elements being removed as reduce actions are performed,
 * taking account of look-ahead tokens as described by gcShadow()
 * below.
 *
 * Of the non-terminals used below, only start, topDecl & begin
 * do not leave any values on the Hugs stack.  The same is true for the
 * terminals EXPR and SCRIPT.  At the end of a successful parse, there
 * should only be one element left on the stack, containing the result
 * of the parse.
 */

#define gc0(e)			gcShadow(0,e)
#define gc1(e)			gcShadow(1,e)
#define gc2(e)			gcShadow(2,e)
#define gc3(e)			gcShadow(3,e)
#define gc4(e)			gcShadow(4,e)
#define gc5(e)			gcShadow(5,e)
#define gc6(e)			gcShadow(6,e)
#define gc7(e)			gcShadow(7,e)


#line 144 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    EXPR = 258,
    CTXT = 259,
    SCRIPT = 260,
    CASEXP = 261,
    OF = 262,
    DATA = 263,
    TYPE = 264,
    IF = 265,
    THEN = 266,
    ELSE = 267,
    WHERE = 268,
    LET = 269,
    IN = 270,
    INFIXN = 271,
    INFIXL = 272,
    INFIXR = 273,
    PRIMITIVE = 274,
    TNEWTYPE = 275,
    DEFAULT = 276,
    DERIVING = 277,
    DO = 278,
    TCLASS = 279,
    TINSTANCE = 280,
    MDO = 281,
    REPEAT = 282,
    ALL = 283,
    NUMLIT = 284,
    CHARLIT = 285,
    STRINGLIT = 286,
    VAROP = 287,
    VARID = 288,
    CONOP = 289,
    CONID = 290,
    QVAROP = 291,
    QVARID = 292,
    QCONOP = 293,
    QCONID = 294,
    RECSELID = 295,
    IPVARID = 296,
    COCO = 297,
    UPTO = 298,
    FROM = 299,
    ARROW = 300,
    IMPLIES = 301,
    TMODULE = 302,
    IMPORT = 303,
    HIDING = 304,
    QUALIFIED = 305,
    ASMOD = 306,
    NEEDPRIMS = 307,
    FOREIGN = 308
  };
#endif
/* Tokens.  */
#define EXPR 258
#define CTXT 259
#define SCRIPT 260
#define CASEXP 261
#define OF 262
#define DATA 263
#define TYPE 264
#define IF 265
#define THEN 266
#define ELSE 267
#define WHERE 268
#define LET 269
#define IN 270
#define INFIXN 271
#define INFIXL 272
#define INFIXR 273
#define PRIMITIVE 274
#define TNEWTYPE 275
#define DEFAULT 276
#define DERIVING 277
#define DO 278
#define TCLASS 279
#define TINSTANCE 280
#define MDO 281
#define REPEAT 282
#define ALL 283
#define NUMLIT 284
#define CHARLIT 285
#define STRINGLIT 286
#define VAROP 287
#define VARID 288
#define CONOP 289
#define CONID 290
#define QVAROP 291
#define QVARID 292
#define QCONOP 293
#define QCONID 294
#define RECSELID 295
#define IPVARID 296
#define COCO 297
#define UPTO 298
#define FROM 299
#define ARROW 300
#define IMPLIES 301
#define TMODULE 302
#define IMPORT 303
#define HIDING 304
#define QUALIFIED 305
#define ASMOD 306
#define NEEDPRIMS 307
#define FOREIGN 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 298 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4111

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  165
/* YYNRULES -- Number of rules.  */
#define YYNRULES  501
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  891

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,     2,     2,     2,     2,     2,
      54,    56,     2,    72,    55,    48,    61,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    58,
       2,    43,     2,     2,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,    46,    59,     2,    71,    60,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,    47,    70,    51,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    44,    49,
      50,    53,    62,    63,    64,    65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   120,   120,   121,   122,   123,   136,   140,   144,   146,
     148,   154,   157,   159,   160,   168,   169,   170,   171,   172,
     177,   178,   179,   180,   181,   183,   184,   189,   190,   191,
     192,   193,   195,   196,   197,   198,   200,   201,   203,   204,
     209,   210,   211,   213,   224,   226,   229,   232,   235,   237,
     238,   239,   241,   242,   243,   244,   246,   247,   249,   250,
     251,   252,   254,   255,   256,   257,   259,   260,   262,   263,
     268,   269,   270,   271,   272,   277,   278,   281,   282,   285,
     289,   291,   294,   295,   298,   302,   303,   309,   311,   312,
     313,   315,   316,   318,   320,   322,   323,   325,   327,   329,
     330,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     342,   343,   344,   345,   346,   347,   349,   350,   351,   353,
     355,   356,   358,   359,   360,   362,   363,   364,   366,   367,
     369,   370,   375,   377,   378,   379,   381,   382,   387,   389,
     391,   393,   395,   401,   402,   403,   404,   405,   406,   408,
     409,   411,   412,   414,   415,   417,   418,   420,   421,   424,
     425,   427,   428,   430,   431,   436,   438,   440,   441,   443,
     444,   445,   446,   448,   450,   452,   453,   455,   456,   458,
     459,   461,   462,   463,   464,   465,   466,   468,   469,   471,
     478,   486,   487,   488,   489,   490,   493,   494,   496,   497,
     498,   499,   500,   502,   503,   505,   506,   508,   509,   511,
     512,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     529,   536,   537,   538,   541,   542,   544,   545,   546,   547,
     550,   551,   553,   560,   561,   562,   563,   564,   565,   566,
     567,   569,   570,   572,   573,   575,   576,   578,   579,   581,
     582,   583,   585,   587,   588,   589,   592,   594,   595,   596,
     598,   599,   600,   601,   602,   604,   605,   606,   607,   608,
     610,   611,   613,   614,   616,   617,   619,   621,   622,   627,
     628,   631,   632,   635,   636,   637,   640,   642,   649,   650,
     655,   656,   658,   659,   661,   663,   664,   665,   667,   668,
     670,   671,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,   684,   685,   687,   688,   690,   691,   693,   694,
     695,   697,   698,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   709,   716,   719,   720,   722,   723,   725,   726,
     728,   729,   731,   732,   735,   736,   738,   750,   751,   753,
     754,   756,   757,   759,   760,   762,   763,   765,   766,   767,
     768,   770,   772,   773,   774,   775,   777,   779,   780,   781,
     788,   790,   793,   794,   799,   800,   802,   803,   806,   807,
     809,   810,   812,   813,   814,   815,   816,   817,   818,   819,
     821,   822,   823,   824,   825,   826,   828,   835,   836,   838,
     839,   840,   841,   843,   844,   847,   848,   850,   859,   860,
     862,   863,   864,   866,   868,   869,   870,   872,   873,   875,
     878,   879,   881,   882,   883,   886,   887,   889,   891,   892,
     894,   895,   897,   898,   903,   904,   905,   921,   922,   923,
     924,   927,   928,   930,   931,   933,   934,   935,   940,   941,
     942,   943,   945,   946,   948,   949,   950,   951,   953,   954,
     956,   957,   958,   959,   960,   961,   963,   964,   965,   967,
     968,   970,   971,   972,   974,   975,   976,   978,   979,   981,
     982,   984,   985,   986,   987,   989,   990,   992,   993,   994,
     997,   998,  1000,  1001,  1002,  1004,  1005,  1007,  1008,  1013,
    1016,  1017
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EXPR", "CTXT", "SCRIPT", "CASEXP", "OF",
  "DATA", "TYPE", "IF", "THEN", "ELSE", "WHERE", "LET", "IN", "INFIXN",
  "INFIXL", "INFIXR", "PRIMITIVE", "TNEWTYPE", "DEFAULT", "DERIVING", "DO",
  "TCLASS", "TINSTANCE", "MDO", "REPEAT", "ALL", "NUMLIT", "CHARLIT",
  "STRINGLIT", "VAROP", "VARID", "CONOP", "CONID", "QVAROP", "QVARID",
  "QCONOP", "QCONID", "RECSELID", "IPVARID", "COCO", "'='", "UPTO", "'@'",
  "'\\\\'", "'|'", "'-'", "FROM", "ARROW", "'~'", "'!'", "IMPLIES", "'('",
  "','", "')'", "'['", "';'", "']'", "'`'", "'.'", "TMODULE", "IMPORT",
  "HIDING", "QUALIFIED", "ASMOD", "NEEDPRIMS", "FOREIGN", "'{'", "'}'",
  "'_'", "'+'", "$accept", "start", "topModule", "startMain", "modname",
  "modid", "modBody", "expspec", "exports", "export", "qnames", "qnames1",
  "qname", "impDecls", "chase", "impDecl", "impspec", "imports",
  "imports1", "import", "names", "names1", "name", "topDecls", "topDecl",
  "tyLhs", "invars", "invar", "constrs", "pconstr", "qconstr", "constr",
  "btype3", "bbtype", "nconstr", "fieldspecs", "fieldspec", "deriving",
  "derivs0", "derivs", "prims", "prim", "crule", "irule", "dtypes",
  "dtypes1", "fds", "fds1", "fd", "varids0", "topType", "topType0",
  "topType1", "polyType", "bpolyType", "varids", "sigType", "context",
  "lcontext", "lacks", "lacks1", "type", "type1", "btype", "btype1",
  "btype2", "atype", "atype1", "btypes2", "typeTuple", "tfields", "tfield",
  "gendecl", "optDigit", "ops", "vars", "decls", "decls0", "decls1",
  "decl", "funlhs", "funlhs0", "funlhs1", "rhs", "rhs1", "gdrhs", "gddef",
  "wherePart", "lwherePart", "ldecls", "ldecls0", "ldecls1", "ldecl",
  "pat", "pat_npk", "npk", "pat0", "pat0_INT", "pat0_vI", "infixPat",
  "pat10", "pat10_vI", "fpat", "apat", "apat_vI", "pats2", "pats1",
  "patbinds", "patbinds1", "patbind", "patfields", "patfield", "exp",
  "exp_err", "exp0", "exp0a", "exp0b", "infixExpa", "infixExpb", "exp10a",
  "exp10b", "then_exp", "else_exp", "pats", "appExp", "aexp", "exps2",
  "vfields", "vfield", "alts", "alts1", "alt", "altRhs", "guardAlts",
  "guardAlt", "stmts", "stmts1", "stmt", "fbinds", "fbinds1", "fbind",
  "list", "zipquals", "quals", "qual", "gcon", "tupCommas", "varid",
  "qconid", "var", "qvar", "con", "qcon", "varop", "varop_mi", "varop_pl",
  "varop_mipl", "qvarop", "qvarop_mi", "conop", "qconop", "op", "qop",
  "begin", "end", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,    61,   298,    64,    92,   124,    45,   299,
     300,   126,    33,   301,    40,    44,    41,    91,    59,    93,
      96,    46,   302,   303,   304,   305,   306,   307,   308,   123,
     125,    95,    43
};
# endif

#define YYPACT_NINF -786

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-786)))

#define YYTABLE_NINF -471

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     531,  -786,  2241,  2047,    29,    82,  -786,  2241,  2241,    16,
      39,    67,  -786,  -786,  -786,  -786,  -786,  -786,  -786,  -786,
    -786,  -786,  3608,  2850,  1614,  1109,  1773,  -786,  -786,  -786,
    -786,   135,  -786,  -786,   112,  -786,   495,  -786,   495,  -786,
    1614,    91,  -786,  -786,  -786,   144,  -786,   127,  -786,  -786,
     221,   419,  -786,  -786,  3988,   205,  -786,   183,  -786,   229,
    -786,   265,    56,  -786,   307,  2522,  2522,  -786,  -786,  -786,
    3608,  3057,  3218,  -786,  -786,  -786,  3296,  -786,   315,   294,
    -786,  -786,    91,   326,   328,   349,   368,  2617,   374,  -786,
    -786,   363,   386,   411,   157,   495,   259,   209,  -786,   421,
     323,  -786,  -786,  2666,  -786,  2666,  -786,   299,   424,   367,
      16,  -786,  1965,  -786,  -786,  -786,  -786,  -786,  -786,  -786,
    -786,  -786,  -786,  -786,  2712,  2758,    91,   592,  1614,   592,
    2476,  -786,  -786,   442,  3728,   554,   950,  1033,  -786,  -786,
    -786,  -786,  -786,   385,  -786,   420,  -786,  2909,  2909,   413,
    2241,   475,    74,  1904,    49,  2241,    16,  2522,   451,    32,
     444,  -786,    32,  -786,    43,   326,   328,   368,  1233,   374,
     386,   411,   454,   458,   461,   480,  -786,    43,    43,  3608,
    -786,   584,   322,  -786,  3608,   482,   279,  1827,  -786,  -786,
    -786,    20,  2241,  -786,  3608,   592,  -786,  -786,  -786,  -786,
    -786,  -786,   470,   477,   481,   485,  -786,  -786,  2241,  -786,
    2568,  2241,  -786,  2241,   385,  -786,  -786,  -786,  2241,   492,
    -786,   496,  2133,  2287,  2241,   515,  -786,  -786,  -786,  2361,
     530,  -786,   540,  -786,  -786,  3803,  3514,  -786,   205,  2850,
    -786,  -786,  2850,  -786,  -786,   726,   532,   556,  -786,   561,
     576,    91,   553,  2396,  -786,  3816,  1339,  -786,  1339,  -786,
    1339,  -786,   570,  -786,   598,  3659,   616,   621,   434,  -786,
     636,   589,  -786,   577,  -786,  2061,   631,   848,   152,   672,
     759,   781,   155,  1042,    71,  1253,  1383,   590,  3101,  2909,
     204,    64,  1248,   579,   603,  -786,   626,  -786,  -786,   199,
    -786,    57,  -786,  3608,  -786,    63,   590,   590,  3013,    32,
    3257,  -786,  2241,  2241,   675,  -786,  -786,    96,  -786,  -786,
    -786,  -786,  -786,  -786,  -786,  -786,   307,  -786,  2241,  -786,
    2804,  -786,   242,  3335,  -786,  -786,  3608,  -786,  3374,  -786,
    -786,  2476,  3413,  3452,  -786,  3374,  -786,  3374,   385,  -786,
    -786,  3374,   664,  3491,  3374,  -786,  -786,  -786,   625,   647,
    -786,   561,   662,  -786,  -786,  -786,  -786,  -786,  -786,  -786,
     654,  -786,   323,  -786,  -786,  -786,  -786,    16,   663,   668,
    -786,   673,  2287,   385,  2396,   694,   670,   530,   696,   698,
    3687,   659,   343,  2476,  2476,  2476,  -786,  2476,  -786,  -786,
    -786,  -786,   349,   687,  -786,   592,  2241,  -786,  -786,  -786,
    3988,  -786,  3988,  -786,  3988,  -786,  2476,  -786,  2476,  -786,
    2476,  -786,  2476,  -786,  2476,   385,  -786,  -786,  2476,  -786,
     161,   703,  1175,   707,  -786,   373,   666,  -786,   714,  -786,
    -786,    52,  -786,   719,  3762,    60,  -786,   293,  -786,  -786,
     906,  -786,   906,  -786,   906,  -786,   776,   203,  -786,   744,
    -786,   724,  3850,  -786,  2019,  -786,   682,   748,  3866,  -786,
     784,   761,  3866,  -786,   267,  -786,  3374,  -786,   756,  3530,
     760,  3145,  -786,  -786,  -786,   373,   239,  -786,  -786,  -786,
     896,   896,  -786,    79,  -786,  2970,   549,   896,  -786,  2476,
    2241,  2666,  -786,   784,   770,  -786,  -786,  -786,  3374,  3374,
    -786,  3569,  -786,  3374,  -786,  -786,  3257,    51,    32,   763,
    -786,  -786,  -786,  2241,  -786,  2241,  -786,  -786,  3608,  -786,
    -786,  -786,  3608,  -786,  3608,  -786,  -786,   762,  -786,   482,
    -786,  -786,  3608,  -786,  -786,  -786,   592,  3374,  -786,   307,
    2241,  2287,  2179,   668,   110,  -786,   690,  3700,   715,  -786,
    2476,  2433,   769,  2433,   772,  -786,  -786,  -786,  -786,  -786,
    -786,  -786,  -786,  3816,  -786,  3816,  -786,   767,  -786,   589,
    -786,  -786,  -786,  4031,  -786,  4045,  -786,  2909,   172,  1399,
    2476,  -786,   533,   777,  -786,  -786,  -786,   777,   777,  3179,
     896,  -786,   172,  1399,   771,   779,  -786,   370,   784,   371,
     766,  -786,   371,  -786,   310,  3608,  3608,  3608,   298,  1451,
     785,   373,  -786,   474,   809,  2970,  -786,  -786,  -786,  -786,
     385,  -786,  -786,  -786,   795,   797,  -786,  3889,  3592,  -786,
      63,  -786,   811,  -786,  -786,  -786,  -786,    43,  -786,  -786,
     310,  -786,  -786,  -786,  2666,  2241,   784,   805,  -786,  -786,
    3374,  -786,  -786,  -786,  -786,  -786,  -786,  -786,  -786,  -786,
    -786,  -786,  -786,  1965,  -786,  -786,   802,  -786,  -786,  -786,
     803,  -786,   808,   806,  -786,  -786,  -786,    32,  -786,   552,
    -786,   385,  3988,   866,   193,  -786,  -786,  3905,    36,  3775,
    1479,   799,   851,   906,  -786,  -786,   676,  -786,   847,  -786,
    2476,  -786,   815,  -786,   961,  -786,  3988,  -786,  -786,  3988,
    -786,  -786,  -786,   373,  -786,   818,  -786,   817,   820,  -786,
    -786,  1451,   182,   896,  1211,   896,   626,  1165,  4008,  4008,
    4008,  4008,  -786,  2241,   826,  -786,  -786,  -786,  -786,  -786,
    -786,  -786,  -786,  1751,  -786,  1399,  1514,    36,  3988,  3988,
     828,   188,  1399,  -786,  3988,  -786,  -786,   850,  3928,  3928,
    3988,  -786,  3928,   509,   896,  -786,  1399,  -786,  -786,   370,
    -786,  -786,  1328,    68,   182,  1205,  -786,  1787,   830,  -786,
     840,   896,  3179,   849,   855,  3948,  -786,  3968,  -786,  -786,
    -786,  -786,  2241,  -786,   193,  1666,  3928,   821,   371,  -786,
    -786,  -786,  3988,  -786,  -786,  -786,  -786,  -786,  -786,  -786,
     102,  -786,   206,  -786,   843,  -786,   864,   847,  -786,   385,
    -786,  -786,  -786,  -786,  -786,  -786,   852,   560,  -786,   853,
     856,  -786,  -786,  -786,  -786,  -786,  3179,   868,  -786,  3179,
    3179,  -786,  -786,  -786,  2322,  -786,  -786,   862,  3636,  -786,
     861,   869,  -786,  -786,   896,  -786,  1520,   896,  3179,  -786,
    -786,  -786,  1853,  -786,  3179,  -786,  -786,  2453,  -786,   371,
    -786,  2476,  -786,  -786,  -786,  -786,  -786,  -786,  -786,  -786,
    -786
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     5,     0,     0,    11,     0,   348,     0,     0,     0,
       0,     0,   393,   390,   391,   392,   454,   469,   466,   471,
     398,   385,     0,     0,     0,     0,     0,   455,   456,   457,
     386,   279,   347,   350,   351,   352,   353,   355,   354,   356,
     370,   381,   387,   460,   468,   382,   473,   448,   459,   458,
       0,     0,     3,   185,   182,     0,   208,     0,     4,   499,
       1,     0,     0,   283,     0,     0,     0,   318,   324,   325,
       0,     0,     0,   326,   379,   320,     0,   322,   319,   448,
     359,   364,   384,   481,   490,   487,   492,     0,   483,   453,
     449,     0,   484,   477,     0,   354,     0,     0,   406,     0,
     460,   489,   478,     0,   494,     0,   450,   434,   435,     0,
       0,     2,     0,   481,   490,   487,   492,   485,   483,   484,
     477,   497,   486,   498,     0,     0,   380,   428,     0,   428,
       0,   181,   195,     0,     0,     0,     0,     0,   223,   207,
     209,   211,   210,     0,    10,    20,    12,    15,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   427,     0,
     420,   424,     0,   331,   296,     0,     0,     0,     0,     0,
       0,     0,     0,   291,   290,   293,   297,   301,   300,   314,
     315,     0,     0,   345,   322,   460,   295,     0,   337,   291,
     290,     0,     0,   378,     0,   338,   461,   470,   467,   472,
     463,   464,     0,     0,     0,     0,   465,   462,     0,   394,
       0,     0,   395,     0,     0,   396,   452,   451,     0,     0,
     351,     0,     0,     0,     0,   436,   399,   280,   202,     0,
       0,   349,     0,   180,   196,   198,   197,   206,   211,     0,
     358,   363,     0,   361,   366,     0,     0,   429,   431,   432,
       0,   383,     0,     0,   190,   197,     0,   186,     0,   183,
       0,   184,     0,   212,     0,     0,     0,     0,     0,   231,
       0,   211,   222,     0,   189,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   296,     0,    15,
       0,     0,     0,     0,    43,    42,    17,    73,   253,     0,
      74,     0,   257,   258,   259,     0,   301,   300,   295,     0,
       0,   375,     0,     0,     0,   373,   501,     0,   284,   500,
     289,   286,   281,   285,   282,   372,   426,   421,     0,   368,
     423,   369,     0,     0,   303,   302,   312,   313,     0,   327,
     328,     0,     0,     0,   316,     0,   329,     0,     0,   332,
     317,     0,     0,     0,     0,   330,   371,   321,     0,   339,
     341,   343,     0,   491,   488,   493,   482,   404,   400,   403,
       0,   405,     0,   407,   401,   402,   437,     0,   446,   442,
     444,   404,     0,     0,     0,   212,     0,   174,     0,   195,
       0,     0,   211,     0,     0,     0,   205,     0,   357,   362,
     360,   365,     0,     0,   389,     0,     0,   388,   187,   193,
     192,   194,   225,   191,   224,   213,     0,   214,     0,   215,
       0,   217,     0,   218,     0,     0,   219,   216,     0,   221,
     459,   471,     0,     0,    21,     0,     0,    26,     0,    27,
      28,     0,    82,     0,    80,    90,    89,     0,   234,   241,
       0,   236,     0,   238,     0,   135,     0,     0,   134,   137,
      85,     0,   182,   148,     0,   146,   157,     0,   150,   147,
     277,     0,   152,   475,     0,   474,     0,   476,     0,     0,
     290,   295,    16,    48,    14,     0,    49,    13,    87,    86,
       0,     0,     7,    43,    18,    70,     0,     0,   271,     0,
       0,     0,   254,   277,   273,   275,   269,   256,     0,     0,
     479,     0,   268,     0,   480,     6,     0,     0,     0,   408,
     412,   374,   377,     0,   288,     0,   425,   422,     0,   306,
     335,   292,     0,   310,     0,   308,   334,     0,   344,     0,
     346,   294,     0,   304,   336,   323,     0,     0,   397,   447,
       0,     0,     0,   441,     0,   178,     0,     0,     0,   175,
       0,     0,   215,     0,   217,   199,   179,   200,   201,   430,
     433,   226,   227,   225,   228,   224,   229,     0,   230,     0,
     232,    22,    31,     0,    23,    32,     9,    15,     0,     0,
       0,    88,     0,   233,   495,   496,   244,   235,   237,     0,
       0,   136,     0,     0,     0,   154,   156,     0,   277,     0,
       0,   144,     0,   262,   295,     0,     0,   328,    49,    52,
       0,     0,    44,     0,     0,     0,    40,    71,    72,   240,
       0,   239,   166,   168,     0,     0,   172,   203,   204,   245,
       0,   272,     0,   270,   274,   261,   260,   294,   264,   299,
     298,   263,   409,   416,     0,     0,   277,   414,   418,   367,
     411,   376,   287,   307,   311,   309,   333,   305,   340,   342,
     445,   443,   440,     0,   177,   188,     0,   220,    24,    25,
       0,    33,     0,    34,    37,    38,    39,     0,    90,    81,
     109,     0,     0,     0,   125,    96,    98,   106,     0,     0,
     105,     0,    75,     0,   132,   133,     0,   119,   125,   145,
       0,   162,   158,   160,     0,   143,   149,   249,   278,   151,
     265,   266,   267,     0,    47,    59,    53,     0,    54,    57,
      58,    52,    49,     0,     0,     0,    19,     0,     0,     0,
       0,     0,   255,     0,     0,   415,   413,   417,   410,   173,
     176,    29,    30,    35,     8,     0,     0,     0,   203,   204,
       0,     0,     0,    78,     0,   114,   112,     0,     0,     0,
       0,   111,     0,     0,     0,   243,     0,    83,   155,     0,
     163,   164,     0,     0,    49,    62,    51,    55,     0,    45,
       0,     0,     0,     0,     0,     0,   169,   204,   167,   170,
     171,   276,     0,    36,   125,     0,     0,   115,   128,   126,
      95,   113,     0,   104,   118,   117,   102,   110,   103,   108,
       0,   121,     0,   246,    76,    92,    94,   125,   159,   161,
     250,   252,   247,   251,   248,    46,     0,     0,    63,     0,
      64,    67,    68,    69,    56,    50,     0,     0,   139,     0,
       0,   165,   419,    79,     0,    97,   100,     0,   105,   101,
       0,   129,   131,   116,     0,   107,     0,     0,     0,    84,
      60,    61,    65,   138,     0,   141,   142,     0,   127,     0,
     120,     0,   122,   123,    91,    93,    66,   140,    99,   130,
     124
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -786,  -786,  -786,  -786,  -786,  -419,  -139,  -786,  -786,   336,
    -786,  -786,   180,  -786,   441,   443,  -580,   208,  -786,   148,
    -786,  -786,    69,   318,   449,  -421,  -786,    80,   197,  -598,
    -786,  -785,  -786,  -577,   177,  -786,    84,  -682,  -786,  -786,
    -786,   357,  -786,  -786,  -786,  -786,  -786,  -786,   185,   189,
    -558,   173,   -74,   104,  1256,  -576,   300,     1,  -786,   -50,
     587,  -127,  -124,  -575,   921,   187,  -205,   710,   -49,  -786,
    -786,   551,  -786,   503,  -376,  -752,  -786,  -786,  -786,  -145,
    -786,   686,   692,  -299,  -786,  -786,   483,  -488,  -786,   -66,
    -786,  -786,  -786,     2,   -60,   -64,  -134,  -786,   473,  -130,
     113,  -119,   -24,    65,  1000,  -786,  -786,  -786,  -786,   435,
    -786,   638,   175,   -10,   -78,   -63,  -786,  -786,  -786,    37,
     391,  -786,  -786,  -786,  -786,    23,   962,  -786,   782,   479,
    -786,   330,  -786,  -786,   345,   -34,  -786,   678,   874,  -786,
     604,  -786,  -786,   628,   462,  1561,    24,    -3,   838,   709,
     -84,   -77,  1464,  -141,  -786,  -786,    -1,  -786,   993,  -179,
      21,   317,    33,  -786,  -123
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,    58,    59,   145,   486,   293,   276,   436,   437,
     682,   683,   684,   294,   494,   295,   622,   727,   728,   729,
     839,   840,   841,   296,   297,   447,   824,   825,   694,   695,
     855,   696,   697,   813,   708,   820,   821,   763,   860,   861,
     457,   458,   466,   470,   604,   605,   608,   712,   713,   714,
     631,   632,   633,   386,   230,   554,   231,   635,   388,    53,
     133,   233,   234,   636,   235,   255,   139,   237,   266,   267,
     268,   269,   298,   450,   593,   299,   718,   782,   783,   300,
     301,   302,   303,   502,   503,   504,   505,   611,   111,    64,
     153,   154,   321,   517,   189,   190,   175,   648,   176,   177,
     335,   178,   179,   337,   180,   181,   191,   358,   359,   360,
     182,   183,   378,    32,    33,    34,    35,    36,    37,    38,
      39,   152,   315,    76,    40,    41,    96,    97,    98,   518,
     519,   520,   656,   657,   658,   159,   160,   161,   246,   247,
     248,   109,   225,   379,   380,    42,   270,    43,    56,    44,
      45,    46,    79,   594,   101,   513,   477,   121,   122,   104,
     353,   596,   124,   148,   322
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,   132,   135,   254,    52,   707,   507,   174,   320,   309,
     273,   173,   264,   305,   305,   643,   582,   306,   306,   305,
     856,   822,   100,   306,   102,   219,   777,   221,   307,   307,
     396,   324,   162,   316,   307,   102,   329,   102,   724,   331,
     220,   704,   220,   250,   227,   250,   105,    82,    55,    99,
     316,   141,   653,   586,   737,   158,   158,   123,   498,   123,
      80,   -77,    95,   126,   498,   488,   618,   150,   185,   316,
     114,   125,   463,   172,   188,   354,   597,   114,   598,   355,
     -41,   116,    60,   304,   304,    63,   313,    74,   205,   304,
     326,    57,   888,   489,   102,    99,   767,   524,   654,   499,
     500,   655,   319,   332,   501,   264,   500,   323,    65,   238,
     501,   362,   822,   232,   151,   756,   123,   757,   -77,   319,
     715,   587,   853,   327,    80,   464,   833,   141,   210,   264,
     -77,   141,   314,   271,   141,   163,    66,   -41,   319,   525,
     274,   193,   290,    16,   336,   869,   476,   158,   110,   -41,
     482,   251,   789,   445,   112,   305,   455,   864,   306,   306,
     127,   240,   243,   336,   810,   508,   509,   689,   746,   307,
     307,   673,   865,   688,    27,    28,    29,    31,   707,   389,
     391,   706,    61,    62,   144,   333,   515,   446,    16,   128,
      54,   439,   816,   815,   815,   818,   129,   815,   342,   343,
      94,   107,   732,   408,   835,   483,   409,   446,   411,   456,
     413,   372,   208,   209,   531,   761,  -469,  -469,    48,    27,
      28,    29,    49,    48,   480,   304,   392,    49,   173,   859,
    -469,   815,   141,   141,   848,   484,   619,   863,   134,    48,
     762,   496,   808,    49,   344,   599,   620,   243,   866,   350,
     392,   143,   141,    55,   497,    55,   213,    55,   600,   357,
     264,   497,   141,   130,   214,   215,   565,   566,   567,   485,
     568,   595,   149,   595,    55,   595,   398,   202,   443,   400,
      55,   204,    55,    55,   461,   185,   467,   471,   873,   571,
     172,   875,   876,   619,   572,   576,   574,   577,   147,   236,
      16,   580,   202,   620,   784,   621,   204,   514,   333,   336,
     885,   549,    99,   114,   211,   212,   887,   116,   336,   336,
     158,   250,   155,   265,   194,   311,    16,   342,   343,   336,
     325,    27,    28,    29,   389,   558,   590,   606,   141,   332,
     530,   742,   613,   222,   114,   539,   223,   536,   116,   537,
     628,   352,   619,   540,   224,   194,   544,    27,    28,    29,
     194,   305,   620,   195,   723,   306,   218,   356,   506,   347,
     332,   711,   640,   512,   645,   646,   307,   348,   349,   651,
     555,   392,   196,   367,   197,   428,   369,   141,   370,   143,
     141,   141,   141,   373,   141,   659,    16,   376,   202,   381,
     203,   344,   204,  -163,   484,   198,    48,   141,    48,   141,
      49,   141,    49,   141,    81,   141,   390,   141,    16,   141,
    -163,   141,   579,   642,   199,   141,   226,    27,    28,    29,
     201,   304,   396,   676,  -163,  -163,  -163,   572,   220,   574,
     265,   141,   206,   410,   591,   412,   529,   414,   687,    27,
      28,    29,    16,   305,    48,   533,   535,   306,    49,   141,
      50,   141,   362,   702,   444,   141,   543,   207,   307,   141,
     462,   205,   468,   472,   275,   131,   216,   217,    81,   211,
     514,   424,   310,    27,    28,    29,   312,   521,   522,   425,
     426,   305,   766,   238,   396,   306,   141,   256,   257,   439,
     328,   685,   330,   526,   336,   733,   307,    16,   336,   338,
     336,   411,   701,   413,   339,   241,   244,   340,   336,   768,
     769,   772,   341,   304,   595,   351,   701,   113,   456,   114,
     363,   115,     1,   116,     2,     3,     4,   364,    27,    28,
      29,   365,    16,   117,   506,   366,   512,   118,   374,   669,
     629,   674,   375,   396,   141,    91,   119,   141,   238,   811,
     238,   304,   382,   456,   754,   817,    16,   120,   202,   264,
     141,   557,   141,    27,    28,    29,   744,   630,   806,   819,
     393,   570,    16,   778,    48,    16,   141,   141,    49,   205,
      50,   220,   165,   394,   166,   755,   238,    27,    28,    29,
     141,   244,   404,   229,  -468,   573,   137,   575,   403,   260,
     261,   405,   169,    27,    28,    29,    27,    28,    29,   406,
     138,   170,   113,   407,   114,    16,   415,   555,   116,    18,
     399,   428,   171,   401,   141,   141,   429,   831,   473,   345,
     346,   663,   118,   408,   441,   664,   245,   665,   305,   492,
     474,   119,   306,   416,   417,   667,    27,    28,    29,   832,
     834,   493,   475,   307,   796,   798,   799,   800,   333,   685,
     238,   420,   421,   448,   232,   641,   422,   423,   701,   772,
     720,   721,   722,   638,   495,   701,   591,   523,   555,   141,
     392,   216,   427,   541,   141,   545,   141,   141,   661,   701,
     662,   449,   546,   591,  -242,   547,  -242,   141,   843,    16,
     548,   781,   550,   141,   563,   564,   141,   552,   304,   776,
    -242,   583,   584,   551,  -242,   670,   559,   672,   701,   607,
     264,    78,  -242,  -242,   674,   141,   141,   141,   141,   883,
      27,    28,    29,   200,  -242,   256,   675,  -181,   573,   560,
     575,  -187,   141,   674,   890,   141,   141,  -458,   165,   141,
     451,   141,   402,   581,   140,   141,   141,   141,   585,   141,
     563,   421,   588,   141,   403,   601,   700,   602,   169,    78,
     186,   186,   453,   452,   454,    78,   638,   170,   449,   238,
     700,  -242,   238,  -242,   141,   843,   716,   610,   171,   719,
     701,   609,   238,   141,   389,   391,   857,  -242,   165,   141,
     449,  -242,   615,  -242,   612,  -242,   617,   501,   666,  -242,
    -242,   660,  -183,   677,   403,  -184,   781,   709,   169,  -242,
     745,  -242,   703,  -242,   710,   717,   249,   170,   249,   731,
     735,  -242,  -242,   238,   140,   738,   238,   238,   171,   442,
     739,   392,   654,  -242,   743,   141,   308,   308,   750,   751,
     236,   753,   308,   141,   752,   238,   774,   228,   773,   761,
     779,   238,   785,   786,   141,   787,   802,    78,   141,   759,
     265,    16,   846,    48,   807,   202,   845,    49,    78,    50,
    -470,   849,   142,    78,   383,   146,    78,   850,   867,    16,
     760,    48,    51,    78,   361,    49,   868,    50,   870,   871,
     874,   872,    27,    28,    29,   877,   262,   878,   801,   679,
     384,    89,   263,   137,   879,   797,   797,   797,   797,    16,
      27,    28,    29,   803,   625,   844,   626,   138,   113,   788,
     114,   886,   700,   736,   627,   140,   140,   884,   880,   700,
     456,   228,   804,   827,   473,   759,   759,   705,   118,   759,
      27,    28,    29,   700,   828,   140,   592,   119,   851,   829,
     882,   556,   142,   749,   478,   140,   578,   852,   475,   638,
     479,   668,   638,    16,   649,    48,   538,   644,   108,    49,
     748,   459,   858,   759,    16,   652,   371,   481,   308,   759,
     262,   491,   747,   252,   253,    89,   263,   137,   527,   569,
     553,   780,    78,   671,    27,    28,    29,    78,   103,   186,
     775,   138,    75,     0,     0,    27,    28,    29,     0,     0,
       0,     0,     0,   638,   228,     0,   638,   638,     0,     0,
       0,   390,    78,   460,     0,    78,     0,   186,     0,     0,
       0,    78,    78,     0,   186,   638,   186,     0,     0,     0,
     186,   638,    78,   186,   700,     0,    16,     0,    48,     0,
      75,     0,    49,   142,   142,    16,    75,    48,     0,     0,
       0,    49,     0,    50,     0,     0,     0,   253,     0,     0,
     137,     0,   272,   142,     0,     0,    51,    27,    28,    29,
     140,     0,     0,   142,   138,     0,    27,    28,    29,     0,
       6,     0,     0,   438,   249,     7,     0,     0,     0,     8,
     140,     0,   140,     9,   140,     0,     0,     0,   487,     0,
       0,     0,    10,     0,     0,    11,    12,     0,    13,    14,
      15,    83,    16,    84,    17,    85,    18,    86,    19,    20,
      21,     0,     0,     0,   140,    22,     0,    87,     0,     0,
      24,    88,     0,    25,    89,    90,    26,     0,    75,    91,
      92,     0,   140,    27,    28,    29,     0,     0,   140,    75,
      30,    93,   140,     0,    75,   614,     0,    75,    78,     0,
      78,     0,     0,     0,    75,     0,     0,     0,    16,   623,
     624,     0,     0,     0,   308,     0,   639,   165,     0,   166,
       0,   402,     0,   167,     0,     0,     0,   614,   614,     0,
     650,     0,   614,   403,     0,   186,   795,   169,   142,    27,
      28,    29,     0,     0,   334,     0,   170,    78,    16,     0,
      17,    78,   791,    78,    16,     0,     0,   171,   142,   836,
     142,    78,   142,   792,   465,   361,   186,     0,     0,   837,
     838,     0,    67,    68,    69,   456,    16,   140,    17,    27,
      28,    29,    19,   487,     0,    27,    28,    29,     0,     0,
       0,    16,   142,   140,    70,   140,    16,    71,    48,   200,
      72,     0,    49,     0,    50,     0,   308,    27,    28,    29,
     142,     0,   456,    75,    73,     0,   142,    51,    75,   459,
     142,   490,    27,    28,    29,     0,     0,    27,    28,    29,
       0,     0,     0,   487,    78,    78,    78,     0,   730,   316,
       0,     0,   734,    75,   308,     0,    75,     0,     0,     0,
       0,     0,    75,    75,   279,   280,   281,   140,   140,     0,
       0,     0,     0,    75,     0,     0,     0,   287,    68,    69,
       0,    16,     0,    17,     0,     0,     0,    19,     0,   186,
       0,     0,    16,     0,    48,     0,   187,     0,    49,    70,
      50,     0,   288,     0,   469,    72,   830,     0,     0,     0,
       0,     0,    27,    28,    29,   142,     0,     0,   319,    73,
     690,     0,     0,    27,    28,    29,     0,   140,     0,   140,
     140,   142,     0,   142,     0,     0,    16,   637,    48,     0,
       0,   438,    49,     0,    50,     0,   140,   691,     0,   140,
       0,     0,    16,     0,   430,     0,     0,    51,    49,     0,
     730,     0,   790,   793,   794,     0,     0,    27,    28,    29,
       0,   692,     0,   693,     0,     0,   137,     0,     0,   487,
       0,     0,     0,    27,    28,    29,    47,     0,   140,   140,
     138,    47,    47,     0,   140,   142,   142,     0,     0,    75,
     140,    75,   823,   826,    16,   387,   725,    47,    47,    47,
      47,   308,     0,     0,   842,     0,   730,     0,     0,     0,
     847,     0,     0,     0,    47,   456,   726,   140,     0,   387,
     699,     0,    16,   114,    48,    27,    28,    29,    49,     0,
     637,   228,     0,     0,   699,     0,     0,     0,    75,    47,
      47,   770,    75,   253,    75,   142,   137,   142,   142,   767,
       0,     0,    75,    27,    28,    29,     0,    16,   383,     0,
     138,    47,     0,    16,   142,    48,     0,   142,     0,    49,
       0,   487,     0,     0,     0,     0,     0,    47,   140,    47,
       0,     0,   881,   823,   253,   805,   826,   137,    27,    28,
      29,   842,     0,    77,    27,    28,    29,     0,    47,    47,
       0,   138,    47,     0,     0,     0,   142,   142,     0,   809,
       0,     0,   142,     0,     0,     0,     0,     0,   142,     0,
       0,     0,     0,   758,    47,    75,    75,    75,     0,    47,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,   184,   184,     0,   142,     0,    77,     0,     0,
     387,    12,     0,    13,    14,    15,   862,    16,     0,    17,
       0,    18,     0,    19,    20,    21,    47,     0,     0,   637,
     637,   637,   637,     0,     0,    24,     0,   690,    25,     0,
       0,    26,    47,     0,    47,    47,   699,    47,    27,    28,
      29,     0,    47,   699,     0,    30,    47,    47,    47,   758,
     758,     0,     0,   758,     0,     0,   142,   699,     0,    16,
       0,   430,     0,    47,     0,    49,    47,    50,   184,   184,
       0,     0,     0,   637,   184,     0,   637,   889,   692,     0,
     854,     0,     0,   137,     0,     0,   699,   758,     0,   184,
      27,    28,    29,   758,     0,     0,     0,   138,     0,   440,
      77,     0,     0,     0,     0,    77,     0,     0,   184,     0,
       0,     0,   634,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   637,     0,     0,
     637,   637,     0,     0,     6,     0,    47,    47,     0,     7,
       0,     0,     0,     8,    16,     0,    17,     9,    18,   637,
      19,     0,    47,     0,    47,   637,    10,     0,   699,    11,
      12,     0,    13,    14,    15,   432,    16,     0,    17,     0,
      18,     0,    19,    20,    21,    27,    28,    29,     0,    22,
      16,    23,   725,     0,    24,     0,     0,    25,   334,     0,
      26,     0,   106,     0,     0,     0,     0,    27,    28,    29,
       0,   456,     0,     0,    30,   698,    47,     0,     0,   184,
     184,    27,    28,    29,     0,   634,    67,    68,    69,   698,
      16,     0,    17,     0,    77,     0,    19,     0,     0,    77,
      47,   184,     0,     0,     0,     0,     0,     0,    70,     0,
       0,    71,     0,     0,    72,     0,    16,     0,    17,     0,
       0,    27,    28,    29,   184,     0,     0,    77,    73,   184,
       0,     0,     0,   184,   184,   316,   184,   837,   184,     0,
       0,     0,   184,     0,   184,   184,     0,    27,    28,    29,
     279,   280,   281,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   287,    68,    69,     0,    16,     0,    17,
       0,     0,     0,    19,     0,   317,     0,     0,     0,   387,
       0,     0,   187,   765,     0,    70,   771,     0,   288,     0,
       0,    72,   318,     0,    47,    47,   228,     0,    27,    28,
      29,     0,     0,     0,   319,    73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,    47,
       0,     0,     0,     0,   634,   634,   634,   634,    16,     0,
      48,     0,     0,     0,    49,     0,    50,     0,     0,     0,
       0,   698,     0,     0,    47,    47,    47,     0,   698,   229,
     228,     0,   137,     0,   814,   814,     0,     0,   814,    27,
      28,    29,   698,     0,     0,     0,   138,   184,     0,     0,
      77,     0,    77,     0,     0,     0,     0,   440,   634,   686,
       0,   634,    16,     0,    48,     0,   184,     0,    49,     0,
       0,   698,   814,     0,     0,     0,     0,     0,     0,   184,
     184,     0,   184,   253,   184,  -153,   137,   184,     0,     0,
      16,     0,    48,    27,    28,    29,    49,     0,    50,   184,
     138,     0,     0,   184,    16,   184,   430,     0,    18,     0,
     431,    51,   634,   184,     0,   634,   634,     0,   184,     0,
     387,    27,    28,    29,   771,   432,   433,   434,    47,    47,
       0,     0,   387,   435,   634,    27,    28,    29,     0,     0,
     634,     0,     0,   698,     6,     0,     0,     0,     0,     7,
       0,     0,     0,     8,     0,     0,     0,     9,   184,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,    11,
      12,     0,    13,    14,    15,     0,    16,     0,    17,     0,
      18,     0,    19,    20,    21,     0,    77,    77,    77,    22,
       6,    23,     0,     0,    24,     7,   184,    25,     0,     8,
      26,     0,  -439,     9,     0,     0,     0,    27,    28,    29,
       0,     0,    10,     0,    30,    11,    12,    47,    13,    14,
      15,     0,    16,     0,    17,     0,    18,   686,    19,    20,
      21,   184,     0,     0,     0,    22,     0,    23,     0,     0,
      24,     0,     0,    25,     0,     0,    26,     0,  -438,     0,
       0,     0,     6,    27,    28,    29,     0,     7,     0,     0,
      30,     8,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,    47,    11,    12,     0,
      13,    14,    15,     0,    16,     0,    17,     0,    18,     0,
      19,    20,    21,     0,     0,     0,     0,    22,     6,    23,
       0,     0,    24,     7,     0,    25,     0,     8,    26,     0,
       0,   377,     0,     0,     0,    27,    28,    29,     0,     0,
      10,     0,    30,    11,    12,     0,    13,    14,    15,     0,
      16,     0,    17,   228,    18,     0,    19,    20,    21,     0,
       0,     0,     0,    22,     0,    23,     0,     0,    24,     0,
       0,    25,     0,   184,    26,     0,     0,     0,     0,     0,
     383,    27,    28,    29,     0,    16,   760,    48,    30,     0,
       0,    49,   228,    50,     0,     0,     0,     0,     0,     0,
       0,     0,   262,     0,     0,     0,   384,    89,   385,   137,
       0,     0,     0,     0,     0,     0,    27,    28,    29,   383,
       0,     0,     0,   138,    16,     0,    48,   228,     0,     0,
      49,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,   262,     0,     0,     0,   384,    89,   385,   137,     0,
       0,     0,     0,     0,   383,    27,    28,    29,     0,    16,
       0,    48,   138,     0,   228,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,   262,     0,     0,     0,
     384,    89,   263,   137,   690,     0,     0,     0,     0,     0,
      27,    28,    29,     0,     0,     0,    16,   138,    48,     0,
       0,     0,    49,     0,    50,     0,     0,   228,     0,     0,
       0,     0,     0,     0,     0,     0,    16,   253,   430,     0,
     137,     0,    49,     0,     0,     0,     0,    27,    28,    29,
       0,     0,     0,     0,   138,   692,     0,   693,     0,    16,
     137,    48,     0,     0,     0,    49,     0,    27,    28,    29,
       0,     0,     0,     0,   138,     0,     0,     0,     7,     0,
     253,     0,     8,   137,     0,     0,   156,     0,     0,     0,
      27,    28,    29,     0,     0,    10,     0,   138,    11,    12,
       0,    13,    14,    15,     0,    16,     0,    17,     0,    18,
       0,    19,    20,    21,     0,     0,     0,     0,    22,     0,
      23,     0,     0,    24,     7,     0,    25,     0,     8,    26,
     157,     0,     9,     0,     0,     0,    27,    28,    29,     0,
       0,    10,     0,    30,    11,    12,     0,    13,    14,    15,
       0,    16,     0,    17,     0,    18,     0,    19,    20,    21,
       0,     0,     0,     0,    22,     0,   242,     0,     0,    24,
       0,     0,    25,     7,   368,    26,     0,     8,     0,     0,
       0,     9,    27,    28,    29,     0,     0,     0,     0,    30,
      10,     0,     0,    11,    12,     0,    13,    14,    15,     0,
      16,     0,    17,     0,    18,     0,    19,    20,    21,     0,
       0,     0,     0,    22,     0,     0,     0,     0,    24,     0,
       0,    25,     7,   200,    26,     0,     8,     0,     0,     0,
       9,    27,    28,    29,     0,     0,     0,     0,    30,    10,
       0,     0,    11,    12,     0,    13,    14,    15,     0,    16,
       0,    17,     0,    18,     0,    19,    20,    21,     0,     0,
       0,     0,    22,     0,    23,     0,     0,    24,     7,     0,
      25,     0,     8,    26,     0,     0,     9,     0,     0,     0,
      27,    28,    29,     0,     0,    10,     0,    30,    11,    12,
       0,    13,    14,    15,     0,    16,     0,    17,     0,    18,
       0,    19,    20,    21,     0,     0,     0,     0,    22,     0,
     239,     0,     0,    24,     7,     0,    25,     0,     8,    26,
       0,     0,     9,     0,     0,     0,    27,    28,    29,     0,
       0,    10,     0,    30,    11,    12,     0,    13,    14,    15,
       0,    16,     0,    17,     0,    18,     0,    19,    20,    21,
       0,     0,     0,     0,    22,     0,   242,     0,     0,    24,
       7,     0,    25,     0,     8,    26,     0,     0,   156,     0,
       0,     0,    27,    28,    29,     0,     0,    10,     0,    30,
      11,    12,     0,    13,    14,    15,     0,    16,     0,    17,
       0,    18,     0,    19,    20,    21,     0,     0,     0,     0,
      22,     0,    23,     0,     0,    24,     7,     0,    25,     0,
       8,    26,     0,     0,     9,     0,     0,     0,    27,    28,
      29,     0,     0,    10,     0,    30,    11,    12,     0,    13,
      14,    15,     0,    16,     0,    17,     0,    18,     0,    19,
      20,    21,     0,     0,     0,     0,    22,     0,     0,     0,
       0,    24,     0,     0,    25,     0,     0,    26,     0,     0,
       0,     0,     0,     0,    27,    28,    29,   277,   278,     0,
       0,    30,     0,     0,     0,   279,   280,   281,   282,   283,
     284,     0,     0,   285,   286,     0,     0,     0,   287,    68,
      69,     0,    16,     0,    17,     0,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,   187,     0,     0,
      70,     0,     0,   288,     0,     0,    72,   289,     0,     0,
       0,     0,   290,    27,    28,    29,   291,   292,   277,   278,
      73,     0,     0,     0,     0,     0,   279,   280,   281,   282,
     283,   284,     0,     0,   285,   286,     0,     0,     0,   287,
      68,    69,     0,    16,     0,    17,     0,     0,     0,    19,
       0,     0,     0,     0,     0,     0,     0,     0,   187,     0,
       0,    70,     0,     0,   288,     0,     0,    72,     0,     0,
       0,     0,     0,     0,    27,    28,    29,   291,   292,     0,
       0,    73,    67,    68,    69,   113,    16,   114,    17,     0,
       0,   116,    19,     0,     0,  -246,     0,     0,   194,     0,
       0,   510,     0,     0,    70,   118,     0,    71,  -246,     0,
      72,     0,     0,   474,   119,     0,     0,    27,    28,    29,
       0,     0,     0,     0,    73,   511,   164,    68,    69,   165,
      16,   166,    17,     0,     0,   167,    19,     0,     0,     0,
       0,     0,     0,     0,     0,   168,     0,     0,    70,   169,
       0,    71,    89,    90,    72,     0,     0,     0,   170,     0,
       0,    27,    28,    29,     0,     0,     0,     0,    73,   171,
     287,    68,    69,   165,    16,   166,    17,     0,     0,   167,
      19,     0,     0,     0,     0,     0,     0,     0,     0,   168,
       0,     0,    70,   169,     0,   288,    89,    90,    72,     0,
       0,     0,   170,     0,     0,    27,    28,    29,     0,     0,
       0,     0,    73,   171,    67,    68,    69,   113,    16,   114,
      17,     0,     0,   116,    19,     0,     0,     0,     0,     0,
     194,     0,     0,   510,     0,     0,    70,   118,     0,    71,
       0,     0,    72,     0,     0,   474,   119,   630,     0,    27,
      28,    29,    16,     0,    48,     0,    73,   511,    49,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   229,     0,     0,   137,     0,     0,     0,
       0,     0,     0,    27,    28,    29,     0,   164,    68,    69,
     138,    16,     0,    17,     0,     0,     0,    19,     0,     0,
       0,     0,     0,     0,     0,     0,   187,     0,     0,    70,
       0,     0,    71,     0,     0,    72,     0,   106,     0,     0,
       0,     0,    27,    28,    29,     0,   164,    68,    69,    73,
      16,     0,    17,     0,     0,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,   187,     0,     0,    70,     0,
       0,    71,     0,     0,    72,   516,     0,     0,     0,     0,
       0,    27,    28,    29,     0,    67,    68,    69,    73,    16,
       0,    17,     0,     0,     0,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   192,    70,     0,     0,
      71,     0,     0,    72,     0,     0,     0,     0,     0,     0,
      27,    28,    29,     0,    67,    68,    69,    73,    16,     0,
      17,     0,     0,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,   528,     0,     0,    70,     0,     0,    71,
       0,     0,    72,     0,     0,     0,     0,     0,     0,    27,
      28,    29,     0,   164,    68,    69,    73,    16,     0,    17,
       0,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,   187,     0,     0,    70,     0,     0,    71,     0,
       0,    72,     0,     0,     0,     0,     0,     0,    27,    28,
      29,     0,    67,    68,    69,    73,    16,     0,    17,     0,
       0,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,   532,     0,     0,    70,     0,     0,    71,     0,     0,
      72,     0,     0,     0,     0,     0,     0,    27,    28,    29,
       0,    67,    68,    69,    73,    16,     0,    17,     0,     0,
       0,    19,     0,     0,     0,     0,     0,     0,     0,     0,
     534,     0,     0,    70,     0,     0,    71,     0,     0,    72,
       0,     0,     0,     0,     0,     0,    27,    28,    29,     0,
      67,    68,    69,    73,    16,     0,    17,     0,     0,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,   542,
       0,     0,    70,     0,     0,    71,     0,    16,    72,    48,
       0,     0,     0,    49,     0,    27,    28,    29,     0,    67,
      68,    69,    73,    16,   397,    17,     0,  -182,   136,    19,
       0,   137,     0,     0,     0,     0,     0,     0,    27,    28,
      29,    70,     0,     0,    71,   138,   616,    72,     0,     0,
       0,     0,     0,     0,    27,    28,    29,     0,   647,    68,
      69,    73,    16,     0,    17,     0,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,   187,     0,     0,
      70,     0,     0,    71,     0,    16,    72,    48,     0,     0,
       0,    49,     0,    27,    28,    29,     0,    67,    68,    69,
      73,    16,   741,    17,     0,  -182,   136,    19,     0,   137,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    70,
       0,     0,    71,   138,     0,    72,     0,     0,     0,    16,
     114,    48,    27,    28,    29,    49,     0,     0,     0,    73,
       0,     0,     0,     0,     0,     0,     0,     0,   770,  -182,
     253,     0,    16,   137,    48,     0,   767,     0,    49,     0,
      27,    28,    29,     0,     0,     0,     0,   138,     0,   397,
       0,     0,     0,   136,   418,   419,   137,     0,     0,     0,
      16,     0,    48,    27,    28,    29,    49,     0,     0,     0,
     138,     0,     0,    16,     0,    48,     0,   397,     0,    49,
       0,   136,   561,   562,   137,     0,     0,     0,     0,     0,
     397,    27,    28,    29,   136,   561,   419,   137,   138,     0,
       0,    16,     0,    48,    27,    28,    29,    49,     0,     0,
       0,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   136,   258,   259,   137,     0,     0,     0,     0,
       0,     0,    27,    28,    29,    16,     0,    48,     0,   138,
       0,    49,     0,     0,     0,   589,     0,     0,    16,   114,
      48,     0,     0,     0,    49,  -182,   136,     0,     0,   137,
       0,     0,     0,     0,     0,     0,    27,    28,    29,   136,
       0,     0,   137,   138,     0,   767,    16,     0,    48,    27,
      28,    29,    49,     0,     0,     0,   138,     0,     0,    16,
       0,    48,     0,   395,     0,    49,     0,   136,     0,     0,
     137,     0,     0,     0,     0,     0,   397,    27,    28,    29,
     136,     0,     0,   137,   138,     0,     0,     0,     0,     0,
      27,    28,    29,    16,     0,    48,     0,   138,     0,    49,
       0,     0,     0,   603,     0,     0,     0,     0,     0,    16,
       0,    48,     0,     0,   136,    49,     0,   137,     0,     0,
       0,     0,     0,     0,    27,    28,    29,     0,     0,  -182,
     136,   138,    16,   137,    48,     0,     0,     0,    49,     0,
      27,    28,    29,     0,     0,     0,     0,   138,    16,   740,
      48,     0,     0,   136,    49,     0,   137,     0,     0,     0,
       0,     0,     0,    27,    28,    29,     0,   764,     0,   253,
     138,    16,   137,    48,     0,     0,     0,    49,     0,    27,
      28,    29,     0,     0,     0,     0,   138,     0,     0,     0,
     812,    16,   253,    48,     0,   137,     0,    49,     0,    50,
       0,     0,    27,    28,    29,     0,     0,     0,     0,   138,
       0,    16,   229,    48,     0,   137,     0,    49,     0,     0,
       0,     0,    27,    28,    29,     0,     0,     0,   741,   138,
       0,    16,   136,    48,     0,   137,     0,    49,     0,     0,
       0,     0,    27,    28,    29,     0,     0,     0,     0,   138,
       0,    16,   136,    48,     0,   137,     0,    49,     0,     0,
       0,     0,    27,    28,    29,     0,     0,     0,     0,   138,
       0,     0,   253,     0,    16,   137,   430,     0,    18,     0,
     431,     0,    27,    28,    29,     0,     0,     0,    16,   138,
      17,     0,    18,     0,    19,   432,     0,   678,     0,   680,
       0,     0,     0,   435,     0,    27,    28,    29,     0,   432,
     681,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,    29
};

static const yytype_int16 yycheck[] =
{
       3,    51,    51,   130,     3,   603,   305,    71,   153,   148,
     137,    71,   136,   147,   148,   503,   435,   147,   148,   153,
     805,   773,    25,   153,    25,   103,   708,   105,   147,   148,
     235,   154,    66,     1,   153,    36,   159,    38,   618,   162,
     103,   599,   105,   127,   110,   129,    25,    24,    51,    25,
       1,    54,     1,     1,   630,    65,    66,    36,     1,    38,
      23,     1,    25,    40,     1,     1,   485,    11,    71,     1,
      34,    38,     1,    71,    72,    55,   452,    34,   454,    59,
       1,    38,     0,   147,   148,    69,    12,    22,    91,   153,
     156,    62,   877,    29,    95,    71,    60,     1,    47,    42,
      43,    50,    70,    60,    47,   229,    43,    58,    69,   112,
      47,   195,   864,   112,    58,   691,    95,   692,    58,    70,
     608,    69,   804,   157,    87,    54,    58,   130,    95,   253,
      70,   134,    58,   136,   137,    70,    69,    58,    70,    43,
     143,    76,    63,    33,   168,   827,   287,   157,    13,    70,
     289,   128,   732,     1,    42,   289,     1,    55,   288,   289,
      69,   124,   125,   187,   762,   306,   307,   588,   656,   288,
     289,    61,    70,     1,    64,    65,    66,     2,   776,   229,
     229,   602,     7,     8,     1,   164,   309,    35,    33,    45,
       3,   275,   769,   768,   769,   772,    69,   772,   177,   178,
      25,    26,   621,   253,   784,     1,   256,    35,   258,    54,
     260,   214,    55,    56,   341,    22,    55,    56,    35,    64,
      65,    66,    39,    35,   288,   289,   229,    39,   288,   806,
      69,   806,   235,   236,   792,    31,    54,   812,    51,    35,
      47,    42,    54,    39,   179,    42,    64,   210,    42,   184,
     253,    46,   255,   256,    55,   258,    47,   260,    55,   194,
     384,    55,   265,    42,    55,    56,   393,   394,   395,    65,
     397,   450,     7,   452,   277,   454,   239,    35,   277,   242,
     283,    39,   285,   286,   283,   288,   285,   286,   846,   416,
     288,   849,   850,    54,   418,   422,   420,   424,    69,   112,
      33,   428,    35,    64,   723,    66,    39,   308,   287,   333,
     868,   377,   288,    34,    55,    56,   874,    38,   342,   343,
     330,   405,    15,   136,    45,   150,    33,   306,   307,   353,
     155,    64,    65,    66,   384,   384,    43,   464,   341,    60,
     338,   640,   476,    44,    34,   348,    47,   345,    38,   347,
     495,    72,    54,   351,    55,    45,   354,    64,    65,    66,
      45,   495,    64,    69,    66,   495,    43,   192,   303,    47,
      60,     1,   499,   308,   508,   509,   495,    55,    56,   513,
     383,   384,    56,   208,    56,    42,   211,   390,   213,    46,
     393,   394,   395,   218,   397,   518,    33,   222,    35,   224,
      37,   336,    39,    33,    31,    56,    35,   410,    35,   412,
      39,   414,    39,   416,    23,   418,   229,   420,    33,   422,
      50,   424,   425,   501,    56,   428,    59,    64,    65,    66,
      56,   495,   637,   560,    64,    65,    66,   561,   501,   563,
     253,   444,    56,   256,   447,   258,   333,   260,   587,    64,
      65,    66,    33,   587,    35,   342,   343,   587,    39,   462,
      41,   464,   546,   590,   277,   468,   353,    56,   587,   472,
     283,   474,   285,   286,    54,    56,    55,    56,    87,    55,
     481,    47,    69,    64,    65,    66,    11,   312,   313,    55,
      56,   625,   697,   496,   699,   625,   499,    55,    56,   583,
      49,   585,    58,   328,   528,    31,   625,    33,   532,    55,
     534,   561,   589,   563,    56,   124,   125,    56,   542,   698,
     699,   700,    42,   587,   703,    43,   603,    32,    54,    34,
      60,    36,     1,    38,     3,     4,     5,    60,    64,    65,
      66,    60,    33,    48,   479,    60,   481,    52,    56,   547,
       1,   554,    56,   758,   557,    60,    61,   560,   561,   764,
     563,   625,    47,    54,   687,   770,    33,    72,    35,   693,
     573,   384,   575,    64,    65,    66,   654,    28,   757,    70,
      50,   406,    33,   710,    35,    33,   589,   590,    39,   592,
      41,   654,    32,    53,    34,    43,   599,    64,    65,    66,
     603,   210,    70,    54,    43,   418,    57,   420,    48,    55,
      56,    55,    52,    64,    65,    66,    64,    65,    66,    43,
      71,    61,    32,    70,    34,    33,    56,   630,    38,    37,
     239,    42,    72,   242,   637,   638,    59,   782,    48,    55,
      56,   528,    52,   693,    13,   532,    54,   534,   782,    70,
      60,    61,   782,    55,    56,   542,    64,    65,    66,   782,
     783,    58,    72,   782,   738,   739,   740,   741,   647,   753,
     673,    55,    56,     1,   673,   500,    55,    56,   755,   858,
     615,   616,   617,   496,    58,   762,   689,    12,   691,   692,
     693,    55,    56,    29,   697,    70,   699,   700,   523,   776,
     525,    29,    55,   706,    32,    43,    34,   710,   785,    33,
      56,   714,    49,   716,    55,    56,   719,    44,   782,    43,
      48,    55,    56,    55,    52,   550,    56,   552,   805,    47,
     854,    22,    60,    61,   737,   738,   739,   740,   741,   866,
      64,    65,    66,    56,    72,    55,    56,    53,   561,    53,
     563,    53,   755,   756,   881,   758,   759,    54,    32,   762,
       1,   764,    36,    56,    54,   768,   769,   770,    54,   772,
      55,    56,    53,   776,    48,    31,   589,    53,    52,    70,
      71,    72,     1,   280,   281,    76,   599,    61,    29,   792,
     603,    32,   795,    34,   797,   872,   609,    13,    72,   612,
     877,    53,   805,   806,   854,   854,   805,    48,    32,   812,
      29,    52,    56,    32,    53,    34,    56,    47,    56,    60,
      61,    58,    53,    56,    48,    53,   829,    56,    52,    48,
     655,    72,    55,    52,    55,    69,   127,    61,   129,    54,
      31,    60,    61,   846,   134,    50,   849,   850,    72,     1,
      53,   854,    47,    72,    43,   858,   147,   148,    56,    56,
     673,    55,   153,   866,    56,   868,    15,     1,    69,    22,
      55,   874,    54,    56,   877,    55,    50,   168,   881,   692,
     693,    33,    42,    35,    56,    35,    56,    39,   179,    41,
      69,    42,    54,   184,    28,    57,   187,    42,    55,    33,
      34,    35,    54,   194,   195,    39,    42,    41,    56,    56,
      42,    55,    64,    65,    66,    53,    50,    56,   743,   583,
      54,    55,    56,    57,    55,   738,   739,   740,   741,    33,
      64,    65,    66,   753,   493,   787,   493,    71,    32,   731,
      34,   872,   755,   625,   495,   235,   236,   867,   864,   762,
      54,     1,   755,   776,    48,   768,   769,   600,    52,   772,
      64,    65,    66,   776,   779,   255,    60,    61,   795,   780,
     866,   384,   134,   673,   288,   265,   425,   802,    72,   792,
     288,   546,   795,    33,   511,    35,   348,   504,    26,    39,
     660,   282,   805,   806,    33,   516,   214,   288,   289,   812,
      50,   292,   657,   129,    54,    55,    56,    57,   330,   405,
     382,    50,   303,   551,    64,    65,    66,   308,    25,   310,
     703,    71,    22,    -1,    -1,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,   846,     1,    -1,   849,   850,    -1,    -1,
      -1,   854,   333,     1,    -1,   336,    -1,   338,    -1,    -1,
      -1,   342,   343,    -1,   345,   868,   347,    -1,    -1,    -1,
     351,   874,   353,   354,   877,    -1,    33,    -1,    35,    -1,
      70,    -1,    39,   235,   236,    33,    76,    35,    -1,    -1,
      -1,    39,    -1,    41,    -1,    -1,    -1,    54,    -1,    -1,
      57,    -1,    59,   255,    -1,    -1,    54,    64,    65,    66,
     390,    -1,    -1,   265,    71,    -1,    64,    65,    66,    -1,
       1,    -1,    -1,   275,   405,     6,    -1,    -1,    -1,    10,
     410,    -1,   412,    14,   414,    -1,    -1,    -1,   290,    -1,
      -1,    -1,    23,    -1,    -1,    26,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,   444,    46,    -1,    48,    -1,    -1,
      51,    52,    -1,    54,    55,    56,    57,    -1,   168,    60,
      61,    -1,   462,    64,    65,    66,    -1,    -1,   468,   179,
      71,    72,   472,    -1,   184,   476,    -1,   187,   479,    -1,
     481,    -1,    -1,    -1,   194,    -1,    -1,    -1,    33,   490,
     491,    -1,    -1,    -1,   495,    -1,   497,    32,    -1,    34,
      -1,    36,    -1,    38,    -1,    -1,    -1,   508,   509,    -1,
     511,    -1,   513,    48,    -1,   516,    61,    52,   390,    64,
      65,    66,    -1,    -1,     1,    -1,    61,   528,    33,    -1,
      35,   532,    31,   534,    33,    -1,    -1,    72,   410,    44,
     412,   542,   414,    42,     1,   546,   547,    -1,    -1,    54,
      55,    -1,    29,    30,    31,    54,    33,   557,    35,    64,
      65,    66,    39,   435,    -1,    64,    65,    66,    -1,    -1,
      -1,    33,   444,   573,    51,   575,    33,    54,    35,    56,
      57,    -1,    39,    -1,    41,    -1,   587,    64,    65,    66,
     462,    -1,    54,   303,    71,    -1,   468,    54,   308,   600,
     472,    63,    64,    65,    66,    -1,    -1,    64,    65,    66,
      -1,    -1,    -1,   485,   615,   616,   617,    -1,   619,     1,
      -1,    -1,   623,   333,   625,    -1,   336,    -1,    -1,    -1,
      -1,    -1,   342,   343,    16,    17,    18,   637,   638,    -1,
      -1,    -1,    -1,   353,    -1,    -1,    -1,    29,    30,    31,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    -1,   660,
      -1,    -1,    33,    -1,    35,    -1,    48,    -1,    39,    51,
      41,    -1,    54,    -1,     1,    57,    58,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,   557,    -1,    -1,    70,    71,
       1,    -1,    -1,    64,    65,    66,    -1,   697,    -1,   699,
     700,   573,    -1,   575,    -1,    -1,    33,   496,    35,    -1,
      -1,   583,    39,    -1,    41,    -1,   716,    28,    -1,   719,
      -1,    -1,    33,    -1,    35,    -1,    -1,    54,    39,    -1,
     731,    -1,   733,   734,   735,    -1,    -1,    64,    65,    66,
      -1,    52,    -1,    54,    -1,    -1,    57,    -1,    -1,   621,
      -1,    -1,    -1,    64,    65,    66,     2,    -1,   758,   759,
      71,     7,     8,    -1,   764,   637,   638,    -1,    -1,   479,
     770,   481,   773,   774,    33,   229,    35,    23,    24,    25,
      26,   782,    -1,    -1,   785,    -1,   787,    -1,    -1,    -1,
     791,    -1,    -1,    -1,    40,    54,    55,   797,    -1,   253,
     589,    -1,    33,    34,    35,    64,    65,    66,    39,    -1,
     599,     1,    -1,    -1,   603,    -1,    -1,    -1,   528,    65,
      66,    52,   532,    54,   534,   697,    57,   699,   700,    60,
      -1,    -1,   542,    64,    65,    66,    -1,    33,    28,    -1,
      71,    87,    -1,    33,   716,    35,    -1,   719,    -1,    39,
      -1,   723,    -1,    -1,    -1,    -1,    -1,   103,   858,   105,
      -1,    -1,    52,   864,    54,    61,   867,    57,    64,    65,
      66,   872,    -1,    22,    64,    65,    66,    -1,   124,   125,
      -1,    71,   128,    -1,    -1,    -1,   758,   759,    -1,   761,
      -1,    -1,   764,    -1,    -1,    -1,    -1,    -1,   770,    -1,
      -1,    -1,    -1,   692,   150,   615,   616,   617,    -1,   155,
      -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,   797,    -1,    76,    -1,    -1,
     384,    27,    -1,    29,    30,    31,   808,    33,    -1,    35,
      -1,    37,    -1,    39,    40,    41,   192,    -1,    -1,   738,
     739,   740,   741,    -1,    -1,    51,    -1,     1,    54,    -1,
      -1,    57,   208,    -1,   210,   211,   755,   213,    64,    65,
      66,    -1,   218,   762,    -1,    71,   222,   223,   224,   768,
     769,    -1,    -1,   772,    -1,    -1,   858,   776,    -1,    33,
      -1,    35,    -1,   239,    -1,    39,   242,    41,   147,   148,
      -1,    -1,    -1,   792,   153,    -1,   795,   879,    52,    -1,
      54,    -1,    -1,    57,    -1,    -1,   805,   806,    -1,   168,
      64,    65,    66,   812,    -1,    -1,    -1,    71,    -1,   275,
     179,    -1,    -1,    -1,    -1,   184,    -1,    -1,   187,    -1,
      -1,    -1,   496,    -1,    -1,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   846,    -1,    -1,
     849,   850,    -1,    -1,     1,    -1,   312,   313,    -1,     6,
      -1,    -1,    -1,    10,    33,    -1,    35,    14,    37,   868,
      39,    -1,   328,    -1,   330,   874,    23,    -1,   877,    26,
      27,    -1,    29,    30,    31,    54,    33,    -1,    35,    -1,
      37,    -1,    39,    40,    41,    64,    65,    66,    -1,    46,
      33,    48,    35,    -1,    51,    -1,    -1,    54,     1,    -1,
      57,    -1,    59,    -1,    -1,    -1,    -1,    64,    65,    66,
      -1,    54,    -1,    -1,    71,   589,   382,    -1,    -1,   288,
     289,    64,    65,    66,    -1,   599,    29,    30,    31,   603,
      33,    -1,    35,    -1,   303,    -1,    39,    -1,    -1,   308,
     406,   310,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    54,    -1,    -1,    57,    -1,    33,    -1,    35,    -1,
      -1,    64,    65,    66,   333,    -1,    -1,   336,    71,   338,
      -1,    -1,    -1,   342,   343,     1,   345,    54,   347,    -1,
      -1,    -1,   351,    -1,   353,   354,    -1,    64,    65,    66,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    -1,    41,    -1,    -1,    -1,   693,
      -1,    -1,    48,   697,    -1,    51,   700,    -1,    54,    -1,
      -1,    57,    58,    -1,   500,   501,     1,    -1,    64,    65,
      66,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   523,    -1,   525,
      -1,    -1,    -1,    -1,   738,   739,   740,   741,    33,    -1,
      35,    -1,    -1,    -1,    39,    -1,    41,    -1,    -1,    -1,
      -1,   755,    -1,    -1,   550,   551,   552,    -1,   762,    54,
       1,    -1,    57,    -1,   768,   769,    -1,    -1,   772,    64,
      65,    66,   776,    -1,    -1,    -1,    71,   476,    -1,    -1,
     479,    -1,   481,    -1,    -1,    -1,    -1,   583,   792,   585,
      -1,   795,    33,    -1,    35,    -1,   495,    -1,    39,    -1,
      -1,   805,   806,    -1,    -1,    -1,    -1,    -1,    -1,   508,
     509,    -1,   511,    54,   513,    56,    57,   516,    -1,    -1,
      33,    -1,    35,    64,    65,    66,    39,    -1,    41,   528,
      71,    -1,    -1,   532,    33,   534,    35,    -1,    37,    -1,
      39,    54,   846,   542,    -1,   849,   850,    -1,   547,    -1,
     854,    64,    65,    66,   858,    54,    55,    56,   654,   655,
      -1,    -1,   866,    62,   868,    64,    65,    66,    -1,    -1,
     874,    -1,    -1,   877,     1,    -1,    -1,    -1,    -1,     6,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    14,   587,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    29,    30,    31,    -1,    33,    -1,    35,    -1,
      37,    -1,    39,    40,    41,    -1,   615,   616,   617,    46,
       1,    48,    -1,    -1,    51,     6,   625,    54,    -1,    10,
      57,    -1,    59,    14,    -1,    -1,    -1,    64,    65,    66,
      -1,    -1,    23,    -1,    71,    26,    27,   743,    29,    30,
      31,    -1,    33,    -1,    35,    -1,    37,   753,    39,    40,
      41,   660,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,
      51,    -1,    -1,    54,    -1,    -1,    57,    -1,    59,    -1,
      -1,    -1,     1,    64,    65,    66,    -1,     6,    -1,    -1,
      71,    10,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,   802,    26,    27,    -1,
      29,    30,    31,    -1,    33,    -1,    35,    -1,    37,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,     1,    48,
      -1,    -1,    51,     6,    -1,    54,    -1,    10,    57,    -1,
      -1,    14,    -1,    -1,    -1,    64,    65,    66,    -1,    -1,
      23,    -1,    71,    26,    27,    -1,    29,    30,    31,    -1,
      33,    -1,    35,     1,    37,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,    -1,
      -1,    54,    -1,   782,    57,    -1,    -1,    -1,    -1,    -1,
      28,    64,    65,    66,    -1,    33,    34,    35,    71,    -1,
      -1,    39,     1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    28,
      -1,    -1,    -1,    71,    33,    -1,    35,     1,    -1,    -1,
      39,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    28,    64,    65,    66,    -1,    33,
      -1,    35,    71,    -1,     1,    39,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      54,    55,    56,    57,     1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    -1,    -1,    -1,    33,    71,    35,    -1,
      -1,    -1,    39,    -1,    41,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    54,    35,    -1,
      57,    -1,    39,    -1,    -1,    -1,    -1,    64,    65,    66,
      -1,    -1,    -1,    -1,    71,    52,    -1,    54,    -1,    33,
      57,    35,    -1,    -1,    -1,    39,    -1,    64,    65,    66,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,     6,    -1,
      54,    -1,    10,    57,    -1,    -1,    14,    -1,    -1,    -1,
      64,    65,    66,    -1,    -1,    23,    -1,    71,    26,    27,
      -1,    29,    30,    31,    -1,    33,    -1,    35,    -1,    37,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    -1,
      48,    -1,    -1,    51,     6,    -1,    54,    -1,    10,    57,
      58,    -1,    14,    -1,    -1,    -1,    64,    65,    66,    -1,
      -1,    23,    -1,    71,    26,    27,    -1,    29,    30,    31,
      -1,    33,    -1,    35,    -1,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
      -1,    -1,    54,     6,    56,    57,    -1,    10,    -1,    -1,
      -1,    14,    64,    65,    66,    -1,    -1,    -1,    -1,    71,
      23,    -1,    -1,    26,    27,    -1,    29,    30,    31,    -1,
      33,    -1,    35,    -1,    37,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    54,     6,    56,    57,    -1,    10,    -1,    -1,    -1,
      14,    64,    65,    66,    -1,    -1,    -1,    -1,    71,    23,
      -1,    -1,    26,    27,    -1,    29,    30,    31,    -1,    33,
      -1,    35,    -1,    37,    -1,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    -1,    48,    -1,    -1,    51,     6,    -1,
      54,    -1,    10,    57,    -1,    -1,    14,    -1,    -1,    -1,
      64,    65,    66,    -1,    -1,    23,    -1,    71,    26,    27,
      -1,    29,    30,    31,    -1,    33,    -1,    35,    -1,    37,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    -1,
      48,    -1,    -1,    51,     6,    -1,    54,    -1,    10,    57,
      -1,    -1,    14,    -1,    -1,    -1,    64,    65,    66,    -1,
      -1,    23,    -1,    71,    26,    27,    -1,    29,    30,    31,
      -1,    33,    -1,    35,    -1,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
       6,    -1,    54,    -1,    10,    57,    -1,    -1,    14,    -1,
      -1,    -1,    64,    65,    66,    -1,    -1,    23,    -1,    71,
      26,    27,    -1,    29,    30,    31,    -1,    33,    -1,    35,
      -1,    37,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    -1,    48,    -1,    -1,    51,     6,    -1,    54,    -1,
      10,    57,    -1,    -1,    14,    -1,    -1,    -1,    64,    65,
      66,    -1,    -1,    23,    -1,    71,    26,    27,    -1,    29,
      30,    31,    -1,    33,    -1,    35,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,     8,     9,    -1,
      -1,    71,    -1,    -1,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,    30,
      31,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,     8,     9,
      71,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,
      30,    31,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    -1,
      -1,    71,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,    -1,
      -1,    48,    -1,    -1,    51,    52,    -1,    54,    55,    -1,
      57,    -1,    -1,    60,    61,    -1,    -1,    64,    65,    66,
      -1,    -1,    -1,    -1,    71,    72,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,
      -1,    54,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      -1,    64,    65,    66,    -1,    -1,    -1,    -1,    71,    72,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    61,    -1,    -1,    64,    65,    66,    -1,    -1,
      -1,    -1,    71,    72,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    48,    -1,    -1,    51,    52,    -1,    54,
      -1,    -1,    57,    -1,    -1,    60,    61,    28,    -1,    64,
      65,    66,    33,    -1,    35,    -1,    71,    72,    39,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    -1,    29,    30,    31,
      71,    33,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,
      -1,    -1,    54,    -1,    -1,    57,    -1,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    -1,    29,    30,    31,    71,
      33,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    -1,    29,    30,    31,    71,    33,
      -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    -1,    29,    30,    31,    71,    33,    -1,
      35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    -1,    29,    30,    31,    71,    33,    -1,    35,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    -1,    29,    30,    31,    71,    33,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      -1,    29,    30,    31,    71,    33,    -1,    35,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    -1,
      29,    30,    31,    71,    33,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    54,    -1,    33,    57,    35,
      -1,    -1,    -1,    39,    -1,    64,    65,    66,    -1,    29,
      30,    31,    71,    33,    50,    35,    -1,    53,    54,    39,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    51,    -1,    -1,    54,    71,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    -1,    29,    30,
      31,    71,    33,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    54,    -1,    33,    57,    35,    -1,    -1,
      -1,    39,    -1,    64,    65,    66,    -1,    29,    30,    31,
      71,    33,    50,    35,    -1,    53,    54,    39,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    51,
      -1,    -1,    54,    71,    -1,    57,    -1,    -1,    -1,    33,
      34,    35,    64,    65,    66,    39,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    -1,    33,    57,    35,    -1,    60,    -1,    39,    -1,
      64,    65,    66,    -1,    -1,    -1,    -1,    71,    -1,    50,
      -1,    -1,    -1,    54,    55,    56,    57,    -1,    -1,    -1,
      33,    -1,    35,    64,    65,    66,    39,    -1,    -1,    -1,
      71,    -1,    -1,    33,    -1,    35,    -1,    50,    -1,    39,
      -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      50,    64,    65,    66,    54,    55,    56,    57,    71,    -1,
      -1,    33,    -1,    35,    64,    65,    66,    39,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    33,    -1,    35,    -1,    71,
      -1,    39,    -1,    -1,    -1,    43,    -1,    -1,    33,    34,
      35,    -1,    -1,    -1,    39,    53,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    54,
      -1,    -1,    57,    71,    -1,    60,    33,    -1,    35,    64,
      65,    66,    39,    -1,    -1,    -1,    71,    -1,    -1,    33,
      -1,    35,    -1,    50,    -1,    39,    -1,    54,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    50,    64,    65,    66,
      54,    -1,    -1,    57,    71,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    33,    -1,    35,    -1,    71,    -1,    39,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    54,    39,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    -1,    -1,    53,
      54,    71,    33,    57,    35,    -1,    -1,    -1,    39,    -1,
      64,    65,    66,    -1,    -1,    -1,    -1,    71,    33,    50,
      35,    -1,    -1,    54,    39,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    -1,    52,    -1,    54,
      71,    33,    57,    35,    -1,    -1,    -1,    39,    -1,    64,
      65,    66,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      52,    33,    54,    35,    -1,    57,    -1,    39,    -1,    41,
      -1,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,    71,
      -1,    33,    54,    35,    -1,    57,    -1,    39,    -1,    -1,
      -1,    -1,    64,    65,    66,    -1,    -1,    -1,    50,    71,
      -1,    33,    54,    35,    -1,    57,    -1,    39,    -1,    -1,
      -1,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,    71,
      -1,    33,    54,    35,    -1,    57,    -1,    39,    -1,    -1,
      -1,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    54,    -1,    33,    57,    35,    -1,    37,    -1,
      39,    -1,    64,    65,    66,    -1,    -1,    -1,    33,    71,
      35,    -1,    37,    -1,    39,    54,    -1,    56,    -1,    44,
      -1,    -1,    -1,    62,    -1,    64,    65,    66,    -1,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,    74,     1,     6,    10,    14,
      23,    26,    27,    29,    30,    31,    33,    35,    37,    39,
      40,    41,    46,    48,    51,    54,    57,    64,    65,    66,
      71,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     197,   198,   218,   220,   222,   223,   224,   225,    35,    39,
      41,    54,   130,   132,   138,   220,   221,    62,    75,    76,
       0,   185,   185,    69,   162,    69,    69,    29,    30,    31,
      51,    54,    57,    71,   176,   177,   196,   218,   222,   225,
     192,   193,   198,    32,    34,    36,    38,    48,    52,    55,
      56,    60,    61,    72,   185,   192,   199,   200,   201,   219,
     220,   227,   229,   231,   232,   233,    59,   185,   199,   214,
      13,   161,    42,    32,    34,    36,    38,    48,    52,    61,
      72,   230,   231,   233,   235,   235,   198,    69,    45,    69,
      42,    56,   132,   133,   138,   141,    54,    57,    71,   139,
     140,   220,   221,    46,     1,    77,   221,    69,   236,     7,
      11,    58,   194,   163,   164,    15,    14,    58,   186,   208,
     209,   210,   208,   176,    29,    32,    34,    38,    48,    52,
      61,    72,   166,   167,   168,   169,   171,   172,   174,   175,
     177,   178,   183,   184,   218,   220,   222,    48,   166,   167,
     168,   179,    50,   176,    45,    69,    56,    56,    56,    56,
      56,    56,    35,    37,    39,   220,    56,    56,    55,    56,
     235,    55,    56,    47,    55,    56,    55,    56,    43,   187,
     188,   187,    44,    47,    55,   215,    59,   162,     1,    54,
     127,   129,   130,   134,   135,   137,   138,   140,   220,    48,
     192,   193,    48,   192,   193,    54,   211,   212,   213,   222,
     223,   198,   211,    54,   134,   138,    55,    56,    55,    56,
      55,    56,    50,    56,   135,   138,   141,   142,   143,   144,
     219,   220,    59,   134,   220,    54,    80,     8,     9,    16,
      17,    18,    19,    20,    21,    24,    25,    29,    54,    58,
      63,    67,    68,    79,    86,    88,    96,    97,   145,   148,
     152,   153,   154,   155,   168,   169,   172,   174,   222,    79,
      69,   185,    11,    12,    58,   195,     1,    41,    58,    70,
     152,   165,   237,    58,   237,   185,   162,   208,    49,   237,
      58,   237,    60,   233,     1,   173,   175,   176,    55,    56,
      56,    42,   233,   233,   176,    55,    56,    47,    55,    56,
     176,    43,    72,   233,    55,    59,   185,   176,   180,   181,
     182,   222,   223,    60,    60,    60,    60,   185,    56,   185,
     185,   201,   220,   185,    56,    56,   185,    14,   185,   216,
     217,   185,    47,    28,    54,    56,   126,   127,   131,   132,
     138,   141,   220,    50,    53,    50,   139,    50,   192,   193,
     192,   193,    36,    48,    70,    55,    43,    70,   132,   132,
     138,   132,   138,   132,   138,    56,    55,    56,    55,    56,
      55,    56,    55,    56,    47,    55,    56,    56,    42,    59,
      35,    39,    54,    55,    56,    62,    81,    82,   221,   223,
     225,    13,     1,   130,   138,     1,    35,    98,     1,    29,
     146,     1,   146,     1,   146,     1,    54,   113,   114,   222,
       1,   130,   138,     1,    54,     1,   115,   130,   138,     1,
     116,   130,   138,    48,    60,    72,   226,   229,   154,   155,
     168,   222,    79,     1,    31,    65,    78,   221,     1,    29,
      63,   222,    70,    58,    87,    58,    42,    55,     1,    42,
      43,    47,   156,   157,   158,   159,   176,   156,   226,   226,
      48,    72,   176,   228,   229,   237,    58,   166,   202,   203,
     204,   185,   185,    12,     1,    43,   185,   210,    48,   173,
     166,   134,    48,   173,    48,   173,   166,   166,   184,   220,
     166,    29,    48,   173,   166,    70,    55,    43,    56,   162,
      49,    55,    44,   216,   128,   220,   133,   138,   141,    56,
      53,    55,    56,    55,    56,   134,   134,   134,   134,   213,
     185,   134,   135,   138,   135,   138,   134,   134,   144,   220,
     134,    56,    78,    55,    56,    54,     1,    69,    53,    43,
      43,   220,    60,   147,   226,   232,   234,   147,   147,    42,
      55,    31,    53,    43,   117,   118,   134,    47,   119,    53,
      13,   160,    53,   169,   222,    56,    56,    56,    78,    54,
      64,    66,    89,   222,   222,    87,    88,    97,   152,     1,
      28,   123,   124,   125,   127,   130,   136,   137,   138,   222,
     134,   185,   187,   160,   159,   169,   169,    29,   170,   171,
     222,   169,   202,     1,    47,    50,   205,   206,   207,   237,
      58,   185,   185,   173,   173,   173,    56,   173,   182,   166,
     185,   217,   185,    61,   220,    56,   134,    56,    56,    82,
      44,    55,    83,    84,    85,   223,   225,    79,     1,    98,
       1,    28,    52,    54,   101,   102,   104,   105,   127,   137,
     138,   224,   134,    55,   123,   114,    98,   102,   107,    56,
      55,     1,   120,   121,   122,   160,   138,    69,   149,   138,
     176,   176,   176,    66,    89,    35,    55,    90,    91,    92,
     222,    54,    78,    31,   222,    31,    96,   128,    50,    53,
      50,    50,   156,    43,   187,   185,   160,   207,   204,   129,
      56,    56,    56,    55,   237,    43,   128,   136,   137,   138,
      34,    22,    47,   110,    52,   127,   139,    60,   232,   232,
      52,   127,   232,    69,    15,   234,    43,   110,   134,    55,
      50,   220,   150,   151,    78,    54,    56,    55,    90,    89,
     222,    31,    42,   222,   222,    61,   125,   138,   125,   125,
     125,   185,    50,    85,   101,    61,   232,    56,    54,   221,
     102,   139,    52,   106,   127,   136,   106,   139,   106,    70,
     108,   109,   148,   222,    99,   100,   222,   107,   121,   122,
      58,   152,   237,    58,   237,    89,    44,    54,    55,    93,
      94,    95,   222,   224,    92,    56,    42,   222,   123,    42,
      42,   124,   185,   110,    54,   103,   104,   130,   138,   106,
     111,   112,   221,   136,    55,    70,    42,    55,    42,   110,
      56,    56,    55,   123,    42,   123,   123,    53,    56,    55,
     109,    52,   126,   134,   100,   123,    95,   123,   104,   221,
     134
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    74,    74,    75,    75,    75,    75,
      75,    76,    77,    78,    78,    79,    79,    79,    79,    79,
      80,    80,    80,    80,    80,    81,    81,    82,    82,    82,
      82,    82,    83,    83,    83,    83,    84,    84,    85,    85,
      86,    86,    86,    87,    88,    88,    88,    88,    88,    89,
      89,    89,    90,    90,    90,    90,    91,    91,    92,    92,
      92,    92,    93,    93,    93,    93,    94,    94,    95,    95,
      96,    96,    96,    96,    96,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    98,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     105,   105,   105,   105,   105,   105,   106,   106,   106,   107,
     108,   108,   109,   109,   109,   110,   110,   110,   111,   111,
     112,   112,    97,   113,   113,   113,   114,   114,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,   115,
     115,   116,   116,   117,   117,   118,   118,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   124,   124,   125,
     125,   125,   125,   126,   126,   127,   127,   128,   128,   129,
     129,   130,   130,   130,   130,   130,   130,   131,   131,   132,
     132,   133,   133,   133,   133,   133,   134,   134,   135,   135,
     135,   135,   135,   136,   136,   137,   137,   138,   138,   139,
     139,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   141,   141,   142,   142,   142,   142,
     143,   143,   144,   145,   145,   145,   145,   145,   145,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   149,   150,
     150,   150,   151,   152,   152,   152,   152,   153,   153,   153,
     154,   154,   154,   154,   154,   155,   155,   155,   155,   155,
     156,   156,   157,   157,   158,   158,   159,   160,   160,   161,
     161,   162,   162,   163,   163,   163,   164,   165,   165,   165,
     166,   166,   167,   167,   168,   169,   169,   169,   170,   170,
     171,   171,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   173,   173,   174,   174,   175,   175,   176,   176,
     176,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   183,   183,   184,   185,   185,   186,
     186,   187,   187,   188,   188,   189,   189,   190,   190,   190,
     190,   190,   191,   191,   191,   191,   191,   192,   192,   192,
     192,   193,   193,   193,   194,   194,   195,   195,   196,   196,
     197,   197,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   199,   199,   200,   200,   201,   202,   202,
     203,   203,   203,   204,   205,   205,   205,   206,   206,   207,
     208,   208,   209,   209,   209,   210,   210,   210,   211,   211,
     212,   212,   213,   213,   214,   214,   214,   214,   214,   214,
     214,   215,   215,   216,   216,   217,   217,   217,   218,   218,
     218,   218,   219,   219,   220,   220,   220,   220,   221,   221,
     222,   222,   222,   222,   222,   222,   223,   223,   223,   224,
     224,   225,   225,   225,   226,   226,   226,   227,   227,   228,
     228,   229,   229,   229,   229,   230,   230,   231,   231,   231,
     232,   232,   233,   233,   233,   234,   234,   235,   235,   236,
     237,   237
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     4,     4,     7,     5,
       2,     0,     1,     1,     1,     0,     2,     1,     2,     4,
       0,     2,     3,     3,     4,     3,     1,     1,     1,     4,
       4,     2,     0,     1,     1,     2,     3,     1,     1,     1,
       3,     2,     1,     0,     3,     5,     6,     4,     2,     0,
       4,     3,     0,     1,     1,     2,     3,     1,     1,     1,
       4,     4,     0,     1,     1,     2,     3,     1,     1,     1,
       2,     3,     3,     1,     1,     4,     6,     2,     5,     7,
       2,     4,     2,     5,     7,     2,     2,     2,     2,     1,
       1,     3,     1,     3,     1,     3,     1,     4,     1,     3,
       1,     4,     3,     3,     3,     1,     1,     4,     3,     1,
       3,     2,     2,     3,     2,     3,     2,     1,     1,     1,
       3,     1,     3,     3,     4,     0,     2,     4,     0,     1,
       3,     1,     4,     3,     1,     1,     2,     1,     7,     6,
       8,     7,     7,     4,     3,     4,     2,     2,     2,     3,
       1,     3,     1,     0,     1,     3,     1,     0,     2,     3,
       1,     3,     1,     0,     2,     4,     1,     3,     1,     3,
       3,     3,     1,     4,     1,     3,     5,     2,     1,     3,
       1,     2,     1,     3,     3,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     3,
       3,     3,     1,     1,     1,     2,     1,     2,     1,     1,
       1,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       5,     3,     2,     1,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     2,     3,     2,     3,     2,     3,
       3,     1,     0,     3,     1,     3,     1,     3,     3,     0,
       2,     2,     2,     1,     2,     4,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     4,     4,     4,     2,     2,
       2,     1,     2,     1,     2,     1,     4,     0,     2,     0,
       2,     3,     3,     0,     2,     2,     2,     3,     2,     1,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     4,     3,     4,     3,     4,
       3,     4,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     3,     1,     4,     1,     1,     1,     3,     3,     3,
       3,     2,     3,     5,     3,     3,     3,     1,     0,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     2,
       4,     3,     4,     3,     2,     4,     3,     6,     4,     4,
       1,     4,     4,     4,     3,     2,     3,     2,     2,     1,
       2,     1,     1,     3,     2,     1,     1,     1,     4,     4,
       1,     1,     1,     1,     3,     3,     3,     5,     1,     3,
       4,     4,     4,     3,     3,     3,     1,     3,     1,     2,
       3,     2,     1,     3,     1,     2,     1,     2,     1,     4,
       1,     2,     3,     2,     1,     3,     2,     1,     0,     1,
       3,     1,     1,     3,     1,     1,     2,     3,     4,     2,
       5,     3,     2,     3,     1,     3,     1,     2,     1,     2,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     1,     3,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     3,     1,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     0,
       1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 120 "parser.y" /* yacc.c:1646  */
    {inputExpr = letrec((yyvsp[0]),(yyvsp[-1])); sp-=2;}
#line 2678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 121 "parser.y" /* yacc.c:1646  */
    {inputContext = (yyvsp[0]);	    sp-=1;}
#line 2684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 122 "parser.y" /* yacc.c:1646  */
    {valDefns  = (yyvsp[0]);	    sp-=1;}
#line 2690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 123 "parser.y" /* yacc.c:1646  */
    {syntaxError("input");}
#line 2696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 136 "parser.y" /* yacc.c:1646  */
    {
					 setExportList(singleton(ap(MODULEENT,mkCon(module(currentModule).text))));
					 (yyval) = gc3((yyvsp[-1]));
					}
#line 2705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 140 "parser.y" /* yacc.c:1646  */
    {
					 setExportList(singleton(ap(MODULEENT,mkCon(module(currentModule).text))));
					 (yyval) = gc4((yyvsp[-1]));
					}
#line 2714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 145 "parser.y" /* yacc.c:1646  */
    {setExportList((yyvsp[-4]));   (yyval) = gc7((yyvsp[-1]));}
#line 2720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 147 "parser.y" /* yacc.c:1646  */
    {syntaxError("declaration");}
#line 2726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 148 "parser.y" /* yacc.c:1646  */
    {syntaxError("module definition");}
#line 2732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 154 "parser.y" /* yacc.c:1646  */
    {startModule(conMain); 
					 (yyval) = gc0(NIL);}
#line 2739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 157 "parser.y" /* yacc.c:1646  */
    {startModule(mkCon(mkNestedQual((yyvsp[0])))); (yyval) = gc1(NIL);}
#line 2745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 159 "parser.y" /* yacc.c:1646  */
    {(yyval) = mkCon(mkNestedQual((yyvsp[0])));}
#line 2751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 160 "parser.y" /* yacc.c:1646  */
    { String modName = findPathname(textToStr(textOf((yyvsp[0]))));
					  if (modName) { /* fillin pathname if known */
					      (yyval) = mkStr(findText(modName));
					  } else {
					      (yyval) = (yyvsp[0]);
					  }
					}
#line 2763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 168 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(NIL); }
#line 2769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 169 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[0]));}
#line 2775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 170 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1((yyvsp[0]));}
#line 2781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 171 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(NIL);}
#line 2787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 172 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4((yyvsp[0]));}
#line 2793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(exportSelf());}
#line 2799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 178 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(NIL);}
#line 2805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 179 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(NIL);}
#line 2811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 180 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 2817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 181 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4((yyvsp[-2]));}
#line 2823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 183 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 2829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 184 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 2835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 189 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 190 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 191 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(pair((yyvsp[-3]),DOTDOT));}
#line 2853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 192 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(pair((yyvsp[-3]),(yyvsp[-1])));}
#line 2859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 193 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap(MODULEENT,(yyvsp[0])));}
#line 2865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 195 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(NIL);}
#line 2871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 196 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(NIL);}
#line 2877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 197 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[-1]));}
#line 2889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 200 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 2895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 201 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 2901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 203 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 204 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 209 "parser.y" /* yacc.c:1646  */
    {imps = cons((yyvsp[0]),imps); (yyval)=gc3(NIL);}
#line 2919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 210 "parser.y" /* yacc.c:1646  */
    {(yyval)   = gc2(NIL); }
#line 2925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 211 "parser.y" /* yacc.c:1646  */
    {imps = singleton((yyvsp[0])); (yyval)=gc1(NIL);}
#line 2931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 213 "parser.y" /* yacc.c:1646  */
    {if (chase(imps)) {
					     clearStack();
					     onto(imps);
					     done();
					     closeAnyInput();
					     return 0;
					 }
					 (yyval) = gc0(NIL);
					}
#line 2945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 224 "parser.y" /* yacc.c:1646  */
    {addUnqualImport((yyvsp[-1]),NIL,(yyvsp[0]));
					 (yyval) = gc3((yyvsp[-1]));}
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 227 "parser.y" /* yacc.c:1646  */
    {addUnqualImport((yyvsp[-3]),(yyvsp[-1]),(yyvsp[0]));
					 (yyval) = gc5((yyvsp[-3]));}
#line 2959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 230 "parser.y" /* yacc.c:1646  */
    {addQualImport((yyvsp[-3]),(yyvsp[-1]),(yyvsp[0]));
					 (yyval) = gc6((yyvsp[-3]));}
#line 2966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 233 "parser.y" /* yacc.c:1646  */
    {addQualImport((yyvsp[-1]),(yyvsp[-1]),(yyvsp[0]));
					 (yyval) = gc4((yyvsp[-1]));}
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 235 "parser.y" /* yacc.c:1646  */
    {syntaxError("import declaration");}
#line 2979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 237 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(DOTDOT);}
#line 2985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 238 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(HIDDEN,(yyvsp[-1])));}
#line 2991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 239 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 2997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 241 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(NIL);}
#line 3003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 242 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(NIL);}
#line 3009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 243 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 244 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[-1]));}
#line 3021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 246 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 3027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 247 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 3033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 249 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 250 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(pair((yyvsp[0]),NONE));}
#line 3045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 251 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(pair((yyvsp[-3]),DOTDOT));}
#line 3051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 252 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(pair((yyvsp[-3]),(yyvsp[-1])));}
#line 3057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 254 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(NIL);}
#line 3063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 255 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(NIL);}
#line 3069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 256 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 257 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[-1]));}
#line 3081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 259 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 3087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 260 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 3093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 262 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 263 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 268 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[-1]));}
#line 3111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 269 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[-2]));}
#line 3117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 270 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 3123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 271 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(NIL);}
#line 3129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 272 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(cons((yyvsp[0]),NIL));}
#line 3135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 277 "parser.y" /* yacc.c:1646  */
    {defTycon(4,(yyvsp[-1]),(yyvsp[-2]),(yyvsp[0]),SYNONYM);}
#line 3141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 279 "parser.y" /* yacc.c:1646  */
    {defTycon(6,(yyvsp[-3]),(yyvsp[-4]),
						    ap((yyvsp[-2]),(yyvsp[0])),RESTRICTSYN);}
#line 3148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 281 "parser.y" /* yacc.c:1646  */
    {syntaxError("type declaration");}
#line 3154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 283 "parser.y" /* yacc.c:1646  */
    {defTycon(5,(yyvsp[-2]),checkTyLhs((yyvsp[-3])),
						    ap(rev((yyvsp[-1])),(yyvsp[0])),DATATYPE);}
#line 3161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 286 "parser.y" /* yacc.c:1646  */
    {defTycon(7,(yyvsp[-2]),(yyvsp[-3]),
						  ap(qualify((yyvsp[-5]),rev((yyvsp[-1]))),
						     (yyvsp[0])),DATATYPE);}
#line 3169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 289 "parser.y" /* yacc.c:1646  */
    {defTycon(2,(yyvsp[-1]),checkTyLhs((yyvsp[0])),
						    ap(NIL,NIL),DATATYPE);}
#line 3176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 291 "parser.y" /* yacc.c:1646  */
    {defTycon(4,(yyvsp[-3]),(yyvsp[0]),
						  ap(qualify((yyvsp[-2]),NIL),
						     NIL),DATATYPE);}
#line 3184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 294 "parser.y" /* yacc.c:1646  */
    {syntaxError("data declaration");}
#line 3190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 296 "parser.y" /* yacc.c:1646  */
    {defTycon(5,(yyvsp[-2]),checkTyLhs((yyvsp[-3])),
						    ap((yyvsp[-1]),(yyvsp[0])),NEWTYPE);}
#line 3197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 299 "parser.y" /* yacc.c:1646  */
    {defTycon(7,(yyvsp[-2]),(yyvsp[-3]),
						  ap(qualify((yyvsp[-5]),(yyvsp[-1])),
						     (yyvsp[0])),NEWTYPE);}
#line 3205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 302 "parser.y" /* yacc.c:1646  */
    {syntaxError("newtype declaration");}
#line 3211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 303 "parser.y" /* yacc.c:1646  */
    {if (isInt((yyvsp[0]))) {
					     needPrims(intOf((yyvsp[0])), NULL);
					 } else {
					     syntaxError("needprims decl");
					 }
					 sp-=2;}
#line 3222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 309 "parser.y" /* yacc.c:1646  */
    {syntaxError("needprims decl");}
#line 3228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 311 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap((yyvsp[-1]),(yyvsp[0])));}
#line 3234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 312 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 313 "parser.y" /* yacc.c:1646  */
    {syntaxError("type defn lhs");}
#line 3246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 315 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 3252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 316 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(cons((yyvsp[0]),NIL));}
#line 3258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 318 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(sigdecl((yyvsp[-1]),singleton((yyvsp[-2])),
									(yyvsp[0])));}
#line 3265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 320 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 322 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 3277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 323 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(cons((yyvsp[0]),NIL));}
#line 3283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 325 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(POLYTYPE,
						     pair(rev((yyvsp[-2])),(yyvsp[0]))));}
#line 3290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 327 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 329 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(qualify((yyvsp[-2]),(yyvsp[0])));}
#line 3302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 330 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 332 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(ap((yyvsp[-1]),bang((yyvsp[-2]))),(yyvsp[0])));}
#line 3314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 333 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(ap((yyvsp[-1]),(yyvsp[-2])),(yyvsp[0])));}
#line 3320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 334 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(ap((yyvsp[-1]),(yyvsp[-2])),(yyvsp[0])));}
#line 3326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 335 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(ap((yyvsp[-1]),(yyvsp[-2])),(yyvsp[0])));}
#line 3332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 336 "parser.y" /* yacc.c:1646  */
    {(yyval) = checkConstr((yyvsp[0]));}
#line 3338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 337 "parser.y" /* yacc.c:1646  */
    {(yyval) = checkConstr((yyvsp[0]));}
#line 3344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 338 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(LABC,pair((yyvsp[-3]),rev((yyvsp[-1])))));}
#line 3350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 339 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(LABC,pair((yyvsp[-2]),NIL)));}
#line 3356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 340 "parser.y" /* yacc.c:1646  */
    {syntaxError("data type declaration");}
#line 3362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 342 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap((yyvsp[-2]),bang((yyvsp[0]))));}
#line 3368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 343 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap((yyvsp[-1]),(yyvsp[0])));}
#line 3374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 344 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap((yyvsp[-1]),(yyvsp[0])));}
#line 3380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 345 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap((yyvsp[-2]),bang((yyvsp[0]))));}
#line 3386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 346 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap((yyvsp[-1]),(yyvsp[0])));}
#line 3392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 347 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 3398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 349 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(bang((yyvsp[0])));}
#line 3404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 350 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 351 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 353 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 3422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 355 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 3428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 356 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(cons((yyvsp[0]),NIL));}
#line 3434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 358 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(pair(rev((yyvsp[-2])),(yyvsp[0])));}
#line 3440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 359 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(pair(rev((yyvsp[-2])),(yyvsp[0])));}
#line 3446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 360 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(pair(rev((yyvsp[-3])),bang((yyvsp[0]))));}
#line 3452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 362 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(NIL);}
#line 3458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 363 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(singleton((yyvsp[0])));}
#line 3464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 364 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4((yyvsp[-1]));}
#line 3470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 366 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(NIL);}
#line 3476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 367 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(rev((yyvsp[0])));}
#line 3482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 369 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 3488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 370 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 3494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 375 "parser.y" /* yacc.c:1646  */
    {primDefn((yyvsp[-3]),(yyvsp[-2]),(yyvsp[0])); sp-=4;}
#line 3500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 377 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 3506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 378 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(cons((yyvsp[0]),NIL));}
#line 3512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 379 "parser.y" /* yacc.c:1646  */
    {syntaxError("primitive defn");}
#line 3518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 381 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(pair((yyvsp[-1]),(yyvsp[0])));}
#line 3524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 382 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 388 "parser.y" /* yacc.c:1646  */
    {foreignImport((yyvsp[-6]),(yyvsp[-4]),NIL,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[0])); sp-=7;}
#line 3536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 390 "parser.y" /* yacc.c:1646  */
    {foreignImport((yyvsp[-5]),(yyvsp[-3]),NIL,(yyvsp[-2]),(yyvsp[-2]),(yyvsp[0])); sp-=6;}
#line 3542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 392 "parser.y" /* yacc.c:1646  */
    {foreignImport((yyvsp[-7]),(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[0])); sp-=8;}
#line 3548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 394 "parser.y" /* yacc.c:1646  */
    {foreignImport((yyvsp[-6]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-2]),(yyvsp[0])); sp-=7;}
#line 3554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 396 "parser.y" /* yacc.c:1646  */
    {foreignExport((yyvsp[-6]),(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[0])); sp-=7;}
#line 3560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 401 "parser.y" /* yacc.c:1646  */
    {classDefn(intOf((yyvsp[-3])),(yyvsp[-2]),(yyvsp[0]),(yyvsp[-1])); sp-=4;}
#line 3566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 402 "parser.y" /* yacc.c:1646  */
    {instDefn(intOf((yyvsp[-2])),(yyvsp[-1]),(yyvsp[0]));  sp-=3;}
#line 3572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 403 "parser.y" /* yacc.c:1646  */
    {defaultDefn(intOf((yyvsp[-3])),(yyvsp[-1]));  sp-=4;}
#line 3578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 404 "parser.y" /* yacc.c:1646  */
    {syntaxError("class declaration");}
#line 3584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 405 "parser.y" /* yacc.c:1646  */
    {syntaxError("instance declaration");}
#line 3590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 406 "parser.y" /* yacc.c:1646  */
    {syntaxError("default declaration");}
#line 3596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 408 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(pair((yyvsp[-2]),checkPred((yyvsp[0]))));}
#line 3602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 409 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(pair(NIL,checkPred((yyvsp[0]))));}
#line 3608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 411 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(pair((yyvsp[-2]),checkPred((yyvsp[0]))));}
#line 3614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 412 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(pair(NIL,checkPred((yyvsp[0]))));}
#line 3620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 414 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(NIL);}
#line 3626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 415 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(rev((yyvsp[0])));}
#line 3632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 417 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 3638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 418 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(cons((yyvsp[0]),NIL));}
#line 3644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 420 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(NIL);}
#line 3650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 421 "parser.y" /* yacc.c:1646  */
    {h98DoesntSupport(row,"dependent parameters");
					 (yyval) = gc2(rev((yyvsp[0])));}
#line 3657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 424 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 3663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 425 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(cons((yyvsp[0]),NIL));}
#line 3669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 427 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(pair(rev((yyvsp[-2])),rev((yyvsp[0]))));}
#line 3675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 428 "parser.y" /* yacc.c:1646  */
    {syntaxError("functional dependency");}
#line 3681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 430 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(NIL);}
#line 3687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 431 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(cons((yyvsp[0]),(yyvsp[-1])));}
#line 3693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 436 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(POLYTYPE,
						     pair(rev((yyvsp[-2])),(yyvsp[0]))));}
#line 3700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 438 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 440 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(qualify((yyvsp[-2]),(yyvsp[0])));}
#line 3712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 441 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 443 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(fn((yyvsp[-2]),(yyvsp[0])));}
#line 3724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 444 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(fn((yyvsp[-2]),(yyvsp[0])));}
#line 3730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 445 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(fn((yyvsp[-2]),(yyvsp[0])));}
#line 3736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 446 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 448 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(POLYTYPE,
						     pair(rev((yyvsp[-2])),(yyvsp[0]))));}
#line 3749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 450 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 452 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 3761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 453 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc5(qualify((yyvsp[-3]),(yyvsp[-1])));}
#line 3767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 455 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(cons((yyvsp[0]),(yyvsp[-1])));}
#line 3773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 456 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 3779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 458 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(qualify((yyvsp[-2]),(yyvsp[0])));}
#line 3785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 459 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 461 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(NIL);}
#line 3797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 462 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton(checkPred((yyvsp[0]))));}
#line 3803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 463 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(singleton(checkPred((yyvsp[-1]))));}
#line 3809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 464 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(checkCtxt(rev((yyvsp[-1]))));}
#line 3815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 465 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 3821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 466 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(checkCtxt(rev((yyvsp[-1]))));}
#line 3827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 468 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 3833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 469 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(checkCtxt(rev((yyvsp[-1]))));}
#line 3839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 471 "parser.y" /* yacc.c:1646  */
    {
#if TREX
					 (yyval) = gc3(ap(mkExt(textOf((yyvsp[0]))),(yyvsp[-2])));
#else
					 noTREX("a type context");
#endif
					}
#line 3851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 478 "parser.y" /* yacc.c:1646  */
    {
#if IPARAM
					 (yyval) = gc3(pair(mkIParam((yyvsp[-2])),(yyvsp[0])));
#else
					 noIP("a type context");
#endif
					}
#line 3863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 486 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 3869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 487 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 3875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 488 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 3881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 489 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),cons((yyvsp[-2]),NIL)));}
#line 3887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 490 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 3893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 493 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 494 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 496 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 497 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(fn((yyvsp[-2]),(yyvsp[0])));}
#line 3917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 498 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(fn((yyvsp[-2]),(yyvsp[0])));}
#line 3923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 499 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(fn((yyvsp[-2]),(yyvsp[0])));}
#line 3929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 500 "parser.y" /* yacc.c:1646  */
    {syntaxError("type expression");}
#line 3935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 502 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 503 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 505 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap((yyvsp[-1]),(yyvsp[0])));}
#line 3953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 506 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 508 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap((yyvsp[-1]),(yyvsp[0])));}
#line 3965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 509 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 511 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 512 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 514 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 515 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(typeUnit);}
#line 3995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 516 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(typeArrow);}
#line 4001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 517 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 4007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 518 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 4013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 519 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 4019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 520 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(buildTuple((yyvsp[-1])));}
#line 4025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 521 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(buildTuple((yyvsp[-1])));}
#line 4031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 522 "parser.y" /* yacc.c:1646  */
    {
#if TREX
					 (yyval) = gc3(revOnto((yyvsp[-1]),typeNoRow));
#else
					 noTREX("a type");
#endif
					}
#line 4043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 529 "parser.y" /* yacc.c:1646  */
    {
#if TREX
					 (yyval) = gc5(revOnto((yyvsp[-3]),(yyvsp[-1])));
#else
					 noTREX("a type");
#endif
					}
#line 4055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 536 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(typeList,(yyvsp[-1])));}
#line 4061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 537 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(typeList);}
#line 4067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 538 "parser.y" /* yacc.c:1646  */
    {h98DoesntSupport(row,"anonymous type variables");
					 (yyval) = gc1(inventVar());}
#line 4074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 541 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 4080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 542 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),cons((yyvsp[-2]),NIL)));}
#line 4086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 544 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),cons((yyvsp[-2]),NIL)));}
#line 4092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 545 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),cons((yyvsp[-2]),NIL)));}
#line 4098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 546 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 4104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 547 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 4110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 550 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 4116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 551 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 4122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 553 "parser.y" /* yacc.c:1646  */
    {h98DoesntSupport(row,"extensible records");
					 (yyval) = gc3(ap(mkExt(textOf((yyvsp[-2]))),(yyvsp[0])));}
#line 4129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 560 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(fixdecl((yyvsp[-2]),(yyvsp[0]),NON_ASS,(yyvsp[-1])));}
#line 4135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 561 "parser.y" /* yacc.c:1646  */
    {syntaxError("fixity decl");}
#line 4141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 562 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(fixdecl((yyvsp[-2]),(yyvsp[0]),LEFT_ASS,(yyvsp[-1])));}
#line 4147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 563 "parser.y" /* yacc.c:1646  */
    {syntaxError("fixity decl");}
#line 4153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 564 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(fixdecl((yyvsp[-2]),(yyvsp[0]),RIGHT_ASS,(yyvsp[-1])));}
#line 4159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 565 "parser.y" /* yacc.c:1646  */
    {syntaxError("fixity decl");}
#line 4165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 566 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(sigdecl((yyvsp[-1]),(yyvsp[-2]),(yyvsp[0])));}
#line 4171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 567 "parser.y" /* yacc.c:1646  */
    {syntaxError("type signature");}
#line 4177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 569 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(checkPrec((yyvsp[0])));}
#line 4183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 570 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(mkInt(DEF_PREC));}
#line 4189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 572 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 4195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 573 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 4201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 575 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 4207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 576 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 4213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 578 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 4219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 579 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 4225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 581 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(NIL);}
#line 4231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 582 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[-1]));}
#line 4237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 583 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[-1]));}
#line 4243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 585 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(cons((yyvsp[0]),(yyvsp[-1])));}
#line 4249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 587 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 588 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap(FUNBIND,pair((yyvsp[-1]),(yyvsp[0]))));}
#line 4261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 589 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(FUNBIND,
						     pair((yyvsp[-3]),ap(RSIGN,
								ap((yyvsp[0]),(yyvsp[-1]))))));}
#line 4269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 592 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap(PATBIND,pair((yyvsp[-1]),(yyvsp[0]))));}
#line 4275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 594 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 595 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 596 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 598 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap2((yyvsp[-1]),(yyvsp[-2]),(yyvsp[0])));}
#line 4299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 599 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap2((yyvsp[-1]),(yyvsp[-2]),(yyvsp[0])));}
#line 4305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 600 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap2((yyvsp[-1]),(yyvsp[-2]),(yyvsp[0])));}
#line 4311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 601 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap2((yyvsp[-1]),(yyvsp[-2]),(yyvsp[0])));}
#line 4317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 602 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap2(varPlus,(yyvsp[-2]),(yyvsp[0])));}
#line 4323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 604 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap((yyvsp[-2]),(yyvsp[0])));}
#line 4329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 605 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap((yyvsp[-2]),(yyvsp[0])));}
#line 4335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 606 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap((yyvsp[-2]),(yyvsp[0])));}
#line 4341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 607 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap((yyvsp[-1]),(yyvsp[0])));}
#line 4347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 608 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap((yyvsp[-1]),(yyvsp[0])));}
#line 4353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 610 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(letrec((yyvsp[0]),(yyvsp[-1])));}
#line 4359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 611 "parser.y" /* yacc.c:1646  */
    {syntaxError("declaration");}
#line 4365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 613 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(pair((yyvsp[-1]),(yyvsp[0])));}
#line 4371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 614 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(grded(rev((yyvsp[0]))));}
#line 4377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 616 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(cons((yyvsp[0]),(yyvsp[-1])));}
#line 4383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 617 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 4389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 619 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(pair((yyvsp[-1]),pair((yyvsp[-2]),(yyvsp[0]))));}
#line 4395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 621 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(NIL);}
#line 4401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 622 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[0]));}
#line 4407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 627 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(NIL);}
#line 4413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 628 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[0]));}
#line 4419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 631 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 4425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 632 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 4431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 635 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(NIL);}
#line 4437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 636 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[-1]));}
#line 4443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 637 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[-1]));}
#line 4449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 640 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(cons((yyvsp[0]),(yyvsp[-1])));}
#line 4455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 642 "parser.y" /* yacc.c:1646  */
    {
#if IPARAM
				         (yyval) = gc3(pair((yyvsp[-2]),(yyvsp[0])));
#else
					 noIP("a binding");
#endif
					}
#line 4467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 649 "parser.y" /* yacc.c:1646  */
    {syntaxError("a binding");}
#line 4473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 650 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 655 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 656 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 658 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(ESIGN,pair((yyvsp[-2]),(yyvsp[0]))));}
#line 4497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 659 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 661 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap2(varPlus,(yyvsp[-2]),(yyvsp[0])));}
#line 4509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 663 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 664 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 665 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 667 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 668 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 670 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 671 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(ap(INFIX,(yyvsp[0])));}
#line 4551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 673 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap(NEG,only((yyvsp[0]))));}
#line 4557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 674 "parser.y" /* yacc.c:1646  */
    {syntaxError("pattern");}
#line 4563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 675 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(ap((yyvsp[-1]),only((yyvsp[-2]))),(yyvsp[0])));}
#line 4569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 676 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(NEG,ap2((yyvsp[-2]),only((yyvsp[-3])),(yyvsp[0]))));}
#line 4575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 677 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(ap((yyvsp[-1]),only((yyvsp[-2]))),(yyvsp[0])));}
#line 4581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 678 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(NEG,ap2((yyvsp[-2]),only((yyvsp[-3])),(yyvsp[0]))));}
#line 4587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 679 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(ap((yyvsp[-1]),only((yyvsp[-2]))),(yyvsp[0])));}
#line 4593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 680 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(NEG,ap2((yyvsp[-2]),only((yyvsp[-3])),(yyvsp[0]))));}
#line 4599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 681 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(ap((yyvsp[-1]),(yyvsp[-2])),(yyvsp[0])));}
#line 4605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 682 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(NEG,ap(ap((yyvsp[-2]),(yyvsp[-3])),(yyvsp[0]))));}
#line 4611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 684 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 685 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 687 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 688 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 690 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap((yyvsp[-1]),(yyvsp[0])));}
#line 4641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 691 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap((yyvsp[-1]),(yyvsp[0])));}
#line 4647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 693 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 694 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 695 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 697 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(ASPAT,pair((yyvsp[-2]),(yyvsp[0]))));}
#line 4671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 698 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 699 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(CONFLDS,pair((yyvsp[-3]),(yyvsp[-1]))));}
#line 4683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 700 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 701 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 702 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(WILDCARD);}
#line 4701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 703 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 4707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 704 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 4713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 705 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(buildTuple((yyvsp[-1])));}
#line 4719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 706 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(FINLIST,rev((yyvsp[-1]))));}
#line 4725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 707 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap(LAZYPAT,(yyvsp[0])));}
#line 4731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 709 "parser.y" /* yacc.c:1646  */
    {
#if TREX
					 (yyval) = gc3(revOnto((yyvsp[-1]),nameNoRec));
#else
					 (yyval) = gc3(NIL);
#endif
					}
#line 4743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 716 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc5(revOnto((yyvsp[-3]),(yyvsp[-1])));}
#line 4749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 719 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 4755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 720 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),singleton((yyvsp[-2]))));}
#line 4761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 722 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 4767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 723 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 4773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 725 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(NIL);}
#line 4779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 726 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(rev((yyvsp[0])));}
#line 4785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 728 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 4791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 729 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 4797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 731 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(pair((yyvsp[-2]),(yyvsp[0])));}
#line 4803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 732 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 735 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 4815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 736 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 4821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 738 "parser.y" /* yacc.c:1646  */
    {
#if TREX
					 (yyval) = gc3(ap(mkExt(textOf((yyvsp[-2]))),(yyvsp[0])));
#else
					 noTREX("a pattern");
#endif
					}
#line 4833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 750 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 751 "parser.y" /* yacc.c:1646  */
    {syntaxError("expression");}
#line 4845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 753 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(ESIGN,pair((yyvsp[-2]),(yyvsp[0]))));}
#line 4851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 754 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 756 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 757 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 759 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(ap(INFIX,(yyvsp[0])));}
#line 4875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 760 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 762 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(ap(INFIX,(yyvsp[0])));}
#line 4887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 763 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 765 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(NEG,ap(ap((yyvsp[-2]),(yyvsp[-3])),(yyvsp[0]))));}
#line 4899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 766 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(ap((yyvsp[-1]),(yyvsp[-2])),(yyvsp[0])));}
#line 4905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 767 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap(NEG,only((yyvsp[0]))));}
#line 4911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 768 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(NEG,
						     ap(ap((yyvsp[-2]),only((yyvsp[-3]))),(yyvsp[0]))));}
#line 4918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 770 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(ap((yyvsp[-1]),only((yyvsp[-2]))),(yyvsp[0])));}
#line 4924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 772 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(NEG,ap(ap((yyvsp[-2]),(yyvsp[-3])),(yyvsp[0]))));}
#line 4930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 773 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(ap((yyvsp[-1]),(yyvsp[-2])),(yyvsp[0])));}
#line 4936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 774 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap(NEG,only((yyvsp[0]))));}
#line 4942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 775 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(NEG,
						     ap(ap((yyvsp[-2]),only((yyvsp[-3]))),(yyvsp[0]))));}
#line 4949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 777 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(ap((yyvsp[-1]),only((yyvsp[-2]))),(yyvsp[0])));}
#line 4955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 779 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc6(ap(CASE,pair((yyvsp[-4]),rev((yyvsp[-1])))));}
#line 4961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 780 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(DOCOMP,checkDo((yyvsp[-1]))));}
#line 4967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 781 "parser.y" /* yacc.c:1646  */
    {
#if MUDO
					 (yyval) = gc4(ap(MDOCOMP, checkMDo((yyvsp[-1]))));
#else
					 noMDo("an expression");
#endif
					}
#line 4979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 788 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 4985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 790 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(LAMBDA,      
						     pair(rev((yyvsp[-2])),
							  pair((yyvsp[-1]),(yyvsp[0])))));}
#line 4993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 793 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(letrec((yyvsp[-2]),(yyvsp[0])));}
#line 4999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 794 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(COND,triple((yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]))));}
#line 5005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 799 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[0]));}
#line 5011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 800 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[0]));}
#line 5017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 802 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[0]));}
#line 5023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 803 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[0]));}
#line 5029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 806 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(cons((yyvsp[0]),(yyvsp[-1])));}
#line 5035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 807 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(cons((yyvsp[0]),NIL));}
#line 5041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 809 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap((yyvsp[-1]),(yyvsp[0])));}
#line 5047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 810 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 812 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 813 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(ASPAT,pair((yyvsp[-2]),(yyvsp[0]))));}
#line 5065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 814 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap(LAZYPAT,(yyvsp[0])));}
#line 5071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 815 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 816 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(WILDCARD);}
#line 5083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 817 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 818 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(CONFLDS,pair((yyvsp[-3]),(yyvsp[-1]))));}
#line 5095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 819 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(UPDFLDS,
						     triple((yyvsp[-3]),NIL,(yyvsp[-1]))));}
#line 5102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 821 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 822 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 823 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 824 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 825 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 5132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 826 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(buildTuple((yyvsp[-1])));}
#line 5138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 828 "parser.y" /* yacc.c:1646  */
    {
#if TREX
					 (yyval) = gc3(revOnto((yyvsp[-1]),nameNoRec));
#else
					 (yyval) = gc3(NIL);
#endif
					}
#line 5150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 835 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc5(revOnto((yyvsp[-3]),(yyvsp[-1])));}
#line 5156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 836 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 838 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 5168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 839 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap((yyvsp[-1]),(yyvsp[-2])));}
#line 5174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 840 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(ap(nameFlip,(yyvsp[-2])),(yyvsp[-1])));}
#line 5180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 841 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(ap(nameFlip,(yyvsp[-2])),(yyvsp[-1])));}
#line 5186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 843 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 5192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 844 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),cons((yyvsp[-2]),NIL)));}
#line 5198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 847 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 5204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 848 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 5210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 850 "parser.y" /* yacc.c:1646  */
    {
#if TREX
					 (yyval) = gc3(ap(mkExt(textOf((yyvsp[-2]))),(yyvsp[0])));
#else
					 noTREX("an expression");
#endif
					}
#line 5222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 859 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 860 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[0]));}
#line 5234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 862 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 5240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 863 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[-1]));}
#line 5246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 864 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(cons((yyvsp[0]),NIL));}
#line 5252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 866 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(pair((yyvsp[-2]),letrec((yyvsp[0]),(yyvsp[-1]))));}
#line 5258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 868 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(grded(rev((yyvsp[0]))));}
#line 5264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 869 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(pair((yyvsp[-1]),(yyvsp[0])));}
#line 5270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 870 "parser.y" /* yacc.c:1646  */
    {syntaxError("case expression");}
#line 5276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 872 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(cons((yyvsp[0]),(yyvsp[-1])));}
#line 5282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 873 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(cons((yyvsp[0]),NIL));}
#line 5288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 875 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(pair((yyvsp[-1]),pair((yyvsp[-2]),(yyvsp[0]))));}
#line 5294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 878 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 879 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[0]));}
#line 5306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 881 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 5312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 882 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2((yyvsp[-1]));}
#line 5318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 883 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(cons((yyvsp[0]),NIL));}
#line 5324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 886 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(FROMQUAL,pair((yyvsp[-2]),(yyvsp[0]))));}
#line 5330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 887 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap(QWHERE,(yyvsp[0])));}
#line 5336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 889 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(ap(DOQUAL,(yyvsp[0])));}
#line 5342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 891 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc0(NIL);}
#line 5348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 892 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(rev((yyvsp[0])));}
#line 5354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 894 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 5360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 895 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(singleton((yyvsp[0])));}
#line 5366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 897 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 898 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(pair((yyvsp[-2]),(yyvsp[0])));}
#line 5378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 903 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(ap(FINLIST,cons((yyvsp[0]),NIL)));}
#line 5384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 904 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(ap(FINLIST,rev((yyvsp[0]))));}
#line 5390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 905 "parser.y" /* yacc.c:1646  */
    {
#if ZIP_COMP
					 if (length((yyvsp[0]))==1) {
					     (yyval) = gc2(ap(COMP,pair((yyvsp[-1]),hd((yyvsp[0])))));
					 } else {
					     if (haskell98)
						 syntaxError("list comprehension");
					     (yyval) = gc2(ap(ZCOMP,pair((yyvsp[-1]),rev((yyvsp[0])))));
					 }
#else
					 if (length((yyvsp[0]))!=1) {
					     syntaxError("list comprehension");
					 }
					 (yyval) = gc2(ap(COMP,pair((yyvsp[-1]),hd((yyvsp[0])))));
#endif
					}
#line 5411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 921 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(ap(nameFromTo,(yyvsp[-2])),(yyvsp[0])));}
#line 5417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 922 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc4(ap(ap(nameFromThen,(yyvsp[-3])),(yyvsp[-1])));}
#line 5423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 923 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap(nameFrom,(yyvsp[-1])));}
#line 5429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 924 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc5(ap(ap(ap(nameFromThenTo,
								(yyvsp[-4])),(yyvsp[-2])),(yyvsp[0])));}
#line 5436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 927 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons(rev((yyvsp[0])),(yyvsp[-2])));}
#line 5442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 928 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(cons(rev((yyvsp[0])),NIL));}
#line 5448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 930 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(cons((yyvsp[0]),(yyvsp[-2])));}
#line 5454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 931 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(cons((yyvsp[0]),NIL));}
#line 5460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 933 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(ap(FROMQUAL,pair((yyvsp[-2]),(yyvsp[0]))));}
#line 5466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 934 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(ap(BOOLQUAL,(yyvsp[0])));}
#line 5472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 935 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(ap(QWHERE,(yyvsp[0])));}
#line 5478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 940 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 941 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(nameUnit);}
#line 5490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 942 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(nameNil);}
#line 5496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 943 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 5502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 945 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc2(mkTuple(tupleOf((yyvsp[-1]))+1));}
#line 5508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 946 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(mkTuple(2));}
#line 5514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 948 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 949 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(varHiding);}
#line 5526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 950 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(varQualified);}
#line 5532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 951 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(varAsMod);}
#line 5538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 953 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 954 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 956 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 957 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 5562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 958 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(varPlus);}
#line 5568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 959 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(varMinus);}
#line 5574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 960 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(varBang);}
#line 5580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 961 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3(varDot);}
#line 5586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 963 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 964 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 5598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 965 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 967 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 968 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 5616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 970 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 971 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 5628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 972 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 974 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(varPlus);}
#line 5640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 975 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(varMinus);}
#line 5646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 976 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 978 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(varPlus);}
#line 5658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 979 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 981 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(varMinus);}
#line 5670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 982 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 984 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 985 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 5688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 986 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(varBang);}
#line 5694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 987 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(varDot);}
#line 5700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 989 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc1(varMinus);}
#line 5706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 990 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 992 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 993 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 5724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 994 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 997 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 998 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 5742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 1000 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 1001 "parser.y" /* yacc.c:1646  */
    {(yyval) = gc3((yyvsp[-1]));}
#line 5754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 1002 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 1004 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 1005 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 1007 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 1008 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 1013 "parser.y" /* yacc.c:1646  */
    {goOffside(startColumn);}
#line 5790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 1016 "parser.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 5796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 1017 "parser.y" /* yacc.c:1646  */
    {yyerrok; 
					 if (canUnOffside()) {
					     unOffside();
					     /* insert extra token on stack*/
					     push(NIL);
					     pushed(0) = pushed(1);
					     pushed(1) = mkInt(column);
					 }
					 else
					     syntaxError("declaration");
					}
#line 5812 "y.tab.c" /* yacc.c:1646  */
    break;


#line 5816 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1032 "parser.y" /* yacc.c:1906  */


static Cell local gcShadow(n,e)		/* keep parsed fragments on stack  */
Int  n;
Cell e; {
    /* If a look ahead token is held then the required stack transformation
     * is:
     *   pushed: n               1     0          1     0
     *           x1  |  ...  |  xn  |  la   ===>  e  |  la
     *                                top()            top()
     *
     * Othwerwise, the transformation is:
     *   pushed: n-1             0        0
     *           x1  |  ...  |  xn  ===>  e
     *                         top()     top()
     */
    if (yychar>=0) {
	pushed(n-1) = top();
	pushed(n)   = e;
    }
    else
	pushed(n-1) = e;
    sp -= (n-1);
    return e;
}

static Void local syntaxError(s)	/* report on syntax error	   */
String s; {
    ERRMSG(row) "Syntax error in %s (unexpected %s)", s, unexpected()
    EEND;
}

static String local unexpected() {     /* find name for unexpected token   */
    static char buffer[100];
    static char *fmt = "%s \"%s\"";
    static char *kwd = "keyword";

    switch (yychar) {
	case 0         : return "end of input";

#define keyword(kw) sprintf(buffer,fmt,kwd,kw); return buffer;
	case INFIXL    : keyword("infixl");
	case INFIXR    : keyword("infixr");
	case INFIXN    : keyword("infix");
	case TINSTANCE : keyword("instance");
	case TCLASS    : keyword("class");
	case PRIMITIVE : keyword("primitive");
	case CASEXP    : keyword("case");
	case OF        : keyword("of");
	case IF        : keyword("if");
	case THEN      : keyword("then");
	case ELSE      : keyword("else");
	case WHERE     : keyword("where");
	case TYPE      : keyword("type");
	case DATA      : keyword("data");
	case TNEWTYPE  : keyword("newtype");
	case LET       : keyword("let");
	case IN        : keyword("in");
	case DERIVING  : keyword("deriving");
	case DEFAULT   : keyword("default");
	case IMPORT    : keyword("import");
	case TMODULE   : keyword("module");
	case ALL       : keyword("forall");
#undef keyword

	case ARROW     : return "`->'";
	case '='       : return "`='";
	case COCO      : return "`::'";
	case '-'       : return "`-'";
	case '!'       : return "`!'";
	case ','       : return "comma";
	case '@'       : return "`@'";
	case '('       : return "`('";
	case ')'       : return "`)'";
	case '{'       : return "`{', possibly due to bad layout";
	case '}'       : return "`}', possibly due to bad layout";
	case '_'       : return "`_'";
	case '|'       : return "`|'";
	case '.'       : return "`.'";
	case ';'       : return "`;', possibly due to bad layout";
	case UPTO      : return "`..'";
	case '['       : return "`['";
	case ']'       : return "`]'";
	case FROM      : return "`<-'";
	case '\\'      : return "backslash (lambda)";
	case '~'       : return "tilde";
	case '`'       : return "backquote";
#if TREX
	case RECSELID  : sprintf(buffer,"selector \"#%s\"",
				 textToStr(extText(snd(yylval))));
			 return buffer;
#endif
#if IPARAM
	case IPVARID   : sprintf(buffer,"implicit parameter \"?%s\"",
				 textToStr(textOf(yylval)));
			 return buffer;
#endif
	case VAROP     :
	case VARID     :
	case CONOP     :
	case CONID     : sprintf(buffer,"symbol \"%s\"",
				 textToStr(textOf(yylval)));
			 return buffer;
	case QVAROP    :
	case QVARID    :
	case QCONOP    : 
	case QCONID    : sprintf(buffer,"symbol \"%s\"",
				 identToStr(yylval));
			 return buffer;
	case HIDING    : return "symbol \"hiding\"";
	case QUALIFIED : return "symbol \"qualified\"";
	case ASMOD     : return "symbol \"as\"";
	case NUMLIT    : return "numeric literal";
	case CHARLIT   : return "character literal";
	case STRINGLIT : return "string literal";
	case IMPLIES   : return "`=>'";
	default        : return "token";
    }
}

static Cell local checkPrec(p)		/* Check for valid precedence value*/
Cell p; {
    if (!isInt(p) || intOf(p)<MIN_PREC || intOf(p)>MAX_PREC) {
	ERRMSG(row) "Precedence value must be an integer in the range [%d..%d]",
		    MIN_PREC, MAX_PREC
	EEND;
    }
    return p;
}

static Cell local buildTuple(tup)	/* build tuple (x1,...,xn) from	   */
List tup; {				/* list [xn,...,x1]		   */
    Int  n = 0;
    Cell t = tup;
    Cell x;

    do {				/*    .                    .	   */
	x      = fst(t);		/*   / \                  / \	   */
	fst(t) = snd(t);		/*  xn  .                .   xn	   */
	snd(t) = x;			/*       .    ===>      .	   */
	x      = t;			/*        .            .	   */
	t      = fun(x);		/*         .          .		   */
	n++;				/*        / \        / \	   */
    } while (nonNull(t));		/*       x1  NIL   (n)  x1	   */
    fst(x) = mkTuple(n);
    return tup;
}

static List local checkCtxt(con)	/* validate context		   */
Type con; {
    mapOver(checkPred, con);
    return con;
}

static Cell local checkPred(c)		/* check that type expr is a valid */
Cell c; {				/* constraint			   */
    Cell cn = getHead(c);
#if TREX
    if (isExt(cn) && argCount==1)
	return c;
#endif
#if IPARAM
    if (isIP(cn))
	return c;
#endif
    if (!isQCon(cn) /*|| argCount==0*/)
	syntaxError("class expression");
    return c;
}

static Pair local checkDo(dqs)		/* convert reversed list of dquals */
List dqs; {				/* to an (expr,quals) pair         */
    if (isNull(dqs) || whatIs(hd(dqs))!=DOQUAL) {
	ERRMSG(row) "Last generator in do {...} must be an expression"
	EEND;
    }
    fst(dqs) = snd(fst(dqs));		/* put expression in fst of pair   */
    snd(dqs) = rev(snd(dqs));		/* & reversed list of quals in snd */
    return dqs;
}

#if MUDO
static Pair local checkMDo(dqs)		/* convert reversed list of dquals */
List dqs; {				/* to an (expr,quals) pair         */
    if (isNull(dqs) || whatIs(hd(dqs))!=DOQUAL) {
	ERRMSG(row) "Last generator in mdo {...} must be an expression"
	EEND;
    }
    fst(dqs) = snd(fst(dqs));		/* put expression in fst of pair   */
    snd(dqs) = rev(snd(dqs));		/* & reversed list of quals in snd */
    return dqs;
}
#endif

static Cell local checkTyLhs(c)		/* check that lhs is of the form   */
Cell c; {				/* T a1 ... a			   */
    Cell tlhs = c;
    while (isAp(tlhs) && whatIs(arg(tlhs))==VARIDCELL) {
	tlhs = fun(tlhs);
    }
    if (whatIs(tlhs)!=CONIDCELL) {
	ERRMSG(row) "Illegal left hand side in data type declaration"
	EEND;
    }
    return c;
}

static Cell local checkConstr(c)	/* check that data constructor has */
Cell c; {				/* an unqualified conid as head    */
    Cell chd = c;
    while (isAp(chd)) {
	chd = fun(chd);
    }
    if (whatIs(chd)==QUALIDENT) {
	ERRMSG(row) "Qualified constructor in data type declaration"
	EEND;
    }
    return c;
}

#if !TREX
static Void local noTREX(where)
String where; {
    ERRMSG(row) "Attempt to use TREX records while parsing %s.\n", where ETHEN
    ERRTEXT     "(TREX is disabled in this build of Hugs)"
    EEND;
}
#endif
#if !IPARAM
static Void local noIP(where)
String where; {
    ERRMSG(row) "Attempt to use Implicit Parameters while parsing %s.\n", where ETHEN
    ERRTEXT     "(Implicit Parameters are disabled in this build of Hugs)"
    EEND;
}
#endif

#if !MUDO
/***
   Due to the way we implement this stuff, this function will actually
   never be called. When MUDO is not defined, the lexer thinks that mdo
   is just another identifier, and hence the MDO token is never returned
   to the parser: consequently the mdo production is never reduced, making 
   this code unreachable. The alternative is to let the lexer to 
   recognize "mdo" all the time, but that's not Haskell compliant. In any 
   case we keep this function here, even if just for documentation purposes.
***/
static Void local noMDo(where)
String where; {
    ERRMSG(row) "Attempt to use MDO while parsing %s.\n", where ETHEN
    ERRTEXT     "(Recursive monadic bindings are disabled in this build of Hugs)"
    EEND;
}
#endif

/*-------------------------------------------------------------------------*/
