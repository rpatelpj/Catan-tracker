/* A Bison parser, made by GNU Bison 3.5.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "mscgen_language.y"

/***************************************************************************
 *
 * $Id: language.y 175 2011-02-06 21:07:43Z Michael.McTernan $
 *
 * Grammar and parser for the mscgen language.
 * Copyright (C) 2009 Michael C McTernan, Michael.McTernan.2001@cs.bris.ac.uk
 *
 * This file is part of msclib.
 *
 * Msc is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * Msclib is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Foobar; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 ***************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "mscgen_lexer.h"
#include "mscgen_safe.h"
#include "mscgen_msc.h"

/* Lexer prototypes to prevent compiler warnings */
int yylex(void);
int yylex_destroy(void);

/* Use verbose error reporting such that the expected token names are dumped */
#define YYERROR_VERBOSE

/* Name of parameter that is passed to yyparse() */
#define YYPARSE_PARAM yyparse_result

#define YYMALLOC malloc_s

/* yyerror
 *  Error handling function.  The TOK_XXX names are substituted for more
 *  understandable values that make more sense to the user.
 */
void yyerror(void *unused, const char *str)
{
    static const char *tokNames[] = { "TOK_OCBRACKET",          "TOK_CCBRACKET",
                                      "TOK_OSBRACKET",          "TOK_CSBRACKET",
                                      "TOK_REL_DOUBLE_TO",      "TOK_REL_DOUBLE_FROM",
                                      "TOK_REL_SIG_TO",         "TOK_REL_SIG_FROM",
                                      "TOK_REL_METHOD_TO",      "TOK_REL_METHOD_FROM",
                                      "TOK_REL_RETVAL_TO",      "TOK_REL_RETVAL_FROM",
                                      "TOK_REL_CALLBACK_TO",    "TOK_REL_CALLBACK_FROM",
                                      "TOK_REL_SIG",            "TOK_REL_METHOD",
                                      "TOK_REL_RETVAL",         "TOK_REL_DOUBLE",
                                      "TOK_EQUAL",              "TOK_COMMA",
                                      "TOK_SEMICOLON",          "TOK_MSC",
                                      "TOK_ATTR_LABEL",         "TOK_ATTR_URL",
                                      "TOK_ATTR_IDURL",         "TOK_ATTR_ID",
                                      "TOK_ATTR_LINE_COLOUR",   "TOK_ATTR_TEXT_COLOUR",
                                      "TOK_SPECIAL_ARC",        "TOK_UNKNOWN",
                                      "TOK_STRING",             "TOK_QSTRING",
                                      "TOK_OPT_HSCALE",         "TOK_ASTERISK",
                                      "TOK_OPT_WIDTH",          "TOK_ARC_BOX",
                                      "TOK_ARC_ABOX",           "TOK_ARC_RBOX",
                                      "TOK_ATTR_TEXT_BGCOLOUR", "TOK_ATTR_ARC_TEXT_BGCOLOUR",
                                      "TOK_REL_LOSS_TO",        "TOK_REL_LOSS_FROM",
                                      "TOK_OPT_ARCGRADIENT",    "TOK_ATTR_ARC_SKIP",
                                      "TOK_OPT_WORDWRAPARCS",   "TOK_REL_NOTE" };

    static const char *tokRepl[] =  { "'{'",             "'}'",
                                      "'['",             "']'",
                                      "':>'",            "'<:'",
                                      "'->'",            "'<-'",
                                      "'=>'",            "'<='",
                                      "'>>'",            "'<<'",
                                      "'=>>'",           "'<<='",
                                      "'--'",            "'=='",
                                      "'..'",            "'::'",
                                      "'='",             "','",
                                      "';'",             "'msc'",
                                      "'label'",         "'url'",
                                      "'idurl'",         "'id'",
                                      "'linecolour'",    "'textcolour'",
                                      "'...', '---'",    "characters",
                                      "'string'",        "'quoted string'",
                                      "'hscale'",        "'*'",
                                      "'width'",         "'box'",
                                      "'abox'",          "'rbox'",
                                      "'textbgcolour'",  "'arctextbgcolor'",
                                      "'-x'",            "'x-'",
                                      "'arcgradient'",   "'arcskip'",
                                      "'wordwraparcs'",  "'note'" };

    static const int tokArrayLen = sizeof(tokNames) / sizeof(char *);

    char *s, *line;
    int   t;

    /* Print standard message part */
    fprintf(stderr, "Error detected at line %lu: ", lex_getlinenum());

    /* Search for TOK */
    s = (char *)strstr(str, "TOK_");
    while(s != NULL)
    {
        int found = 0;

        /* Print out message until start of the token is found */
        while(str < s)
        {
            fprintf(stderr, "%c", *str);
            str++;
        }

        /* Look for the token name */
        for(t = 0; t < tokArrayLen && !found; t++)
        {
            if(strncmp(tokNames[t], str, strlen(tokNames[t])) == 0)
            {
                /* Dump the replacement string */
                fprintf(stderr, "%s", tokRepl[t]);

                /* Skip the token name */
                str += strlen(tokNames[t]);

                /* Exit the loop */
                found = 1;
            }
        }

        /* Check if a replacement was found */
        if(!found)
        {
            /* Dump the next char and skip it so that TOK doesn't match again */
            fprintf(stderr, "%c", *str);
            str++;
        }

        s = (char *)strstr(str, "TOK_");
    }

    fprintf(stderr, "%s.\n", str);

    line = lex_getline();
    if(line != NULL)
    {
        fprintf(stderr, "> %s\n", line);

        /* If the input line contains a 'lost arc', print a helpful note since
         *  without whitespace, this can confuse the lexer.
         */
        if(strstr(line, "x-") != NULL)
        {
            fprintf(stderr, "\nNote: This input line contains 'x-' which has special meaning as a \n"
                            "      'lost message' arc, but may not have been recognised as such if it\n"
                            "      is preceded by other letters or numbers.  Please use double-quoted\n"
                            "      strings for tokens before 'x-', or insert a preceding whitespace if\n"
                            "      this is what you intend.\n");
        }
    }
    else
    {
        fprintf(stderr, ".\n");
    }
}

