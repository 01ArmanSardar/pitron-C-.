#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline (cin,s);
    stringstream ss(s);
    string word;
int     flag =0;
    while (ss>>word)
    {
        if  (word == "Ratul")
            flag=1;
    }
    if (flag =1)
    {
        cout << "yes";
    }
    else
    {
        cout<<"no";
    }
}
