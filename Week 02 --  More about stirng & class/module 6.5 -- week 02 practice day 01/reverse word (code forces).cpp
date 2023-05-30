#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline (cin,s );
    stringstream dd;
    dd << s;
    string word;
    dd>>word;
    reverse (word.begin(),word.end());
    cout<< word;
    while (dd>>word)
    {
        reverse (word.begin(),word.end());
cout << " "<< word;
    }
//cout <<s<< endl;
}