int yywrap()
{
    return 1;
}


char *removeEscapes(char *in)
{
    const uint16_t l = strlen(in);
    char          *r = (char *)malloc_s(l + 1);
    uint16_t       t, u;

    for(t = u = 0; t < l; t++)
    {
        r[u] = in[t];
        if(in[t] != '\\' || in[t + 1] != '\"')
        {
            u++;
        }
    }

    r[u] = '\0';

    free(in);

    return r;
}

extern FILE *yyin;
extern int   yyparse (void *YYPARSE_PARAM);


Msc MscParse(FILE *in)
{
    Msc m;

    yyin = in;

    /* Parse, and check that no errors are found */
    if(yyparse((void *)&m) != 0)
    {
        m = NULL;
    }

    lex_destroy();
    yylex_destroy();

    return m;
}



#line 296 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_USERS_RAJ_DESKTOP_CATAN_TRACKER_DOXYGEN_BUILD_GENERATED_SRC_MSCGEN_LANGUAGE_HPP_INCLUDED
# define YY_YY_USERS_RAJ_DESKTOP_CATAN_TRACKER_DOXYGEN_BUILD_GENERATED_SRC_MSCGEN_LANGUAGE_HPP_INCLUDED
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
    TOK_STRING = 258,
    TOK_QSTRING = 259,
    TOK_EQUAL = 260,
    TOK_COMMA = 261,
    TOK_SEMICOLON = 262,
    TOK_OCBRACKET = 263,
    TOK_CCBRACKET = 264,
    TOK_OSBRACKET = 265,
    TOK_CSBRACKET = 266,
    TOK_MSC = 267,
    TOK_ATTR_LABEL = 268,
    TOK_ATTR_URL = 269,
    TOK_ATTR_ID = 270,
    TOK_ATTR_IDURL = 271,
    TOK_ATTR_LINE_COLOUR = 272,
    TOK_ATTR_TEXT_COLOUR = 273,
    TOK_ATTR_TEXT_BGCOLOUR = 274,
    TOK_ATTR_ARC_LINE_COLOUR = 275,
    TOK_ATTR_ARC_TEXT_COLOUR = 276,
    TOK_ATTR_ARC_TEXT_BGCOLOUR = 277,
    TOK_REL_LOSS_TO = 278,
    TOK_REL_LOSS_FROM = 279,
    TOK_REL_SIG_BI = 280,
    TOK_REL_SIG_TO = 281,
    TOK_REL_SIG_FROM = 282,
    TOK_REL_METHOD_BI = 283,
    TOK_REL_METHOD_TO = 284,
    TOK_REL_METHOD_FROM = 285,
    TOK_REL_RETVAL_BI = 286,
    TOK_REL_RETVAL_TO = 287,
    TOK_REL_RETVAL_FROM = 288,
    TOK_REL_DOUBLE_BI = 289,
    TOK_REL_DOUBLE_TO = 290,
    TOK_REL_DOUBLE_FROM = 291,
    TOK_REL_CALLBACK_BI = 292,
    TOK_REL_CALLBACK_TO = 293,
    TOK_REL_CALLBACK_FROM = 294,
    TOK_REL_BOX = 295,
    TOK_REL_ABOX = 296,
    TOK_REL_RBOX = 297,
    TOK_REL_NOTE = 298,
    TOK_SPECIAL_ARC = 299,
    TOK_OPT_HSCALE = 300,
    TOK_OPT_WIDTH = 301,
    TOK_OPT_ARCGRADIENT = 302,
    TOK_OPT_WORDWRAPARCS = 303,
    TOK_ASTERISK = 304,
    TOK_UNKNOWN = 305,
    TOK_REL_SIG = 306,
    TOK_REL_METHOD = 307,
    TOK_REL_RETVAL = 308,
    TOK_REL_DOUBLE = 309,
    TOK_ATTR_ARC_SKIP = 310
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 250 "mscgen_language.y"

    char         *string;
    Msc           msc;
    MscOpt        opt;
    MscOptType    optType;
    MscArc        arc;
    MscArcList    arclist;
    MscArcType    arctype;
    MscEntity     entity;
    MscEntityList entitylist;
    MscAttrib     attrib;
    MscAttribType attribType;

