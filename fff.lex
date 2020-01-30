%{
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
#include "y.tab.h"
%}
ws [ \t]+
digit [0-9]
number [-]?{digit}+
letter [A-Za-z]
id  {letter}({letter}|{digit})*

%%
{number} {strcpy(yylval.syminfo.key,yytext);return NUMBER;}
"\n" {}
{ws} {}
"var" {return VAR;}
"integer" {return INTEGER;}
"begin" {return BEGIN1;}
"end" {return END;}
"if"  {return IF;}
"then" {return THEN;}
{id} {strcpy(yylval.syminfo.key,yytext);return ID;}
"+" {return ADDOP;}

"*" {return MULOP;}

":=" {return ASSIGNOP;}
":" {return COLON;}
";" {return SEMICOLON;}
"(" {return LPAREN;}
")" {return RPAREN;}
"," {return COMMA;}
">" {return GREATER;}
"<" {return LESS;}
"=" {return EQUAL;}
%%
