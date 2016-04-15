#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ifstream f1("original.txt");
    ofstream f2("copy.txt");
    char ch,ch1;
    int flag=0,flag1=0,type;
    while(f1)
    {
        f1.get(ch);
        f1.get(ch1);
        if((ch == '\\')&&(ch1 == '\\'))
         {
               flag=1;


         }
        if(flag==1)
            {
                cout<<ch<<ch1;
                f2.put(ch);
                f2.put(ch1);

            }
         if (ch=='\n')
                flag=0;


    }
    f1.close();

    return 0;

}
