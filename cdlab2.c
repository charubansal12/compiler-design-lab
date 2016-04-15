#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/*Lexical analyser to implement acceptance of certain strings */
int main()
{
    //cout << "Hello world!" << endl;
    char s[255];
    scanf("%s",s);
    //int len=strlen(str);
    int i=0;
    int state=0;
    while(s[i]!='\0')
    {
        switch(state)
        {
            case 0:    if(s[i]=='a')
                        {
                            state=1;

                        }
                        else if(s[i]=='b')
                        {
                            state=2;
                        }
                        else
                        {
                            state=6;
                           // break;
                        }
                        break;
            case 1:    if(s[i]=='a')
                        {
                            state=3;

                        }
                        else if(s[i]=='b')
                        {
                            state=4;
                        }
                        else
                        {
                            state=6;
                        //    break;
                        }
                        break;
            case 2:    if(s[i]=='a')
                        {
                            state=6;
                          //  break;
                        }
                        else if(s[i]=='b')
                        {
                            state=2;
                        }
                       else
                        {
                            state=6;
                            //break;
                        }
                        break;
            case 3:    if(s[i]=='a')
                        {
                            state=3;

                        }
                        else if(s[i]=='b')
                        {
                            state=2;
                        }
                        else
                        {
                            state=6;
                         //   break;
                        }
                        break;
            case 4:    if(s[i]=='a')
                        {
                            state=6;

                        }
                        else if(s[i]=='b')
                        {
                            state=5;
                        }
                        else
                        {
                            state=6;
                            //break;
                        }
                        break;
            case 5:    if(s[i]=='a')
                        {
                            state=6;
                            //break;
                        }
                        else if(s[i]=='b')
                        {
                            state=2;
                        }
                        else
                        {
                            state=6;
                       //     break;
                        }
                        break;


        }
        if(state==6)
            break;
        else
        {
            i++;
            printf("Current state is %d\n",state);
        }

    }
    if(state==1)
        printf("String is of type  'a'\n");
    else if(state==4 || state==2)
        printf("String is of the type a*b+\n");
    else if(state==5)
        printf("String is of the type a*b+ or abb \n");
    else if(state==6)
        printf("String is not accepted by lexical analyser\n");
    return 0;
}
