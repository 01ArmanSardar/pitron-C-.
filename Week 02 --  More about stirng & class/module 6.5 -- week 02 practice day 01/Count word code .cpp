#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
  //std :: string s;
    getline (cin,s );
    cin.ignore();
    stringstream dd;
    dd << s;
    string word;
    int cnt=0;
    while (dd>>word)

    {
        if (s='!')
        cnt++;
        else if (s='.')
            cnt++;
        else if (s=',')
            cnt++;
        else if (s='?')
            cnt++;

    }
    cout << cnt << endl;
}