#line 418 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void *YYPARSE_PARAM);

#endif /* !YY_YY_USERS_RAJ_DESKTOP_CATAN_TRACKER_DOXYGEN_BUILD_GENERATED_SRC_MSCGEN_LANGUAGE_HPP_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   129

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  102

#define YYUNDEFTOK  2
#define YYMAXUTOK   310


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   289,   289,   295,   302,   303,   308,   313,   313,   313,
     313,   315,   319,   326,   330,   336,   340,   344,   353,   357,
     359,   363,   367,   373,   377,   383,   387,   391,   396,   396,
     396,   396,   397,   397,   397,   397,   398,   398,   398,   398,
     398,   399,   399,   399,   399,   399,   399,   400,   400,   400,
     400,   400,   400,   402,   403,   408,   413,   413,   413,   413,
     414,   414,   414,   415,   415,   415,   416,   419,   423
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_STRING", "TOK_QSTRING", "TOK_EQUAL",
  "TOK_COMMA", "TOK_SEMICOLON", "TOK_OCBRACKET", "TOK_CCBRACKET",
  "TOK_OSBRACKET", "TOK_CSBRACKET", "TOK_MSC", "TOK_ATTR_LABEL",
  "TOK_ATTR_URL", "TOK_ATTR_ID", "TOK_ATTR_IDURL", "TOK_ATTR_LINE_COLOUR",
  "TOK_ATTR_TEXT_COLOUR", "TOK_ATTR_TEXT_BGCOLOUR",
  "TOK_ATTR_ARC_LINE_COLOUR", "TOK_ATTR_ARC_TEXT_COLOUR",
  "TOK_ATTR_ARC_TEXT_BGCOLOUR", "TOK_REL_LOSS_TO", "TOK_REL_LOSS_FROM",
  "TOK_REL_SIG_BI", "TOK_REL_SIG_TO", "TOK_REL_SIG_FROM",
  "TOK_REL_METHOD_BI", "TOK_REL_METHOD_TO", "TOK_REL_METHOD_FROM",
  "TOK_REL_RETVAL_BI", "TOK_REL_RETVAL_TO", "TOK_REL_RETVAL_FROM",
  "TOK_REL_DOUBLE_BI", "TOK_REL_DOUBLE_TO", "TOK_REL_DOUBLE_FROM",
  "TOK_REL_CALLBACK_BI", "TOK_REL_CALLBACK_TO", "TOK_REL_CALLBACK_FROM",
  "TOK_REL_BOX", "TOK_REL_ABOX", "TOK_REL_RBOX", "TOK_REL_NOTE",
  "TOK_SPECIAL_ARC", "TOK_OPT_HSCALE", "TOK_OPT_WIDTH",
  "TOK_OPT_ARCGRADIENT", "TOK_OPT_WORDWRAPARCS", "TOK_ASTERISK",
  "TOK_UNKNOWN", "TOK_REL_SIG", "TOK_REL_METHOD", "TOK_REL_RETVAL",
  "TOK_REL_DOUBLE", "TOK_ATTR_ARC_SKIP", "$accept", "msc", "optlist",
  "opt", "optval", "entitylist", "entity", "arclist", "arc", "arcrel",
  "relation_box", "relation_line", "relation_bi", "relation_to",
  "relation_from", "attrlist", "attr", "attrval", "string", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310
};
# endif

