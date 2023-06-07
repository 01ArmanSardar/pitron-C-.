#include <bits/stdc++.h>
using namespace std ;
int main()
{
    string good,you;
    string s,x;
    cin >>s>>x;
    while (s.find(good)!=-1)
    {
        s.replace (s.find (good),s.length(),"$");

    }
    cout <<s<<endl;

    while (x.find(you)!=-1)
    {
        s.replace (x.find (you),x.length(),"$");

    }
    cout <<x<<endl;
}

//2
//thatsagoodmomentforgoodrelations good
//canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you
