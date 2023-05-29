#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline (cin,s );
    stringstream dd;
    dd << s;
    string word;
    while (dd>>word)
    {
        cout << word << endl;
    }
}
