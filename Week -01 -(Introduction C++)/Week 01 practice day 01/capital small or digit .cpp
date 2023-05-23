#include<iostream>
using namespace std ;
int main ()
{
    char a;
    cin>>a;

   if (a>47 && a<58)
    {
        cout << "IS DIGIT";
    }
    else if (a>96 && a<123)
    {
    cout <<"ALPHA"<<endl<<"IS SMALL";
    }
    else if (a >64 && a<91)
    {
            cout <<"ALPHA"<<endl<<"IS CAPITAL";
    }

}
