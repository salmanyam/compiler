
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VAR = 258,
     INTEGER = 259,
     BEGIN1 = 260,
     END = 261,
     ASSIGNOP = 262,
     ADDOP = 263,
     MULOP = 264,
     LPAREN = 265,
     RPAREN = 266,
     COMMA = 267,
     COLON = 268,
     SEMICOLON = 269,
     GREATER = 270,
     LESS = 271,
     IF = 272,
     THEN = 273,
     EQUAL = 274,
     ID = 275,
     NUMBER = 276
   };
#endif
/* Tokens.  */
#define VAR 258
#define INTEGER 259
#define BEGIN1 260
#define END 261
#define ASSIGNOP 262
#define ADDOP 263
#define MULOP 264
#define LPAREN 265
#define RPAREN 266
#define COMMA 267
#define COLON 268
#define SEMICOLON 269
#define GREATER 270
#define LESS 271
#define IF 272
#define THEN 273
#define EQUAL 274
#define ID 275
#define NUMBER 276




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 23 "fk.y"
 
struct symbolInfo
{
char key[20];
char type[10];
char code[500];

}syminfo;



/* Line 1676 of yacc.c  */
#line 106 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


