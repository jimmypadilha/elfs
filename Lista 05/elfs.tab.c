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

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

extern FILE *yyin;
extern int yylineno;
extern char *yytext;


/* Line 268 of yacc.c  */
#line 82 "elfs.tab.c"

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
     ALGORITMO = 261,
     VAR = 262,
     INICIO = 263,
     COMENTARIO = 264,
     ESCREVA = 265,
     FIMALGORITMO = 266,
     MAIORIGUAL = 267,
     DIFERENTE = 268,
     IGUAL = 269,
     MENOR = 270,
     MENORIGUAL = 271,
     MAIOR = 272,
     PONTOPONTO = 273,
     VIRGULA = 274,
     FCOLCHETE = 275,
     ACOLCHETE = 276,
     FPARENTESE = 277,
     APARENTESE = 278,
     ENTREASPAS = 279,
     DOISPONTOS = 280,
     SOMA = 281,
     MENOS = 282,
     MULTIPLICACAO = 283,
     DIVISAO = 284,
     RESTO = 285,
     POTENCIA = 286,
     LEIA = 287,
     ATRIBUICAO = 288,
     BRANCO = 289,
     VARIAVEL = 290,
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
     OU = 321,
     E = 322,
     RAIZQ = 323
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 11 "elfs.y"

 int intval;
 double floatval;
 char *strval;



