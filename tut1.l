%{
int charcount=0,linecount=0;
%}

%%
.	charcount++;
\n 	{linecount++;charcount++;}

%%

int yywrap()
{
	return 1;
}
