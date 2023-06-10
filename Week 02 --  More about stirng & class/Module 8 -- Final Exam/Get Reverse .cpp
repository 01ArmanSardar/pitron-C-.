#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name ;
    int classs ;
    char sec;
    int math_marks ;
    int eng_marks;
};

int main()
{
    int n;
    cin >>n;
    Student a[n];
    for (int i=0;i<n;i++)
    {
   cin>>a[i].name>>a[i].classs>>a[i].sec>>a[i].math_marks>>a[i].eng_marks;
    }
 int   i=0,j=n-1;
    while (i<j)
    {
        Student  tmp =a[i];
        a[i]=a[j];
        a[j]=tmp;
        i++;
        j--;
    }
    for (int i=0; i<n; i++)
    {
           cout<<a[i].name<<" "<<a[i].classs<<" "<<a[i].sec<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;

    }
}