#define YYPACT_NINF (-36)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -6,    35,    48,    15,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,    16,   -36,     3,    34,    40,   -36,   -10,    42,    42,
      42,     8,    11,   -36,    47,   -36,    40,   -36,    90,    49,
     -36,    55,    59,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,    -1,   -36,    53,     8,   -36,   -36,
     -36,   -36,   -36,   -36,    42,     8,    -2,    11,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,    42,    42,    42,
      10,    42,    11,   -36,    42,    61,   -36,   -36,   -36,   -36,
      28,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,    68,    67,     7,     8,     9,
      10,     0,     4,     0,     0,    11,    13,     0,     0,     0,
       0,     0,     0,     5,     0,     6,    12,    20,     0,     0,
      15,    19,     0,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,     0,    53,     0,     0,    52,    47,
      48,    49,    51,    50,     0,     0,     0,     0,    46,    36,
      41,    37,    42,    38,    43,    40,    45,    39,    44,    28,
      29,    30,    31,    32,    33,    34,    35,     0,     0,     0,
       0,     0,     0,    14,     0,     0,    27,    17,     3,    16,
       0,    21,    24,    22,    26,    23,    25,    54,    55,     0,
      18,     2
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -36,   -36,   -36,    52,   -36,    54,    50,    24,   -35,   -36,
     -36,   -36,   -36,   -36,    41,    22,    21,   -36,    -3
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    11,    12,    13,    14,    15,    29,    30,    31,
      77,    78,    79,    80,    54,    44,    45,    46,    32
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      16,     5,     6,     5,     6,    82,     1,    88,    19,   101,
      83,     5,     6,     5,     6,    16,    25,    16,     5,     6,
      87,    89,    17,    18,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    82,     7,     8,     9,    10,   100,
      20,    21,    27,     3,    27,     5,     6,    28,     4,    28,
      22,    86,    27,    20,    47,    55,    56,    28,    84,    94,
       7,     8,     9,    10,    89,    57,    43,    55,    99,    23,
      26,    85,    24,    81,    91,    92,    93,    95,    96,    90,
       0,    98,    58,    48,    59,    60,    49,    61,    62,    50,
      63,    64,    51,    65,    66,    52,    67,    68,    53,    69,
      70,    71,    72,    97,     0,     0,     0,     0,     0,     0,
      73,    74,    75,    76,    48,     0,     0,    49,     0,     0,
      50,     0,     0,    51,     0,     0,    52,     0,     0,    53
};

