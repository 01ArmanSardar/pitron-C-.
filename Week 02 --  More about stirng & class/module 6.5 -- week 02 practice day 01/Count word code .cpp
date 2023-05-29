#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline (cin,s );
    stringstream dd;
    dd << s;
    string word;
    int cnt=0;
    while (dd>>word)
    {
        cnt++;
    }
    cout << cnt << endl;
}

