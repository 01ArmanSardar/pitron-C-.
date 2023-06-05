#include <bits/stdc++.h>
using namespace std;
class Student
{
    public :
    string name ;
   int  Classs;
   char  section;
   int id;
   int math_marks;
   int eng_marks;
};
bool compare(Student a,Student b)
{
    if (a.math_marks + a.eng_marks == b.math_marks+a.eng_marks)
    {
        a.id >b.id;
    }
    else  a.math_marks + a.eng_marks < b.math_marks+b.eng_marks;
}
int main()
{
    int n;
    cin >> n;
    Student obj[n];
    for (int i=0;i<n;i++)
    {
        cin >> obj[i].name ;
        cin >>obj[i].Classs;
        cin>> obj[i].section;
        cin>> obj[i] .id ;
        cin>>obj[i].math_marks;
        cin>>obj[i]. eng_marks;
    }
sort (obj,obj+n,compare);
    for (int i=0;i<n;i++)
    {
        cout <<obj[i].name << " "<<obj[i].Classs<< " "<<obj[i].section<<"  "<<obj[i].id<<" "<<obj[i].math_marks<< " "<<obj[i]. eng_marks<<endl;
    }
}
