#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name ;
    int classs ;
    char sec;
    int id;
};

int main()
{
    int n;
    cin >>n;
    Student a[n];
    for (int i=0;i<n;i++)
    {
   cin>>a[i].name>>a[i].classs>>a[i].sec>>a[i].id;
    }
 int   i=0,j=n-1;
    while (i<j)
    {
        int   tmp =a[i].id;
        a[i].id=a[j].id;
        a[j].id=tmp;
        i++;
        j--;
    }
    for (int i=0; i<n; i++)
    {
           cout<<a[i].name<<" "<<a[i].classs<<" "<<a[i].sec<<" "<<a[i].id<<endl;

    }
}