/* Line 293 of yacc.c  */
#line 194 "elfs.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 206 "elfs.tab.c"

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   252

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNRULES -- Number of states.  */
#define YYNSTATES  183

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

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
      65,    66,    67,    68
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,    11,    13,    15,    17,    19,
      21,    23,    24,    26,    29,    31,    35,    39,    41,    43,
      45,    47,    49,    51,    53,    55,    58,    60,    62,    64,
      66,    68,    70,    72,    74,    79,    86,    91,    98,   107,
     116,   127,   140,   145,   149,   151,   154,   156,   158,   162,
     164,   168,   172,   176,   180,   184,   188,   192,   196,   200,
     204,   208,   212,   216,   218,   220,   222,   226,   229,   232,
     234,   236,   238,   241,   249,   251,   255,   257,   260,   264,
     266,   268,   270,   277,   284,   286,   289,   292,   296,   298,
     302,   306,   308,   312,   317,   319,   322,   325
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      70,     0,    -1,    -1,    70,    71,    53,    -1,     6,     3,
      -1,     9,    -1,     7,    -1,    73,    -1,    72,    -1,    78,
      -1,    92,    -1,    -1,    74,    -1,    74,    75,    -1,    75,
      -1,    76,    25,    77,    -1,    76,    19,    35,    -1,    35,
      -1,    36,    -1,    39,    -1,    38,    -1,     8,    -1,    79,
      -1,    11,    -1,    80,    -1,    80,     9,    -1,    81,    -1,
      82,    -1,    83,    -1,    86,    -1,    88,    -1,    89,    -1,
      90,    -1,    91,    -1,    10,    23,     3,    22,    -1,    10,
      23,     3,    19,    76,    22,    -1,    10,    23,    76,    22,
      -1,    10,    23,    76,    19,     3,    22,    -1,    10,    23,
      76,    19,     3,    19,    76,    22,    -1,    10,    23,     3,
      19,    76,    19,     3,    22,    -1,    10,    23,     3,    19,
      76,    19,     3,    19,    76,    22,    -1,    10,    23,    76,
      19,     3,    19,    76,    19,     3,    19,    76,    22,    -1,
      32,    23,    76,    22,    -1,    35,    33,    84,    -1,    85,
      -1,    85,    84,    -1,    35,    -1,     5,    -1,    35,    30,
      35,    -1,     4,    -1,    85,    26,    85,    -1,    85,    27,
      85,    -1,    85,    28,    85,    -1,    85,    29,    85,    -1,
      23,    85,    22,    -1,    85,    17,    85,    -1,    85,    12,
      85,    -1,    85,    14,    85,    -1,    85,    15,    85,    -1,
      85,    16,    85,    -1,    85,    67,    85,    -1,    85,    66,
      85,    -1,    40,    85,    43,    -1,    42,    -1,    41,    -1,
       3,    -1,    87,    19,     3,    -1,    64,    35,    -1,    54,
      87,    -1,    58,    -1,    65,    -1,    51,    -1,    44,    84,
      -1,    47,    35,    45,     5,    44,    85,    46,    -1,    48,
      -1,    49,    85,    46,    -1,    50,    -1,    93,    53,    -1,
      93,    53,    94,    -1,    94,    -1,    95,    -1,    96,    -1,
      97,    53,     7,    53,    73,   103,    -1,   104,    53,     7,
      53,    73,   106,    -1,    98,    -1,    98,    99,    -1,    59,
      35,    -1,    23,   100,    22,    -1,   101,    -1,     7,    53,
      75,    -1,   101,    19,   102,    -1,   102,    -1,    76,    25,
      77,    -1,     8,    53,    79,    60,    -1,   105,    -1,   105,
      99,    -1,    56,    35,    -1,     8,    53,    79,    63,    35,
      53,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   106,   110,   111,   112,   113,   114,   115,
     119,   120,   126,   130,   131,   135,   139,   140,   143,   144,
     145,   150,   151,   152,   156,   157,   161,   162,   163,   164,
     165,   166,   167,   168,   173,   174,   175,   176,   177,   178,
     179,   180,   186,   191,   195,   196,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   219,   220,   221,   225,   226,   230,   231,   232,
     233,   237,   238,   242,   243,   247,   248,   253,   256,   257,
     260,   261,   264,   267,   270,   271,   274,   277,   281,   282,
     285,   286,   289,   294,   298,   299,   301,   306
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "APPROXNUM", "INTNUM",
  "ALGORITMO", "VAR", "INICIO", "COMENTARIO", "ESCREVA", "FIMALGORITMO",
  "MAIORIGUAL", "DIFERENTE", "IGUAL", "MENOR", "MENORIGUAL", "MAIOR",
  "PONTOPONTO", "VIRGULA", "FCOLCHETE", "ACOLCHETE", "FPARENTESE",
  "APARENTESE", "ENTREASPAS", "DOISPONTOS", "SOMA", "MENOS",
  "MULTIPLICACAO", "DIVISAO", "RESTO", "POTENCIA", "LEIA", "ATRIBUICAO",
  "BRANCO", "VARIAVEL", "REAL", "NUMERO", "CARACTER", "INTEIRO", "SE",
  "FIMSE", "SENAO", "ENTAO", "ATE", "DE", "FACA", "PARA", "FIMPARA",
  "ENQUANTO", "FIMENQUANTO", "REPITA", "FIMREPITA", "QUEBRA_LINHA", "CASO",
  "FIMFACA", "FUNCAO", "FIMFUNCAO", "OUTROCASO", "PROCEDIMENTO",
  "FIMPROCEDIMENTO", "PASSO", "VETOR", "RETORNE", "ESCOLHA", "FIMESCOLHA",
  "OU", "E", "RAIZQ", "$accept", "Input", "estrutura_algoritmo",
  "bloco_intermediario", "declaracao_parte", "declaracao_variaveis_lista",
  "declaracao_variaveis", "declaracao_variavel", "tipo_variavel",
  "estrutura_corpo", "comandos", "comando", "lista_escreva", "lista_leia",
  "atribuicao", "lista_expr", "expr", "se", "strings", "escolha", "repita",
  "para", "enquanto", "declaracao_procedimentos_funcoes",
  "procedimento_funcoes_lista", "proc_func_declaracao",
  "procedimento_declaracao", "funcao_declaracao", "procedimento_cabecalho",
  "procedimento_identificacao", "lista_parametros",
  "procedimento_funcao_parametros", "declaracao_parametros_lista",
  "procedimento_funcao_declaracao_parametros", "corpo_procedimento",
  "funcao_cabecalho", "funcao_identificacao", "corpo_funcao", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    71,    71,    71,    71,
      72,    72,    73,    74,    74,    75,    76,    76,    77,    77,
      77,    78,    78,    78,    79,    79,    80,    80,    80,    80,
      80,    80,    80,    80,    81,    81,    81,    81,    81,    81,
      81,    81,    82,    83,    84,    84,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    86,    86,    86,    87,    87,    88,    88,    88,
      88,    89,    89,    90,    90,    91,    91,    92,    93,    93,
      94,    94,    95,    96,    97,    97,    98,    99,   100,   100,
     101,   101,   102,   103,   104,   104,   105,   106
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     2,     1,     1,     1,     1,     1,
       1,     0,     1,     2,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     6,     4,     6,     8,     8,
      10,    12,     4,     3,     1,     2,     1,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     3,     2,     2,     1,
       1,     1,     2,     7,     1,     3,     1,     2,     3,     1,
       1,     1,     6,     6,     1,     2,     2,     3,     1,     3,
       3,     1,     3,     4,     1,     2,     2,     7
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    11,     1,     0,     6,    21,     5,     0,    23,     0,
      17,     0,    64,    63,     0,     0,    74,     0,    76,    71,
       0,     0,    69,     0,     0,    70,     0,     8,     7,    12,
      14,     0,     9,    22,    24,    26,    27,    28,    29,    30,
      31,    32,    33,    10,     0,    79,    80,    81,     0,    84,
       0,    94,     4,     0,     0,     0,    49,    47,     0,    46,
       0,    72,    44,     0,     0,    65,    68,    96,    86,    67,
       3,    17,    13,     0,     0,    25,    77,     0,     0,    85,
       0,    95,     0,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,     0,     0,
      45,     0,    75,     0,    16,    18,    20,    19,    15,    78,
       0,     0,     0,     0,    88,    91,     0,     0,    34,     0,
      36,    42,    54,    48,    56,    57,    58,    59,    55,    50,
      51,    52,    53,    61,    60,     0,    66,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,    89,    92,    90,
       0,     0,    35,     0,    37,     0,     0,    82,     0,    83,
       0,     0,    73,     0,     0,     0,    39,     0,    38,     0,
       0,     0,     0,     0,    93,     0,    40,     0,     0,     0,
       0,    41,    97
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    26,    27,    28,    29,    30,    31,   108,    32,
      33,    34,    35,    36,    37,    61,    62,    38,    66,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      79,   113,   114,   115,   157,    50,    51,   159
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -100
static const yytype_int16 yypact[] =
{
    -100,     4,  -100,    14,  -100,  -100,  -100,   -16,  -100,    -4,
      17,    71,  -100,  -100,    71,    31,  -100,    71,  -100,  -100,
      83,    72,  -100,    74,    75,  -100,    67,  -100,  -100,   101,
    -100,    42,  -100,  -100,   128,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,    90,  -100,  -100,  -100,   104,   135,
     106,   135,  -100,     2,   101,    71,  -100,  -100,    71,   121,
       6,  -100,    88,   115,   152,  -100,   142,  -100,  -100,  -100,
    -100,  -100,  -100,   130,    59,  -100,    15,   163,    24,  -100,
     164,  -100,    77,    99,   100,  -100,   160,   138,    71,    71,
      71,    71,    71,    71,    71,    71,    71,  -100,    71,    71,
    -100,   179,  -100,   180,  -100,  -100,  -100,  -100,  -100,  -100,
     132,   143,    45,   169,   184,  -100,   155,   101,  -100,     5,
    -100,  -100,  -100,  -100,     1,     1,     1,     1,     1,    13,
      13,  -100,  -100,   185,   220,   165,  -100,   101,   101,    59,
    -100,   101,   101,   105,   107,    71,   202,  -100,  -100,  -100,
     207,    21,  -100,   101,  -100,   178,   167,  -100,   168,  -100,
     109,   113,  -100,    98,    98,   101,  -100,    22,  -100,    17,
     156,   154,   122,   203,  -100,   188,  -100,   101,   172,   131,
     171,  -100,  -100
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -100,  -100,  -100,  -100,   -99,  -100,   -26,   -52,    91,  -100,
     -73,  -100,  -100,  -100,  -100,   -46,   -11,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,   153,  -100,  -100,  -100,  -100,
     182,  -100,  -100,    97,  -100,  -100,  -100,  -100
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      60,    83,    84,    72,     2,    82,    64,    53,   144,    85,
       3,     4,     5,     6,     7,     8,   100,    52,    88,    54,
      89,    90,    91,    92,   160,   173,   112,    93,    94,    95,
      96,   111,    93,    94,    95,    96,     9,    71,   146,    10,
     104,    95,    96,   150,    11,    12,    13,    86,    14,    97,
      55,    15,    16,    17,    18,    19,   104,   104,    20,    71,
      21,    73,    22,    23,    73,   143,    63,    74,    24,    25,
     139,    21,    98,    99,    23,    56,    57,   124,   125,   126,
     127,   128,   129,   130,   131,   132,    65,   133,   134,   112,
     170,   171,    56,    57,    58,   105,   117,   106,   107,   118,
      88,   161,    89,    90,    91,    92,    59,    67,     7,    68,
      69,    58,   147,   172,    93,    94,    95,    96,   119,    73,
      70,   120,   121,    59,   151,   179,   153,   152,   165,   154,
       9,   166,   167,   169,   155,   168,    71,    75,    11,    12,
      13,    73,    14,    76,   176,    15,    16,    17,    18,    19,
      73,    87,    20,   181,    98,    99,    22,    77,    78,    80,
     101,   103,    24,    25,    88,   104,    89,    90,    91,    92,
     110,   116,    88,   123,    89,    90,    91,    92,    93,    94,
      95,    96,   122,   136,   135,   137,    93,    94,    95,    96,
      88,   140,    89,    90,    91,    92,   138,    88,   102,    89,
      90,    91,    92,   141,    93,    94,    95,    96,   142,   145,
     156,    93,    94,    95,    96,   158,   174,   175,    98,    99,
     163,   164,   177,   178,   162,   180,    98,    99,   182,   109,
     148,     0,    88,    81,    89,    90,    91,    92,   149,     0,
       0,     0,     0,     0,    98,    99,    93,    94,    95,    96,
       0,     0,    99
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-100))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      11,    53,    54,    29,     0,     3,    17,    23,     3,    55,
       6,     7,     8,     9,    10,    11,    62,     3,    12,    23,
      14,    15,    16,    17,     3,     3,    78,    26,    27,    28,
      29,     7,    26,    27,    28,    29,    32,    35,   137,    35,
      35,    28,    29,   142,    40,    41,    42,    58,    44,    43,
      33,    47,    48,    49,    50,    51,    35,    35,    54,    35,
      56,    19,    58,    59,    19,   117,    35,    25,    64,    65,
      25,    56,    66,    67,    59,     4,     5,    88,    89,    90,
      91,    92,    93,    94,    95,    96,     3,    98,    99,   141,
     163,   164,     4,     5,    23,    36,    19,    38,    39,    22,
      12,   153,    14,    15,    16,    17,    35,    35,    10,    35,
      35,    23,   138,   165,    26,    27,    28,    29,    19,    19,
      53,    22,    22,    35,    19,   177,    19,    22,    19,    22,
      32,    22,    19,    35,   145,    22,    35,     9,    40,    41,
      42,    19,    44,    53,    22,    47,    48,    49,    50,    51,
      19,    30,    54,    22,    66,    67,    58,    53,    23,    53,
      45,    19,    64,    65,    12,    35,    14,    15,    16,    17,
       7,     7,    12,    35,    14,    15,    16,    17,    26,    27,
      28,    29,    22,     3,     5,    53,    26,    27,    28,    29,
      12,    22,    14,    15,    16,    17,    53,    12,    46,    14,
      15,    16,    17,    19,    26,    27,    28,    29,    53,    44,
       8,    26,    27,    28,    29,     8,    60,    63,    66,    67,
      53,    53,    19,    35,    46,    53,    66,    67,    57,    76,
     139,    -1,    12,    51,    14,    15,    16,    17,   141,    -1,
      -1,    -1,    -1,    -1,    66,    67,    26,    27,    28,    29,
      -1,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    70,     0,     6,     7,     8,     9,    10,    11,    32,
      35,    40,    41,    42,    44,    47,    48,    49,    50,    51,
      54,    56,    58,    59,    64,    65,    71,    72,    73,    74,
      75,    76,    78,    79,    80,    81,    82,    83,    86,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     104,   105,     3,    23,    23,    33,     4,     5,    23,    35,
      85,    84,    85,    35,    85,     3,    87,    35,    35,    35,
      53,    35,    75,    19,    25,     9,    53,    53,    23,    99,
      53,    99,     3,    76,    76,    84,    85,    30,    12,    14,
      15,    16,    17,    26,    27,    28,    29,    43,    66,    67,
      84,    45,    46,    19,    35,    36,    38,    39,    77,    94,
       7,     7,    76,   100,   101,   102,     7,    19,    22,    19,
      22,    22,    22,    35,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,     5,     3,    53,    53,    25,
      22,    19,    53,    76,     3,    44,    73,    75,    77,   102,
      73,    19,    22,    19,    22,    85,     8,   103,     8,   106,
       3,    76,    46,    53,    53,    19,    22,    19,    22,    35,
      79,    79,    76,     3,    60,    63,    22,    19,    35,    76,
      53,    22,    57
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
        case 3:

/* Line 1806 of yacc.c  */
#line 106 "elfs.y"
    { printf("---Base do algoritmo---\n"); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 111 "elfs.y"
    {printf("comentario\n");}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 115 "elfs.y"
    {printf("CORPO\n");}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 119 "elfs.y"
    {printf("***Chama Estrutura Procedimento e funcoes\n");}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 143 "elfs.y"
    {printf("variavel tipo real...\n");}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 144 "elfs.y"
    {printf("variavel tipo inteiro...\n");}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 145 "elfs.y"
    {printf("variavel tipo caractere...\n");}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 150 "elfs.y"
    {printf("INICIO\n");}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 151 "elfs.y"
    {printf("CORPO ALGORITMO\n");}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 152 "elfs.y"
    {printf("FIM ALGORITMO...\n");}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 173 "elfs.y"
    {printf("escreva simples...\n");}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 174 "elfs.y"
    {printf("escreva com variaveis\n");}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 175 "elfs.y"
    {printf("escreva so variaveis...\n");}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 176 "elfs.y"
    {printf("escreva invertido ...\n");}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 177 "elfs.y"
    {printf("variavel string...\n");}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 178 "elfs.y"
    {printf("string variavel...\n");}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 179 "elfs.y"
    {printf("escreva 4...\n");}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 180 "elfs.y"
    {printf("escreva 5...\n");}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 186 "elfs.y"
    {printf("leia\n");}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 191 "elfs.y"
    {printf("atribuicao\n");}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 200 "elfs.y"
    {printf("VARIAVEL\n");}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 201 "elfs.y"
    { printf("INTEIRO\n");}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 203 "elfs.y"
    { printf("FLOAT\n");}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 204 "elfs.y"
    { printf("ADD\n"); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 205 "elfs.y"
    { printf("SUB\n"); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 206 "elfs.y"
    { printf("MUL\n"); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 207 "elfs.y"
    { printf("DIV\n"); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 209 "elfs.y"
    {printf("MAIOR\n");}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 210 "elfs.y"
    {printf("MAIOR IGUAL\n");}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 211 "elfs.y"
    {printf("IGUAL\n");}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 212 "elfs.y"
    {printf("MENOR\n");}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 213 "elfs.y"
    {printf("MENORIGUAL\n");}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 214 "elfs.y"
    {printf("E\n");}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 215 "elfs.y"
    {printf("OU\n");}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 219 "elfs.y"
    {printf("SE\n");}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 221 "elfs.y"
    {printf("FIMSE\n");}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 230 "elfs.y"
    {printf("ESCOLHA\n");}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 231 "elfs.y"
    {printf("CASO\n");}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 232 "elfs.y"
    {printf("OUTROCASO\n");}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 242 "elfs.y"
    {printf("PARA\n");}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 277 "elfs.y"
    {printf("...\n");}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 294 "elfs.y"
    {printf("***Corpo PROCEDIMENTO...\n");}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 306 "elfs.y"
    {printf("***Corpo FUNCAO...\n");}
    break;



/* Line 1806 of yacc.c  */
#line 1929 "elfs.tab.c"
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
#line 309 "elfs.y"


int yyerror(char *s) {
  printf("Erro: %s.Linha: %d. Token nao esperado: %s.\n", s, yylineno, yytext);
}

int main(int argc, char *argv[]) {
//tentativa de recebimento de arquivo
  if (argc < 2){
     printf("Digite o arquivo\n");
  } 
  else{
     yyin = fopen(argv[1], "r");
     if (!yyparse())
        fprintf(stderr, "---ALGORITMO FINALIZADO---\n");
     else
        fprintf(stderr, "Erros Encontrados.\n");
  }
}