static const yytype_int8 yycheck[] =
{
       3,     3,     4,     3,     4,     6,    12,     9,     5,     9,
      11,     3,     4,     3,     4,    18,    19,    20,     3,     4,
      55,    56,     6,     7,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     6,    45,    46,    47,    48,    11,
       6,     7,    44,     8,    44,     3,     4,    49,     0,    49,
      10,    54,    44,     6,     7,     6,     7,    49,     5,    49,
      45,    46,    47,    48,    99,    10,    55,     6,     7,    17,
      20,    47,    18,    32,    77,    78,    79,    80,    81,    57,
      -1,    84,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    54,    24,    -1,    -1,    27,    -1,    -1,
      30,    -1,    -1,    33,    -1,    -1,    36,    -1,    -1,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    12,    57,     8,     0,     3,     4,    45,    46,    47,
      48,    58,    59,    60,    61,    62,    74,     6,     7,     5,
       6,     7,    10,    59,    61,    74,    62,    44,    49,    63,
      64,    65,    74,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    55,    71,    72,    73,     7,    24,    27,
      30,    33,    36,    39,    70,     6,     7,    10,    23,    25,
      26,    28,    29,    31,    32,    34,    35,    37,    38,    40,
      41,    42,    43,    51,    52,    53,    54,    66,    67,    68,
      69,    70,     6,    11,     5,    63,    74,    64,     9,    64,
      71,    74,    74,    74,    49,    74,    74,    72,    74,     7,
      11,     9
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    57,    58,    58,    59,    60,    60,    60,
      60,    61,    61,    62,    62,    63,    63,    63,    64,    64,
      65,    65,    65,    65,    65,    65,    65,    65,    66,    66,
      66,    66,    67,    67,    67,    67,    68,    68,    68,    68,
      68,    69,    69,    69,    69,    69,    69,    70,    70,    70,
      70,    70,    70,    71,    71,    72,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    74,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     9,     7,     1,     3,     3,     1,     1,     1,
       1,     1,     3,     1,     4,     1,     3,     3,     4,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (YYPARSE_PARAM, YY_("syntax error: cannot back up")); \
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
                  Type, Value, YYPARSE_PARAM); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, void *YYPARSE_PARAM)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (YYPARSE_PARAM);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, void *YYPARSE_PARAM)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep, YYPARSE_PARAM);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule, void *YYPARSE_PARAM)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              , YYPARSE_PARAM);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, YYPARSE_PARAM); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, void *YYPARSE_PARAM)
{
  YYUSE (yyvaluep);
  YYUSE (YYPARSE_PARAM);
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
yyparse (void *YYPARSE_PARAM)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 290 "mscgen_language.y"
{
    (yyval.msc) = MscAlloc((yyvsp[-6].opt), (yyvsp[-4].entitylist), (yyvsp[-2].arclist));
    *(Msc *)yyparse_result = (yyval.msc);

}
#line 1689 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 3:
#line 296 "mscgen_language.y"
{
    (yyval.msc) = MscAlloc(NULL, (yyvsp[-4].entitylist), (yyvsp[-2].arclist));
    *(Msc *)yyparse_result = (yyval.msc);

}
#line 1699 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 5:
#line 304 "mscgen_language.y"
{
    (yyval.opt) = MscLinkOpt((yyvsp[-2].opt), (yyvsp[0].opt));
}
#line 1707 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 6:
#line 309 "mscgen_language.y"
{
    (yyval.opt) = MscAllocOpt((yyvsp[-2].optType), (yyvsp[0].string));
}
#line 1715 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 11:
#line 316 "mscgen_language.y"
{
    (yyval.entitylist) = MscLinkEntity(NULL, (yyvsp[0].entity));   /* Create new list */
}
#line 1723 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 12:
#line 320 "mscgen_language.y"
{
    (yyval.entitylist) = MscLinkEntity((yyvsp[-2].entitylist), (yyvsp[0].entity));     /* Add to existing list */
}
#line 1731 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 13:
#line 327 "mscgen_language.y"
{
    (yyval.entity) = MscAllocEntity((yyvsp[0].string));
}
#line 1739 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 14:
#line 331 "mscgen_language.y"
{
    MscEntityLinkAttrib((yyvsp[-3].entity), (yyvsp[-1].attrib));
}
#line 1747 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 15:
#line 337 "mscgen_language.y"
{
    (yyval.arclist) = MscLinkArc(NULL, (yyvsp[0].arc));      /* Create new list */
}
#line 1755 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 16:
#line 341 "mscgen_language.y"
{
    (yyval.arclist) = MscLinkArc((yyvsp[-2].arclist), (yyvsp[0].arc));     /* Add to existing list */
}
#line 1763 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 17:
#line 345 "mscgen_language.y"
{
    /* Add a special 'parallel' arc */
    (yyval.arclist) = MscLinkArc(MscLinkArc((yyvsp[-2].arclist), MscAllocArc(NULL, NULL, MSC_ARC_PARALLEL, lex_getlinenum())), (yyvsp[0].arc));
}
#line 1772 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 18:
#line 354 "mscgen_language.y"
{
    MscArcLinkAttrib((yyvsp[-3].arc), (yyvsp[-1].attrib));
}
#line 1780 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 20:
#line 360 "mscgen_language.y"
{
    (yyval.arc) = MscAllocArc(NULL, NULL, (yyvsp[0].arctype), lex_getlinenum());
}
#line 1788 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 21:
#line 364 "mscgen_language.y"
{
    (yyval.arc) = MscAllocArc((yyvsp[-2].string), (yyvsp[0].string), (yyvsp[-1].arctype), lex_getlinenum());
}
#line 1796 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 22:
#line 368 "mscgen_language.y"
{
    MscArc arc = MscAllocArc((yyvsp[-2].string), (yyvsp[0].string), (yyvsp[-1].arctype), lex_getlinenum());
    MscArcLinkAttrib(arc, MscAllocAttrib(MSC_ATTR_BI_ARROWS, strdup_s("true")));
    (yyval.arc) = arc;
}
#line 1806 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 23:
#line 374 "mscgen_language.y"
{
    (yyval.arc) = MscAllocArc((yyvsp[-2].string), (yyvsp[0].string), (yyvsp[-1].arctype), lex_getlinenum());
}
#line 1814 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 24:
#line 378 "mscgen_language.y"
{
    MscArc arc = MscAllocArc((yyvsp[-2].string), (yyvsp[0].string), (yyvsp[-1].arctype), lex_getlinenum());
    MscArcLinkAttrib(arc, MscAllocAttrib(MSC_ATTR_NO_ARROWS, strdup_s("true")));
    (yyval.arc) = arc;
}
#line 1824 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 25:
#line 384 "mscgen_language.y"
{
    (yyval.arc) = MscAllocArc((yyvsp[0].string), (yyvsp[-2].string), (yyvsp[-1].arctype), lex_getlinenum());
}
#line 1832 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 26:
#line 388 "mscgen_language.y"
{
    (yyval.arc) = MscAllocArc((yyvsp[-2].string), strdup_s("*"), (yyvsp[-1].arctype), lex_getlinenum());
}
#line 1840 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 27:
#line 392 "mscgen_language.y"
{
    (yyval.arc) = MscAllocArc((yyvsp[0].string), strdup_s("*"), (yyvsp[-1].arctype), lex_getlinenum());
}
#line 1848 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 54:
#line 404 "mscgen_language.y"
{
    (yyval.attrib) = MscLinkAttrib((yyvsp[-2].attrib), (yyvsp[0].attrib));
}
#line 1856 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 55:
#line 409 "mscgen_language.y"
{
    (yyval.attrib) = MscAllocAttrib((yyvsp[-2].attribType), (yyvsp[0].string));
}
#line 1864 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 67:
#line 420 "mscgen_language.y"
{
    (yyval.string) = removeEscapes((yyvsp[0].string));
}
#line 1872 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;

  case 68:
#line 424 "mscgen_language.y"
{
    (yyval.string) = (yyvsp[0].string);
}
#line 1880 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"
    break;


#line 1884 "/Users/Raj/Desktop/Catan-tracker/doxygen-build/generated_src/mscgen_language.cpp"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
      yyerror (YYPARSE_PARAM, YY_("syntax error"));
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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
        yyerror (YYPARSE_PARAM, yymsgp);
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
                      yytoken, &yylval, YYPARSE_PARAM);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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
                  yystos[yystate], yyvsp, YYPARSE_PARAM);
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
  yyerror (YYPARSE_PARAM, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, YYPARSE_PARAM);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, YYPARSE_PARAM);
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
#line 427 "mscgen_language.y"



/* END OF FILE */