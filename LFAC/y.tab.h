/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    STARTCLASS = 259,              /* STARTCLASS  */
    ENDCLASS = 260,                /* ENDCLASS  */
    STARTFCT = 261,                /* STARTFCT  */
    ENDFCT = 262,                  /* ENDFCT  */
    BGIN = 263,                    /* BGIN  */
    END = 264,                     /* END  */
    VARS = 265,                    /* VARS  */
    FCT = 266,                     /* FCT  */
    CLASS = 267,                   /* CLASS  */
    NR = 268,                      /* NR  */
    String = 269,                  /* String  */
    LOOP = 270,                    /* LOOP  */
    TIP = 271,                     /* TIP  */
    ARRAYTYPE = 272,               /* ARRAYTYPE  */
    STARTSTR = 273,                /* STARTSTR  */
    ENDSTR = 274,                  /* ENDSTR  */
    CHARTYPE = 275,                /* CHARTYPE  */
    RET = 276,                     /* RET  */
    ASSIGN = 277,                  /* ASSIGN  */
    PLUS = 278,                    /* PLUS  */
    OR = 279,                      /* OR  */
    AND = 280,                     /* AND  */
    MULTIPLY = 281,                /* MULTIPLY  */
    DIVIDE = 282,                  /* DIVIDE  */
    MODULO = 283,                  /* MODULO  */
    MINUS = 284,                   /* MINUS  */
    CONCAT = 285,                  /* CONCAT  */
    LENGTH = 286,                  /* LENGTH  */
    DECL = 287,                    /* DECL  */
    FUNC = 288,                    /* FUNC  */
    CTRL = 289,                    /* CTRL  */
    LOOPF = 290,                   /* LOOPF  */
    LOOPW = 291,                   /* LOOPW  */
    OPR = 292                      /* OPR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define STARTCLASS 259
#define ENDCLASS 260
#define STARTFCT 261
#define ENDFCT 262
#define BGIN 263
#define END 264
#define VARS 265
#define FCT 266
#define CLASS 267
#define NR 268
#define String 269
#define LOOP 270
#define TIP 271
#define ARRAYTYPE 272
#define STARTSTR 273
#define ENDSTR 274
#define CHARTYPE 275
#define RET 276
#define ASSIGN 277
#define PLUS 278
#define OR 279
#define AND 280
#define MULTIPLY 281
#define DIVIDE 282
#define MODULO 283
#define MINUS 284
#define CONCAT 285
#define LENGTH 286
#define DECL 287
#define FUNC 288
#define CTRL 289
#define LOOPF 290
#define LOOPW 291
#define OPR 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "tema.y"

int intval;
char* strval;

#line 146 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
