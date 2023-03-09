/*LALR PARSER 
E->E+T 
E->T 
T->T*F 
T->F 
F->(E) 
F->i
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void push(char *,int *,char);
char stacktop(char *);
void isproduct(char,char);
int ister(char);
int isnter(char);
int isstate(char);
void error();
void isreduce(char,char);
char pop(char *,int *);
void printt(char *,int *,char [],int);
void rep(char [],int);

struct action
{
    char row[6][5];
};

const struct action A[12]={
    {"sf","emp","emp","se","emp","emp"},
    {"emp","sg","emp","emp","emp","acc"},
    {"emp","rc","sh","emp","rc","rc"},
    {"emp","re","re","emp","re","re"},
    {"sf","emp","emp","se","emp","emp"},
    {"emp","rg","rg","emp","rg","rg"},
    {"sf","emp","emp","se","emp","emp"},
    {"sf","emp","emp","se","emp","emp"},
    {"emp","sg","emp","emp","sl","emp"},
    {"emp","rb","sh","emp","rb","rb"},
    {"emp","rb","rd","emp","rd","rd"},
    {"emp","rf","rf","emp","rf","rf"}
};

struct gotol
{
    char r[3][4];
};
