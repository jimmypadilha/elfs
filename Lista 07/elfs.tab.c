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

Fila* f;
extern FILE *yyin;
int erros;
tab_hash *t;
char *conc, *linha;
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

/* Funcao que concatena strings de uma linha de comando */
void Concatenar(char *texto){
	strcat(conc, texto);
}

/* Funcao que limpa a variavel utilizada para concatenacao de strings de um comando */
void Limpar(){
	strcpy(linha, conc);
	strcpy(conc, "" );
}



/* Line 268 of yacc.c  */
#line 124 "elfs.tab.c"

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
     COMENTARIO = 262,
     ALGORITMO = 263,
     VAR = 264,
     INICIO = 265,
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
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 56 "elfs.y"

	int intval;
	double floatval;
	char *strval;



/* Line 293 of yacc.c  */
#line 241 "elfs.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 253 "elfs.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   757

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNRULES -- Number of states.  */
#define YYNSTATES  251

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
       0,     0,     3,     4,    14,    16,    18,    19,    23,    25,
      26,    30,    31,    36,    38,    43,    49,    53,    55,    57,
      59,    61,    63,    67,    69,    70,    71,    79,    80,    90,
      91,    92,    96,    97,   102,   104,   108,   110,   112,   114,
     117,   118,   124,   128,   131,   132,   135,   138,   141,   144,
     147,   150,   153,   156,   159,   162,   164,   165,   170,   172,
     176,   180,   182,   185,   189,   194,   195,   202,   204,   209,
     217,   224,   225,   229,   232,   234,   237,   245,   250,   256,
     257,   261,   263,   267,   269,   271,   273,   278,   282,   285,
     298,   300,   301,   304,   312,   317,   320,   322,   324,   326,
     330,   334,   338,   342,   346,   350,   354,   358,   362,   366,
     370,   374,   379,   384,   389,   391,   395,   399,   401,   405,
     407,   410,   412,   415,   418,   422
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      75,     0,    -1,    -1,    77,    78,    80,    86,    96,    98,
      76,    99,   126,    -1,     8,    -1,     1,    -1,    -1,     3,
      79,   127,    -1,     1,    -1,    -1,     9,   127,    81,    -1,
      -1,     9,   127,    83,    82,    -1,     1,    -1,    85,    26,
      84,   127,    -1,    85,    26,    84,   127,    83,    -1,    85,
      26,    84,    -1,    39,    -1,    36,    -1,    38,    -1,     1,
      -1,     6,    -1,     6,    20,    85,    -1,     1,    -1,    -1,
      -1,    88,    90,    98,    87,    99,    93,    95,    -1,    -1,
      56,     6,    24,    89,    83,    23,    26,    84,   127,    -1,
      -1,    -1,     9,   127,    91,    -1,    -1,     9,   127,    83,
      92,    -1,     1,    -1,    63,    94,   127,    -1,     3,    -1,
       6,    -1,     1,    -1,    57,   127,    -1,    -1,    97,    98,
      99,    60,   127,    -1,    59,     6,   127,    -1,    10,   127,
      -1,    -1,    99,   100,    -1,    99,   103,    -1,    99,   106,
      -1,    99,   107,    -1,    99,   111,    -1,    99,   116,    -1,
      99,   118,    -1,    99,   121,    -1,    99,   122,    -1,    99,
     123,    -1,     1,    -1,    -1,    11,   101,   102,   127,    -1,
       3,    -1,    24,   102,    23,    -1,     3,    20,   102,    -1,
       6,    -1,     6,   102,    -1,     6,    20,   102,    -1,    67,
      24,   125,    23,    -1,    -1,    33,    24,   104,   105,    23,
     127,    -1,     6,    -1,     6,    34,   124,   127,    -1,     6,
      34,     6,    24,    85,    23,   127,    -1,    40,   124,   109,
      99,   108,   110,    -1,    -1,    42,   127,    99,    -1,    43,
     127,    -1,     1,    -1,    41,   127,    -1,    64,   115,   127,
     112,   113,    65,   127,    -1,    54,   114,   127,    99,    -1,
      54,   114,   127,    99,   112,    -1,    -1,    58,   127,    99,
      -1,     3,    -1,     3,    20,   114,    -1,     1,    -1,     6,
      -1,     1,    -1,    51,   127,    99,   117,    -1,    44,   124,
     127,    -1,    52,   127,    -1,    47,   115,    45,   119,    44,
     119,   120,    46,   127,    99,    48,   127,    -1,   124,    -1,
      -1,    61,     5,    -1,    49,   124,    46,   127,    99,    50,
     127,    -1,     6,    24,    23,   127,    -1,    69,   127,    -1,
       6,    -1,     5,    -1,     4,    -1,   124,    27,   124,    -1,
     124,    30,   124,    -1,   124,    29,   124,    -1,    24,   124,
      23,    -1,   124,    28,   124,    -1,   124,    18,   124,    -1,
     124,    13,   124,    -1,   124,    15,   124,    -1,   124,    17,
     124,    -1,   124,    16,   124,    -1,   124,    31,   124,    -1,
     124,    14,   124,    -1,    68,    24,   124,    23,    -1,    67,
      24,   125,    23,    -1,    66,    24,   124,    23,    -1,     1,
      -1,   124,    70,   124,    -1,   124,    71,   124,    -1,     5,
      -1,     6,    20,   125,    -1,     1,    -1,    12,   127,    -1,
      53,    -1,    53,   127,    -1,   128,    53,    -1,   128,    53,
     127,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   158,   158,   158,   162,   163,   167,   167,   168,   173,
     173,   174,   174,   175,   179,   180,   181,   185,   186,   187,
     188,   192,   193,   194,   202,   203,   203,   207,   207,   210,
     212,   212,   213,   213,   214,   218,   222,   223,   224,   229,
     233,   235,   239,   243,   248,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   264,   264,   268,   269,
     270,   271,   272,   273,   274,   278,   278,   282,   286,   287,
     291,   294,   296,   300,   301,   305,   309,   313,   314,   317,
     319,   323,   324,   325,   329,   330,   335,   339,   340,   344,
     348,   351,   353,   357,   361,   365,   369,   370,   371,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   394,   395,   399,   400,   401,
     406,   410,   411,   412,   413,   416
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "APPROXNUM", "INTNUM",
  "VARIAVEL", "COMENTARIO", "ALGORITMO", "VAR", "INICIO", "ESCREVA",
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
  "Programa", "$@1", "Algoritmo", "NomeAlgoritmo", "$@2", "Var", "$@3",
  "$@4", "DeclVar", "TipoVar", "DeclVarList", "Funcao", "$@5",
  "DeclFuncao", "$@6", "VarFuncao", "$@7", "$@8", "RetorneFuncao",
  "TipoRetorno", "FimFuncao", "Procedimento", "DeclProc", "Inicio",
  "Comandos", "Escreva", "$@9", "EscrevaList", "Leia", "$@10", "LeiaList",
  "Atribuicao", "Se", "Senao", "Entao", "FimSe", "Escolha", "CasoList",
  "OutroCaso", "DeclStringList", "VarUtil", "Repita", "LimiteRepita",
  "Para", "LimitePara", "PassoPara", "Enquanto", "Proc", "Interrompa",
  "Expr", "CopiaList", "FimAlgoritmo", "TerminaLinha", "TK_comentario", 0
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
       0,    74,    76,    75,    77,    77,    79,    78,    78,    81,
      80,    82,    80,    80,    83,    83,    83,    84,    84,    84,
      84,    85,    85,    85,    86,    87,    86,    89,    88,    90,
      91,    90,    92,    90,    90,    93,    94,    94,    94,    95,
      96,    96,    97,    98,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,   101,   100,   102,   102,
     102,   102,   102,   102,   102,   104,   103,   105,   106,   106,
     107,   108,   108,   109,   109,   110,   111,   112,   112,   113,
     113,   114,   114,   114,   115,   115,   116,   117,   117,   118,
     119,   120,   120,   121,   122,   123,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   125,   125,   125,
     126,   127,   127,   127,   127,   128
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     9,     1,     1,     0,     3,     1,     0,
       3,     0,     4,     1,     4,     5,     3,     1,     1,     1,
       1,     1,     3,     1,     0,     0,     7,     0,     9,     0,
       0,     3,     0,     4,     1,     3,     1,     1,     1,     2,
       0,     5,     3,     2,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     0,     4,     1,     3,
       3,     1,     2,     3,     4,     0,     6,     1,     4,     7,
       6,     0,     3,     2,     1,     2,     7,     4,     5,     0,
       3,     1,     3,     1,     1,     1,     4,     3,     2,    12,
       1,     0,     2,     7,     4,     2,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     4,     4,     1,     3,     3,     1,     3,     1,
       2,     1,     2,     2,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     4,     0,     0,     1,     8,     6,     0,     0,
      13,     0,    24,   125,   121,     7,     0,     0,     0,    40,
       0,   122,   123,    23,    21,    10,    11,     0,     0,     0,
       0,     0,    34,     0,     0,   124,     0,    12,     0,    27,
       0,     0,     2,     0,     0,    25,    22,    20,    18,    19,
      17,    16,     0,    42,    43,     0,    55,     0,    32,    31,
       0,     0,     0,     0,     0,    56,     0,     0,     0,     0,
       0,     0,     0,     0,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    33,     0,    15,     0,     0,     3,
       0,     0,     0,    65,   114,    98,    97,    96,     0,     0,
       0,     0,     0,    85,    84,     0,     0,     0,    41,     0,
      95,     0,     0,     0,   120,     0,    96,     0,    58,    61,
       0,     0,     0,     0,     0,     0,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,    36,
      37,     0,     0,    26,     0,    94,     0,    68,     0,     0,
      62,     0,     0,    57,    67,     0,   102,     0,   119,   117,
       0,     0,     0,   105,   110,   106,   108,   107,   104,    99,
     103,   101,   100,   109,    73,   115,   116,    71,     0,    90,
       0,     0,     0,    86,     0,    79,    35,    39,    28,     0,
      60,    63,    59,     0,     0,   113,     0,   112,   111,     0,
       0,     0,     0,     0,    88,    83,    81,     0,     0,     0,
       0,    64,    66,   118,     0,     0,    70,    91,     0,    87,
       0,     0,     0,     0,    69,    72,    75,     0,     0,    93,
      82,    77,    80,    76,    92,     0,    78,     0,     0,     0,
      89
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    55,     4,     8,     9,    12,    25,    37,    26,
      51,    27,    19,    60,    20,    52,    34,    59,    84,   112,
     151,   153,    30,    31,    42,    57,    74,    92,   122,    75,
     123,   165,    76,    77,   210,   143,   226,    78,   195,   219,
     217,   105,    79,   193,    80,   188,   238,    81,    82,    83,
     189,   171,    89,    15,    16
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -142
static const yytype_int16 yypact[] =
{
     127,  -142,  -142,    14,   104,  -142,  -142,  -142,    94,     5,
    -142,     5,   -29,  -142,     5,  -142,   -25,     7,    32,    -3,
      90,  -142,     5,  -142,    37,  -142,  -142,    54,    73,    95,
      99,    99,  -142,     5,    99,  -142,   130,  -142,     3,  -142,
       5,     5,  -142,     4,    66,  -142,  -142,  -142,  -142,  -142,
    -142,     5,   130,  -142,  -142,   251,  -142,   427,  -142,  -142,
     272,   141,   100,   453,    -8,  -142,   114,    19,   181,    19,
       5,     5,   181,     5,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,   450,  -142,   123,     5,  -142,
     138,    78,   124,  -142,  -142,  -142,  -142,  -142,    19,   126,
     159,   160,    18,  -142,  -142,   120,   596,   202,  -142,     5,
    -142,   157,   129,     3,  -142,     5,   164,   392,   169,    72,
     124,   168,     5,   189,   616,    19,   171,    19,  -142,    19,
      19,    19,    19,    19,    19,    19,    19,    19,    19,    19,
       5,    19,    19,   239,    19,     5,   406,   142,  -142,  -142,
    -142,     5,     5,  -142,     5,  -142,   130,  -142,   124,   124,
    -142,   176,   171,  -142,  -142,   178,  -142,   641,  -142,  -142,
     184,   182,   661,   356,   356,   356,   356,   356,   356,    40,
      40,  -142,  -142,  -142,  -142,   139,   413,   478,   167,   686,
     293,    19,     5,  -142,   172,   158,  -142,  -142,  -142,   192,
    -142,  -142,  -142,   195,     5,  -142,   171,  -142,  -142,     5,
     180,    19,   499,   392,  -142,  -142,   200,     5,     5,   162,
       5,  -142,  -142,  -142,   305,     5,  -142,   163,     5,  -142,
     172,   179,   326,     5,  -142,   553,  -142,   218,   183,  -142,
    -142,   520,   553,  -142,  -142,     5,  -142,   349,   532,     5,
    -142
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,   -43,
     112,   -30,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,   128,   -53,  -142,  -142,   -26,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,   -10,  -142,
       2,   175,  -142,  -142,  -142,    25,  -142,  -142,  -142,  -142,
     -17,  -141,  -142,   -11,  -142
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -45
static const yytype_int16 yytable[] =
{
      17,    58,    63,    21,    47,    56,    46,    85,    23,    62,
     -44,    35,    13,    24,     5,   -44,    90,    -9,    86,   128,
      94,   203,    44,    95,    96,    97,    91,    18,    22,    53,
      54,   129,   130,   131,   132,   133,   134,   -44,    28,    48,
      61,    49,    50,    98,   -44,   135,   136,   137,   138,   139,
     102,   -44,   106,   -44,   146,   -44,    29,    36,    14,   107,
     108,   140,   110,    -9,   -44,   223,    -9,    23,   -44,   137,
     138,   139,    24,   -44,   117,   118,   -30,   114,   119,    94,
      38,   124,    95,    96,   116,    99,   100,   101,   141,   142,
     187,    32,   159,   160,   161,    10,   120,    39,   147,    33,
     -29,    40,    98,    11,   155,     6,   157,     7,   167,    41,
     172,   163,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,    87,   185,   186,   199,   118,     1,   184,
     119,    23,   200,   201,   190,     2,    24,   212,    93,   121,
     196,   197,    23,   198,    99,   100,   101,    24,   120,   113,
     125,   -14,   129,   130,   131,   132,   133,   134,   148,    43,
     149,   115,    45,   150,   -14,   144,   135,   136,   137,   138,
     139,   235,   168,   215,   213,   216,   169,   170,   241,   242,
      56,   214,   103,   126,   127,   -44,   152,   104,   156,   158,
     -44,   121,   162,   222,   248,   164,   194,   -14,   224,   202,
     -14,   204,   229,    56,   206,   207,   231,   232,   -44,   234,
     142,   211,   -44,   -44,   236,   220,   218,   239,   221,   -44,
     230,   225,   243,   244,   237,   154,   -44,   233,   -44,   245,
     -44,   246,   240,   -44,   247,   -44,   227,   -44,   250,     0,
      56,     0,   -44,   -44,   -44,   -44,   -44,   109,   -44,   -44,
     -44,   -44,    56,   -44,   -44,     0,     0,   -44,     0,     0,
       0,     0,   -44,   -44,     0,     0,   -44,     0,     0,     0,
       0,   -44,   -44,    56,     0,     0,     0,     0,   -44,   -44,
     -44,   -44,     0,   -44,   -44,     0,   -44,     0,   -44,     0,
     -44,   -44,     0,     0,    56,     0,     0,     0,   -44,   -44,
     -44,     0,   -44,   -44,   -44,   -44,    56,     0,   -44,     0,
       0,   -44,   -44,     0,     0,   -44,   -44,     0,     0,   -44,
     -44,   -44,     0,   -44,     0,     0,   -44,    56,     0,     0,
       0,     0,   -44,   -44,     0,   -44,   -44,   -44,   -44,     0,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,
      56,     0,   -44,     0,   -44,   -44,   -44,   -44,     0,   -44,
     -44,     0,   -44,     0,     0,     0,   -44,     0,     0,   -44,
       0,     0,     0,   -44,   -44,   -44,     0,   -44,     0,     0,
       0,     0,   -44,   135,   136,   137,   138,   139,     0,   -44,
     -44,   -44,     0,     0,     0,   -44,   -44,   -44,   -44,    13,
     -44,     0,     0,     0,     0,   129,   130,   131,   132,   133,
     134,     0,    64,   -44,     0,     0,     0,    65,   -44,   135,
     136,   137,   138,   139,     0,     0,   129,   130,   131,   132,
     133,   134,     0,    64,     0,     0,     0,     0,    65,    66,
     135,   136,   137,   138,   139,    14,    67,     0,     0,     0,
     191,     0,     0,    68,     0,    69,    64,    70,   192,    64,
      66,    65,   141,   142,    65,    88,     0,    67,     0,     0,
      72,     0,     0,     0,    68,    73,    69,     0,    70,     0,
       0,     0,     0,    66,    64,     0,    66,    71,     0,    65,
      67,    72,     0,    67,     0,     0,    73,    68,     0,    69,
      68,    70,    69,     0,    70,    64,     0,     0,     0,     0,
      65,    66,     0,   111,    72,     0,     0,    72,    67,    73,
     209,     0,    73,     0,     0,    68,    64,    69,     0,    70,
       0,    65,    66,     0,     0,     0,     0,     0,    64,    67,
       0,     0,    72,    65,     0,     0,    68,    73,    69,   228,
      70,     0,     0,    66,     0,     0,     0,     0,     0,    64,
      67,     0,     0,    72,    65,    66,     0,    68,    73,    69,
       0,    70,    67,     0,   194,     0,     0,     0,     0,    68,
     249,    69,     0,    70,    72,     0,    66,     0,     0,    73,
       0,     0,     0,    67,     0,     0,    72,     0,     0,     0,
      68,    73,    69,     0,    70,     0,     0,     0,     0,   129,
     130,   131,   132,   133,   134,     0,     0,    72,     0,     0,
       0,     0,    73,   135,   136,   137,   138,   139,     0,   129,
     130,   131,   132,   133,   134,     0,     0,     0,     0,   166,
       0,     0,   145,   135,   136,   137,   138,   139,     0,     0,
       0,     0,     0,     0,   129,   130,   131,   132,   133,   134,
       0,     0,     0,     0,   205,     0,   141,   142,   135,   136,
     137,   138,   139,     0,   129,   130,   131,   132,   133,   134,
       0,     0,     0,     0,   208,     0,   141,   142,   135,   136,
     137,   138,   139,     0,     0,     0,     0,     0,     0,   129,
     130,   131,   132,   133,   134,     0,     0,     0,     0,     0,
       0,   141,   142,   135,   136,   137,   138,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   141,   142,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   141,   142
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-142))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      11,    44,    55,    14,     1,     1,    36,    60,     1,    52,
       6,    22,     7,     6,     0,    11,    24,    10,    61,     1,
       1,   162,    33,     4,     5,     6,    34,    56,    53,    40,
      41,    13,    14,    15,    16,    17,    18,    33,     6,    36,
      51,    38,    39,    24,    40,    27,    28,    29,    30,    31,
      67,    47,    69,    49,   107,    51,    59,    20,    53,    70,
      71,    43,    73,    56,    60,   206,    59,     1,    64,    29,
      30,    31,     6,    69,    91,     3,    10,    88,     6,     1,
      26,    98,     4,     5,     6,    66,    67,    68,    70,    71,
     143,     1,    20,   119,   120,     1,    24,    24,   109,     9,
      10,     6,    24,     9,   115,     1,   117,     3,   125,    10,
     127,   122,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,    23,   141,   142,   156,     3,     1,   140,
       6,     1,   158,   159,   145,     8,     6,   190,    24,    67,
     151,   152,     1,   154,    66,    67,    68,     6,    24,    26,
      24,    10,    13,    14,    15,    16,    17,    18,     1,    31,
       3,    23,    34,     6,    23,    45,    27,    28,    29,    30,
      31,   224,     1,     1,   191,     3,     5,     6,   231,   232,
       1,   192,     1,    24,    24,     6,    57,     6,    24,    20,
      11,    67,    24,   204,   247,     6,    54,    56,   209,    23,
      59,    23,   213,     1,    20,    23,   217,   218,     6,   220,
      71,    44,    33,    11,   225,    23,    58,   228,    23,    40,
      20,    41,   233,     5,    61,   113,    47,    65,    49,    46,
      51,   241,   230,    54,   245,    33,   211,    58,   249,    -1,
       1,    -1,    40,    64,    65,     6,    44,    72,    69,    47,
      11,    49,     1,    51,    52,    -1,    -1,     6,    -1,    -1,
      -1,    -1,    11,    12,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    33,     1,    -1,    -1,    -1,    -1,     6,    40,
      41,    42,    -1,    11,    33,    -1,    47,    -1,    49,    -1,
      51,    40,    -1,    -1,     1,    -1,    -1,    -1,    47,     6,
      49,    -1,    51,    64,    11,    33,     1,    -1,    69,    -1,
      -1,     6,    40,    -1,    -1,    64,    11,    -1,    -1,    47,
      69,    49,    -1,    51,    -1,    -1,    33,     1,    -1,    -1,
      -1,    -1,     6,    40,    -1,    63,    64,    11,    33,    -1,
      47,    69,    49,    50,    51,    40,    41,    -1,    -1,    -1,
       1,    -1,    47,    -1,    49,     6,    51,    64,    -1,    33,
      11,    -1,    69,    -1,    -1,    -1,    40,    -1,    -1,    64,
      -1,    -1,    -1,    47,    69,    49,    -1,    51,    -1,    -1,
      -1,    -1,    33,    27,    28,    29,    30,    31,    -1,    40,
      64,    65,    -1,    -1,    -1,    69,    47,    48,    49,     7,
      51,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,     6,    64,    -1,    -1,    -1,    11,    69,    27,
      28,    29,    30,    31,    -1,    -1,    13,    14,    15,    16,
      17,    18,    -1,     6,    -1,    -1,    -1,    -1,    11,    33,
      27,    28,    29,    30,    31,    53,    40,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    49,     6,    51,    52,     6,
      33,    11,    70,    71,    11,    12,    -1,    40,    -1,    -1,
      64,    -1,    -1,    -1,    47,    69,    49,    -1,    51,    -1,
      -1,    -1,    -1,    33,     6,    -1,    33,    60,    -1,    11,
      40,    64,    -1,    40,    -1,    -1,    69,    47,    -1,    49,
      47,    51,    49,    -1,    51,     6,    -1,    -1,    -1,    -1,
      11,    33,    -1,    63,    64,    -1,    -1,    64,    40,    69,
      42,    -1,    69,    -1,    -1,    47,     6,    49,    -1,    51,
      -1,    11,    33,    -1,    -1,    -1,    -1,    -1,     6,    40,
      -1,    -1,    64,    11,    -1,    -1,    47,    69,    49,    50,
      51,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,     6,
      40,    -1,    -1,    64,    11,    33,    -1,    47,    69,    49,
      -1,    51,    40,    -1,    54,    -1,    -1,    -1,    -1,    47,
      48,    49,    -1,    51,    64,    -1,    33,    -1,    -1,    69,
      -1,    -1,    -1,    40,    -1,    -1,    64,    -1,    -1,    -1,
      47,    69,    49,    -1,    51,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    27,    28,    29,    30,    31,    -1,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    46,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    23,    -1,    70,    71,    27,    28,
      29,    30,    31,    -1,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    23,    -1,    70,    71,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     8,    75,    77,     0,     1,     3,    78,    79,
       1,     9,    80,     7,    53,   127,   128,   127,    56,    86,
      88,   127,    53,     1,     6,    81,    83,    85,     6,    59,
      96,    97,     1,     9,    90,   127,    20,    82,    26,    24,
       6,    10,    98,    98,   127,    98,    85,     1,    36,    38,
      39,    84,    89,   127,   127,    76,     1,    99,    83,    91,
      87,   127,    83,    99,     6,    11,    33,    40,    47,    49,
      51,    60,    64,    69,   100,   103,   106,   107,   111,   116,
     118,   121,   122,   123,    92,    99,    83,    23,    12,   126,
      24,    34,   101,    24,     1,     4,     5,     6,    24,    66,
      67,    68,   124,     1,     6,   115,   124,   127,   127,   115,
     127,    63,    93,    26,   127,    23,     6,   124,     3,     6,
      24,    67,   102,   104,   124,    24,    24,    24,     1,    13,
      14,    15,    16,    17,    18,    27,    28,    29,    30,    31,
      43,    70,    71,   109,    45,    46,    99,   127,     1,     3,
       6,    94,    57,    95,    84,   127,    24,   127,    20,    20,
     102,   102,    24,   127,     6,   105,    23,   124,     1,     5,
       6,   125,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   127,   124,   124,    99,   119,   124,
     127,    44,    52,   117,    54,   112,   127,   127,   127,    85,
     102,   102,    23,   125,    23,    23,    20,    23,    23,    42,
     108,    44,    99,   124,   127,     1,     3,   114,    58,   113,
      23,    23,   127,   125,   127,    41,   110,   119,    50,   127,
      20,   127,   127,    65,   127,    99,   127,    61,   120,   127,
     114,    99,    99,   127,     5,    46,   112,   127,    99,    48,
     127
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
#line 158 "elfs.y"
    {strcpy(escopo,"global");}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 162 "elfs.y"
    {fila_insere(f, "#include <stdio.h>");}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 163 "elfs.y"
    {erros++; yyerror("Falta a palavra algoritmo", yylineno, yytext);}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 167 "elfs.y"
    {(yyvsp[(1) - (1)].strval) = strdup(yytext); printf("Algoritmo: %s\n", (yyvsp[(1) - (1)].strval));}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 168 "elfs.y"
    {erros++; yyerror("Falta o nome do algoritmo", yylineno, yytext);}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 173 "elfs.y"
    {strcpy(escopo,"local");}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 173 "elfs.y"
    {strcpy(escopo,"global");}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 174 "elfs.y"
    {strcpy(escopo,"local");}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 174 "elfs.y"
    {strcpy(escopo,"global");}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 175 "elfs.y"
    {erros++; yyerror("Falta a palavra var", yylineno, yytext);}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 179 "elfs.y"
    {Limpar(); fila_insere(f, linha);}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 185 "elfs.y"
    {Concatenar("int ");}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 186 "elfs.y"
    {Concatenar("float");}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 188 "elfs.y"
    {erros++; yyerror("Tipo invalido", yylineno, yytext);}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 192 "elfs.y"
    {Concatenar((yyvsp[(1) - (1)].strval)); Concatenar(";");}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 194 "elfs.y"
    {erros++; yyerror("Problema na lista de variaveis", yylineno, yytext);}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 203 "elfs.y"
    {strcpy(escopo,"local");}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 207 "elfs.y"
    {strcpy(escopo,"local");}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 212 "elfs.y"
    {strcpy(escopo,"local");}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 212 "elfs.y"
    {strcpy(escopo,"global");}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 213 "elfs.y"
    {strcpy(escopo,"local");}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 213 "elfs.y"
    {strcpy(escopo,"global");}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 214 "elfs.y"
    {erros++; yyerror("Problema no var da funcao", yylineno, yytext);}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 224 "elfs.y"
    {erros++; yyerror("Tipo de retorno desconhecido", yylineno, yytext);}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 243 "elfs.y"
    {fila_insere(f, "void main() {");}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 260 "elfs.y"
    {erros++; yyerror("Comando invalido", yylineno, yytext);}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 264 "elfs.y"
    {Concatenar("printf(");}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 264 "elfs.y"
    {Concatenar(");"); Limpar(); fila_insere(f, linha);}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 268 "elfs.y"
    {Concatenar((yyvsp[(1) - (1)].strval));}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 270 "elfs.y"
    {Concatenar((yyvsp[(1) - (3)].strval)); Concatenar(",");}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 271 "elfs.y"
    {Concatenar((yyvsp[(1) - (1)].strval));}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 273 "elfs.y"
    {Concatenar(",");}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 278 "elfs.y"
    {Concatenar("scanf(");}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 278 "elfs.y"
    {Concatenar(");"); Limpar(); fila_insere(f, linha);}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 282 "elfs.y"
    {Concatenar((yyvsp[(1) - (1)].strval));}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 286 "elfs.y"
    {Limpar(); fila_insere(f, linha);}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 301 "elfs.y"
    {erros++; yyerror("Falta a palavra entao", yylineno, yytext);}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 325 "elfs.y"
    {erros++; yyerror("Problema na lista de strings", yylineno, yytext);}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 330 "elfs.y"
    {erros++; yyerror("Falta a variavel", yylineno, yytext);}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 369 "elfs.y"
    {Concatenar((yyvsp[(1) - (1)].strval));}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 370 "elfs.y"
    {Concatenar((yyvsp[(1) - (1)].strval));}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 375 "elfs.y"
    {Concatenar("+");}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 376 "elfs.y"
    {Concatenar("/");}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 377 "elfs.y"
    {Concatenar("*");}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 390 "elfs.y"
    {erros++; yyerror("Expresao incorreta", yylineno, yytext);}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 401 "elfs.y"
    {erros++; yyerror("Problema na lista de variaveis do copia", yylineno, yytext);}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 406 "elfs.y"
    {fila_insere(f, "}");}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 416 "elfs.y"
    {Concatenar((yyvsp[(1) - (1)].strval)); Limpar(); fila_insere(f, linha);}
    break;



/* Line 1806 of yacc.c  */
#line 2156 "elfs.tab.c"
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
#line 418 "elfs.y"


int main(int argc, char *argv[]) 
{
	FILE *arq;
	
  	if (argc < 2)
	{
     		printf("Digite o arquivo\n");
  	}else{
		f = fila_cria();
		
		conc=(char *)(malloc((sizeof(char)*100)));//variável para concatenação de strings
		
		linha=(char *)(malloc((sizeof(char)*100)));//variável para ser passada para a fila

		yyin = fopen(argv[1], "r");

		erros = 0;

		t = inicializarHash();

                yyparse();

		if (erros == 0)
		{
			printf("  Arquivo compilado com sucesso!\n"); 
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


