/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "elfs.y"

  /*Zona de inclusao de bibliotecas,estruturas de dados,
  * funcoes recorridos de C.
  */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.c"
#include "fila.c"
#define YYSTYPE char*

Fila* f;
extern FILE *yyin;
int erros;
tab_hash *t;
char *conc;
char escopo[30], var[30];
extern yylineno;
extern char *yytext;

 /*Funcao da Tabela Hash que insere o escopo e nome da variável*/
void inserir(tab_hash *t, char *var, char *escopo) {
  if (!Pesquisa(t, var, escopo))
	insere(t, var, escopo);
  else {
	erros++;
	printf(" ERRO: variável %s declarada mais de uma vez\n", var);
  }
}


void checar_variavel(tab_hash *t, char *var, char *escopo) {
  /*Pesquisa e uma funcao da tabela hash que retorna  se a variavel e seu escopo existem na tablea */
  if (!Pesquisa(t, var, escopo)) {
	erros++;
	printf("ERRO: variável %s não declarada no escopo %s\n", var, escopo );
  }
}



/* Line 268 of yacc.c  */
#line 114 "elfs.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING = 258,
     APPROXNUM = 259,
     INTNUM = 260,
     VARIAVEL = 261,
     ALGORITMO = 262,
     VAR = 263,
     INICIO = 264,
     COMENTARIO = 265,
     ESCREVA = 266,
     FIMALGORITMO = 267,
     MAIORIGUAL = 268,
     DIFERENTE = 269,
     IGUAL = 270,
     MENOR = 271,
     MENORIGUAL = 272,
     MAIOR = 273,
     PONTOPONTO = 274,
     VIRGULA = 275,
     FCOLCHETE = 276,
     ACOLCHETE = 277,
     FPARENTESE = 278,
     APARENTESE = 279,
     ENTREASPAS = 280,
     DOISPONTOS = 281,
     SOMA = 282,
     MENOS = 283,
     MULTIPLICACAO = 284,
     DIVISAO = 285,
     RESTO = 286,
     POTENCIA = 287,
     LEIA = 288,
     ATRIBUICAO = 289,
     BRANCO = 290,
     REAL = 291,
     NUMERO = 292,
     CARACTER = 293,
     INTEIRO = 294,
     SE = 295,
     FIMSE = 296,
     SENAO = 297,
     ENTAO = 298,
     ATE = 299,
     DE = 300,
     FACA = 301,
     PARA = 302,
     FIMPARA = 303,
     ENQUANTO = 304,
     FIMENQUANTO = 305,
     REPITA = 306,
     FIMREPITA = 307,
     QUEBRA_LINHA = 308,
     CASO = 309,
     FIMFACA = 310,
     FUNCAO = 311,
     FIMFUNCAO = 312,
     OUTROCASO = 313,
     PROCEDIMENTO = 314,
     FIMPROCEDIMENTO = 315,
     PASSO = 316,
     VETOR = 317,
     RETORNE = 318,
     ESCOLHA = 319,
     FIMESCOLHA = 320,
     COMPR = 321,
     COPIA = 322,
     MAIUSC = 323,
     INTERROMPA = 324,
     OU = 325,
     E = 326,
     RAIZQ = 327,
     UMINUS = 328
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 229 "elfs.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   522

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNRULES -- Number of states.  */
#define YYNSTATES  222

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    14,    16,    19,    21,    22,    26,
      27,    32,    37,    43,    47,    49,    51,    53,    55,    59,
      60,    61,    69,    70,    80,    81,    82,    86,    87,    92,
      96,    98,   100,   103,   104,   110,   114,   117,   118,   121,
     124,   127,   130,   133,   136,   139,   142,   145,   148,   154,
     156,   162,   167,   175,   182,   183,   187,   190,   193,   201,
     206,   212,   213,   217,   219,   223,   225,   230,   234,   237,
     250,   252,   253,   256,   264,   269,   272,   274,   276,   278,
     282,   286,   290,   294,   298,   302,   306,   310,   314,   318,
     322,   326,   331,   336,   341,   345,   349,   351,   355,   358,
     360,   363,   366
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      75,     0,    -1,    -1,    77,    78,    79,    85,    95,    97,
      76,    98,   122,    -1,     7,    -1,     3,   123,    -1,     3,
      -1,    -1,     8,   123,    80,    -1,    -1,     8,   123,    82,
      81,    -1,    84,    26,    83,   123,    -1,    84,    26,    83,
     123,    82,    -1,    84,    26,    83,    -1,    39,    -1,    36,
      -1,    38,    -1,     6,    -1,     6,    20,    84,    -1,    -1,
      -1,    87,    89,    97,    86,    98,    92,    94,    -1,    -1,
      56,     6,    24,    88,    82,    23,    26,    83,   123,    -1,
      -1,    -1,     8,   123,    90,    -1,    -1,     8,   123,    82,
      91,    -1,    63,    93,   123,    -1,     3,    -1,     6,    -1,
      57,   123,    -1,    -1,    96,    97,    98,    60,   123,    -1,
      59,     6,   123,    -1,     9,   123,    -1,    -1,    98,    99,
      -1,    98,   101,    -1,    98,   102,    -1,    98,   103,    -1,
      98,   107,    -1,    98,   112,    -1,    98,   114,    -1,    98,
     117,    -1,    98,   118,    -1,    98,   119,    -1,    11,    24,
     100,    23,   123,    -1,     3,    -1,    33,    24,     6,    23,
     123,    -1,     6,    34,   120,   123,    -1,     6,    34,     6,
      24,    84,    23,   123,    -1,    40,   120,   105,    98,   104,
     106,    -1,    -1,    42,   123,    98,    -1,    43,   123,    -1,
      41,   123,    -1,    64,   111,   123,   108,   109,    65,   123,
      -1,    54,   110,   123,    98,    -1,    54,   110,   123,    98,
     108,    -1,    -1,    58,   123,    98,    -1,     3,    -1,     3,
      20,   110,    -1,     6,    -1,    51,   123,    98,   113,    -1,
      44,   120,   123,    -1,    52,   123,    -1,    47,   111,    45,
     115,    44,   115,   116,    46,   123,    98,    48,   123,    -1,
     120,    -1,    -1,    61,     5,    -1,    49,   120,    46,   123,
      98,    50,   123,    -1,     6,    24,    23,   123,    -1,    69,
     123,    -1,     6,    -1,     5,    -1,     4,    -1,   120,    27,
     120,    -1,   120,    30,   120,    -1,   120,    29,   120,    -1,
      24,   120,    23,    -1,   120,    28,   120,    -1,   120,    18,
     120,    -1,   120,    13,   120,    -1,   120,    15,   120,    -1,
     120,    17,   120,    -1,   120,    16,   120,    -1,   120,    31,
     120,    -1,   120,    14,   120,    -1,    68,    24,   120,    23,
      -1,    67,    24,   121,    23,    -1,    66,    24,   120,    23,
      -1,   120,    70,   120,    -1,   120,    71,   120,    -1,     5,
      -1,     6,    20,   121,    -1,    12,   123,    -1,    53,    -1,
      53,   123,    -1,    10,    53,    -1,    10,    53,   123,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   143,   143,   143,   147,   152,   153,   159,   159,   160,
     160,   165,   166,   167,   171,   172,   173,   178,   179,   188,
     189,   189,   193,   193,   196,   198,   198,   199,   199,   204,
     208,   209,   215,   219,   221,   225,   229,   235,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   251,   254,
     264,   268,   269,   273,   277,   279,   283,   288,   293,   297,
     298,   301,   303,   307,   308,   313,   319,   323,   324,   328,
     333,   336,   338,   342,   346,   350,   354,   355,   356,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   378,   379,   383,   384,   390,   395,
     396,   397,   398
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "APPROXNUM", "INTNUM",
  "VARIAVEL", "ALGORITMO", "VAR", "INICIO", "COMENTARIO", "ESCREVA",
  "FIMALGORITMO", "MAIORIGUAL", "DIFERENTE", "IGUAL", "MENOR",
  "MENORIGUAL", "MAIOR", "PONTOPONTO", "VIRGULA", "FCOLCHETE", "ACOLCHETE",
  "FPARENTESE", "APARENTESE", "ENTREASPAS", "DOISPONTOS", "SOMA", "MENOS",
  "MULTIPLICACAO", "DIVISAO", "RESTO", "POTENCIA", "LEIA", "ATRIBUICAO",
  "BRANCO", "REAL", "NUMERO", "CARACTER", "INTEIRO", "SE", "FIMSE",
  "SENAO", "ENTAO", "ATE", "DE", "FACA", "PARA", "FIMPARA", "ENQUANTO",
  "FIMENQUANTO", "REPITA", "FIMREPITA", "QUEBRA_LINHA", "CASO", "FIMFACA",
  "FUNCAO", "FIMFUNCAO", "OUTROCASO", "PROCEDIMENTO", "FIMPROCEDIMENTO",
  "PASSO", "VETOR", "RETORNE", "ESCOLHA", "FIMESCOLHA", "COMPR", "COPIA",
  "MAIUSC", "INTERROMPA", "OU", "E", "RAIZQ", "UMINUS", "$accept",
  "Programa", "$@1", "Algoritmo", "NomeAlgoritmo", "Var", "$@2", "$@3",
  "DeclVar", "TipoVar", "DeclVarList", "Funcao", "$@4", "DeclFuncao",
  "$@5", "VarFuncao", "$@6", "$@7", "RetorneFuncao", "TipoRetorno",
  "FimFuncao", "Procedimento", "DeclProc", "Inicio", "Comandos", "Escreva",
  "EscrevaList", "Leia", "Atribuicao", "Se", "Senao", "Entao", "FimSe",
  "Escolha", "CasoList", "OutroCaso", "DeclStringList", "VarUtil",
  "Repita", "LimiteRepita", "Para", "LimitePara", "PassoPara", "Enquanto",
  "Proc", "Interrompa", "Expr", "CopiaList", "FimAlgoritmo",
  "TerminaLinha", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    76,    75,    77,    78,    78,    80,    79,    81,
      79,    82,    82,    82,    83,    83,    83,    84,    84,    85,
      86,    85,    88,    87,    89,    90,    89,    91,    89,    92,
      93,    93,    94,    95,    95,    96,    97,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    99,   100,
     101,   102,   102,   103,   104,   104,   105,   106,   107,   108,
     108,   109,   109,   110,   110,   111,   112,   113,   113,   114,
     115,   116,   116,   117,   118,   119,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   121,   121,   122,   123,
     123,   123,   123
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     9,     1,     2,     1,     0,     3,     0,
       4,     4,     5,     3,     1,     1,     1,     1,     3,     0,
       0,     7,     0,     9,     0,     0,     3,     0,     4,     3,
       1,     1,     2,     0,     5,     3,     2,     0,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     5,     1,
       5,     4,     7,     6,     0,     3,     2,     2,     7,     4,
       5,     0,     3,     1,     3,     1,     4,     3,     2,    12,
       1,     0,     2,     7,     4,     2,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     4,     4,     3,     3,     1,     3,     2,     1,
       2,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     1,     6,     0,     0,    99,     5,
       0,    19,   101,   100,     7,     0,    33,    24,   102,    17,
       8,     9,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,    22,     0,     0,     2,    37,    25,    20,    18,
      15,    16,    14,    13,     0,    35,    36,    37,     0,    27,
      26,    37,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    28,     0,    12,     0,     0,
       3,     0,     0,     0,     0,    78,    77,    76,     0,     0,
       0,     0,     0,    65,     0,     0,    37,    34,     0,    75,
       0,     0,     0,    98,     0,    76,     0,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    30,    31,     0,     0,    21,     0,    74,
       0,    51,     0,     0,    82,     0,    96,     0,     0,     0,
      85,    90,    86,    88,    87,    84,    79,    83,    81,    80,
      89,    56,    94,    95,    54,     0,    70,    37,     0,     0,
      66,     0,    61,    29,    32,    23,     0,    48,    50,    93,
       0,    92,    91,     0,     0,     0,     0,     0,    68,    63,
       0,     0,     0,     0,    97,    37,     0,    53,    71,     0,
      67,     0,    37,    37,     0,    52,    55,    57,     0,     0,
      73,    64,    59,    62,    58,    72,     0,    60,    37,     0,
       0,    69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    47,     3,     6,    11,    20,    30,    21,    43,
      22,    16,    51,    17,    44,    28,    50,    75,   101,   135,
     137,    25,    26,    35,    48,    65,   108,    66,    67,    68,
     184,   128,   197,    69,   172,   192,   190,    94,    70,   170,
      71,   165,   209,    72,    73,    74,   166,   148,    80,     9
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -69
static const yytype_int16 yypact[] =
{
      33,   -69,    37,    42,   -69,     2,    39,    -5,     2,   -69,
       2,     6,     2,   -69,    63,    64,    14,    73,   -69,    52,
     -69,   -69,    57,    60,    79,    77,    77,     2,    77,    63,
     -69,    13,   -69,     2,     2,   -69,   -69,    63,   -69,   -69,
     -69,   -69,   -69,     2,    63,   -69,   -69,   -69,   120,   -69,
     -69,   -69,    63,    65,   195,     4,    67,    68,     9,    81,
       9,     2,     2,    81,     2,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   192,   -69,    69,     2,
     -69,    66,    12,    90,    88,   -69,   -69,   -69,     9,    87,
      91,    92,   350,   -69,    74,    -7,   -69,   -69,     2,   -69,
      26,    61,    13,   -69,     2,    96,   331,   -69,   100,   101,
     381,     9,    25,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     2,     9,     9,   -69,     9,
       2,   153,    71,   -69,   -69,     2,     2,   -69,     2,   -69,
      63,   -69,     2,     2,   -69,   400,   -69,   109,   110,   419,
      30,    30,    30,    30,    30,    30,    36,    36,   -69,   -69,
     -69,   -69,   451,   358,   218,    93,   445,   -69,     9,     2,
     -69,   129,    78,   -69,   -69,   -69,   115,   -69,   -69,   -69,
      25,   -69,   -69,     2,    98,     9,   239,   331,   -69,   121,
       2,     2,    75,     2,   -69,   -69,     2,   -69,    82,     2,
     -69,   129,   -69,   -69,     2,   -69,   286,   -69,   137,    99,
     -69,   -69,   251,   286,   -69,   -69,     2,   -69,   -69,   274,
       2,   -69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -10,    44,
     -26,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,    15,   -46,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -68,   -69,   -54,    85,   -69,   -69,
     -69,   -35,   -69,   -69,   -69,   -69,   -14,   -29,   -69,    -8
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      13,    54,    14,    39,    18,    76,   114,   115,   116,   117,
     118,   119,     7,    85,    86,    87,    85,    86,   105,    37,
     120,   121,   122,   123,   124,    45,    46,    49,    81,   133,
     146,   147,   134,    88,    53,    52,    88,     4,    82,   130,
       1,    36,    77,    38,    92,     5,    95,    10,    12,    40,
     131,    41,    42,    96,    97,     8,    99,   120,   121,   122,
     123,   124,    15,   126,   127,   122,   123,   124,   106,    19,
      23,   103,    29,    24,   110,    89,    90,    91,    89,    90,
      91,    27,   164,    31,    32,    33,    34,    93,    78,   104,
     132,    83,    84,   107,   109,   102,   139,   145,   141,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   111,   162,   163,   176,   112,   113,   161,   136,   129,
     140,   186,   167,   142,   143,   171,    55,   173,   174,   180,
     175,    56,   189,   181,   177,   178,   191,   185,   193,   196,
     204,   201,   215,   208,   217,   216,   138,   211,    98,   206,
     198,   194,     0,    57,   187,     0,   212,   213,     0,    55,
      58,   188,     0,     0,    56,     0,     0,    59,     0,    60,
       0,    61,   219,     0,     0,   195,     0,     0,     0,   200,
      62,     0,   202,   203,    63,   205,    57,     0,   207,    64,
       0,   210,     0,    58,     0,     0,   214,   168,    55,     0,
      59,    55,    60,    56,    61,   169,    56,    79,   218,     0,
       0,     0,   221,     0,     0,     0,     0,    63,     0,     0,
       0,     0,    64,     0,    55,    57,     0,     0,    57,    56,
       0,     0,    58,     0,     0,    58,     0,     0,     0,    59,
       0,    60,    59,    61,    60,    55,    61,     0,     0,     0,
      56,    57,     0,     0,     0,   100,    63,    55,    58,    63,
     183,    64,    56,     0,    64,    59,     0,    60,     0,    61,
       0,     0,    57,     0,     0,     0,     0,     0,     0,    58,
      55,     0,    63,     0,    57,    56,    59,    64,    60,   199,
      61,    58,    55,     0,     0,     0,     0,    56,    59,     0,
      60,     0,    61,    63,     0,   171,     0,    57,    64,     0,
       0,     0,     0,     0,    58,    63,     0,     0,     0,    57,
      64,    59,   220,    60,     0,    61,    58,     0,     0,     0,
       0,     0,     0,    59,     0,    60,     0,    61,    63,     0,
       0,     7,     0,    64,   114,   115,   116,   117,   118,   119,
      63,     0,     0,     0,     0,    64,     0,     0,   120,   121,
     122,   123,   124,   114,   115,   116,   117,   118,   119,     0,
       0,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,     0,     0,     8,   120,   121,   122,   123,   124,
       0,     0,     0,   125,   114,   115,   116,   117,   118,   119,
       0,   126,   127,     0,   144,     0,     0,     0,   120,   121,
     122,   123,   124,   114,   115,   116,   117,   118,   119,     0,
     126,   127,     0,   179,     0,     0,     0,   120,   121,   122,
     123,   124,   114,   115,   116,   117,   118,   119,     0,     0,
       0,     0,   182,     0,     0,     0,   120,   121,   122,   123,
     124,   126,   127,     0,     0,     0,     0,     0,   114,   115,
     116,   117,   118,   119,   114,   115,   116,   117,   118,   119,
     126,   127,   120,   121,   122,   123,   124,     0,   120,   121,
     122,   123,   124,     0,     0,     0,     0,     0,     0,   126,
     127,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,   127,     0,     0,     0,
       0,     0,   127
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-69))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       8,    47,    10,    29,    12,    51,    13,    14,    15,    16,
      17,    18,    10,     4,     5,     6,     4,     5,     6,    27,
      27,    28,    29,    30,    31,    33,    34,    37,    24,     3,
       5,     6,     6,    24,    44,    43,    24,     0,    34,    46,
       7,    26,    52,    28,    58,     3,    60,     8,    53,    36,
      96,    38,    39,    61,    62,    53,    64,    27,    28,    29,
      30,    31,    56,    70,    71,    29,    30,    31,    82,     6,
       6,    79,    20,    59,    88,    66,    67,    68,    66,    67,
      68,     8,   128,    26,    24,     6,     9,     6,    23,    23,
      98,    24,    24,     3,     6,    26,   104,   111,   106,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    24,   126,   127,   140,    24,    24,   125,    57,    45,
      24,   167,   130,    23,    23,    54,     6,   135,   136,    20,
     138,    11,     3,    23,   142,   143,    58,    44,    23,    41,
      65,    20,     5,    61,   212,    46,   102,   201,    63,   195,
     185,   180,    -1,    33,   168,    -1,   202,   203,    -1,     6,
      40,   169,    -1,    -1,    11,    -1,    -1,    47,    -1,    49,
      -1,    51,   218,    -1,    -1,   183,    -1,    -1,    -1,   187,
      60,    -1,   190,   191,    64,   193,    33,    -1,   196,    69,
      -1,   199,    -1,    40,    -1,    -1,   204,    44,     6,    -1,
      47,     6,    49,    11,    51,    52,    11,    12,   216,    -1,
      -1,    -1,   220,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,     6,    33,    -1,    -1,    33,    11,
      -1,    -1,    40,    -1,    -1,    40,    -1,    -1,    -1,    47,
      -1,    49,    47,    51,    49,     6,    51,    -1,    -1,    -1,
      11,    33,    -1,    -1,    -1,    63,    64,     6,    40,    64,
      42,    69,    11,    -1,    69,    47,    -1,    49,    -1,    51,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
       6,    -1,    64,    -1,    33,    11,    47,    69,    49,    50,
      51,    40,     6,    -1,    -1,    -1,    -1,    11,    47,    -1,
      49,    -1,    51,    64,    -1,    54,    -1,    33,    69,    -1,
      -1,    -1,    -1,    -1,    40,    64,    -1,    -1,    -1,    33,
      69,    47,    48,    49,    -1,    51,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    49,    -1,    51,    64,    -1,
      -1,    10,    -1,    69,    13,    14,    15,    16,    17,    18,
      64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    27,    28,
      29,    30,    31,    13,    14,    15,    16,    17,    18,    -1,
      -1,    13,    14,    15,    16,    17,    18,    27,    28,    29,
      30,    31,    -1,    -1,    53,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    43,    13,    14,    15,    16,    17,    18,
      -1,    70,    71,    -1,    23,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    13,    14,    15,    16,    17,    18,    -1,
      70,    71,    -1,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    70,    71,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    13,    14,    15,    16,    17,    18,
      70,    71,    27,    28,    29,    30,    31,    -1,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    75,    77,     0,     3,    78,    10,    53,   123,
       8,    79,    53,   123,   123,    56,    85,    87,   123,     6,
      80,    82,    84,     6,    59,    95,    96,     8,    89,    20,
      81,    26,    24,     6,     9,    97,    97,   123,    97,    84,
      36,    38,    39,    83,    88,   123,   123,    76,    98,    82,
      90,    86,   123,    82,    98,     6,    11,    33,    40,    47,
      49,    51,    60,    64,    69,    99,   101,   102,   103,   107,
     112,   114,   117,   118,   119,    91,    98,    82,    23,    12,
     122,    24,    34,    24,    24,     4,     5,     6,    24,    66,
      67,    68,   120,     6,   111,   120,   123,   123,   111,   123,
      63,    92,    26,   123,    23,     6,   120,     3,   100,     6,
     120,    24,    24,    24,    13,    14,    15,    16,    17,    18,
      27,    28,    29,    30,    31,    43,    70,    71,   105,    45,
      46,    98,   123,     3,     6,    93,    57,    94,    83,   123,
      24,   123,    23,    23,    23,   120,     5,     6,   121,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   123,   120,   120,    98,   115,   120,   123,    44,    52,
     113,    54,   108,   123,   123,   123,    84,   123,   123,    23,
      20,    23,    23,    42,   104,    44,    98,   120,   123,     3,
     110,    58,   109,    23,   121,   123,    41,   106,   115,    50,
     123,    20,   123,   123,    65,   123,    98,   123,    61,   116,
     123,   110,    98,    98,   123,     5,    46,   108,   123,    98,
      48,   123
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
      yychar = YYLEX;
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1806 of yacc.c  */
#line 143 "elfs.y"
    {strcpy(escopo,"global");}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 147 "elfs.y"
    {fila_insere(f,"#include <stdio.h>"); fila_insere(f,"#include <stdlib.h>");fila_insere(f,"#include <string.h>");}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 153 "elfs.y"
    {(yyvsp[(1) - (1)]) = strdup(yytext); printf("Algoritmo: %s\n", (yyvsp[(1) - (1)]));}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 159 "elfs.y"
    {strcpy(escopo,"local");}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 159 "elfs.y"
    {strcpy(escopo,"global");}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 160 "elfs.y"
    {strcpy(escopo,"local");}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 160 "elfs.y"
    {strcpy(escopo,"global");}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 189 "elfs.y"
    {strcpy(escopo,"local");}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 193 "elfs.y"
    {strcpy(escopo,"local");}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 198 "elfs.y"
    {strcpy(escopo,"local");}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 198 "elfs.y"
    {strcpy(escopo,"global");}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 199 "elfs.y"
    {strcpy(escopo,"local");}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 199 "elfs.y"
    {strcpy(escopo,"global");}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 229 "elfs.y"
    {fila_insere(f,"void main() {");}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 251 "elfs.y"
    {strcpy(conc,"printf("); strcat(conc,(yyvsp[(3) - (5)])); strcat(conc,");");fila_insere(f,conc);}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 254 "elfs.y"
    {(yyval) = strdup(yytext); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 264 "elfs.y"
    {fila_insere(f, "scanf();");}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 390 "elfs.y"
    {fila_insere(f, "}");}
    break;



/* Line 1806 of yacc.c  */
#line 1851 "elfs.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 402 "elfs.y"


int main(int argc, char *argv[]) 
{
	FILE *arq;
	
  	if (argc < 2)
	{
     		printf("Digite o arquivo\n");
  	}else{
		f=fila_cria();
		
		conc=(char *)(malloc((sizeof(char)*100)));//variável para concatenação de strings

		yyin = fopen(argv[1], "r");

		erros = 0;

		t = inicializarHash();

                yyparse();

		if (erros == 0)
		{
			printf("compilado com sucesso!\n");
				//    abrir_arq(arq);				
				if (!(arq=fopen("traducao.c","w+")))
				{
      					printf("erro na abertura do arquivo!");
        				exit(1);
 		    		}
			arq_imprime(f,arq);
	
			fila_libera(f);

			printf("  Transcrição feita com Sucesso!.\n");
		}else{
			printf("  Arquivo não compilado.\n");
		     }
                return 0;	     
	     }
}

int yyerror(char *s,int line, char *msg) {
  	if (line > 0 && line < 100) {
	printf("Erro na Linha: %d. %s .\n",line,s);
    
	return 0;  }
}

int yywrap(void){
	return 1;
}


