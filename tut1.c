#include<stdio.h>

extern int yylex();
extern int charcount;
extern int linecount;
int main()
{
	yylex();
	printf("There were %d characters in %d lines\n",charcount,linecount);
	return 0;
}
