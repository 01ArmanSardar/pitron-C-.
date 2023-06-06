#include <bits/stdc++.h>
using namespace std ;
int main()
{
    string s,x;
    cin >>s>>x;
    while (s.find(x)!=-1)
    {
        s.replace (s.find (x),s.length(),"$");

    }
    cout <<s<<endl;
}
//2
//thatsagoodmomentforgoodrelations good
//canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you
