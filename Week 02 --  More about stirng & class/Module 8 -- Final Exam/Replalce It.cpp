#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    string ar[t];
  //  string x,s;
    for (int i=0;i<t;i++)
    {
        cin>>ar[i];

    }
    string s,x;
    cin >>s>>x;
    while (s.find(x) != -1)
    {
        s.replace (s.find(x),x.length(),"$");
    }
    cout <<s<<endl;
}
