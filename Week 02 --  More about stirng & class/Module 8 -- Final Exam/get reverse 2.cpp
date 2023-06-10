#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name ;
    int classs ;
    char se ;
    int id;
};
/*bool compare (Student x,Student y)
{
    if (x.id<y.id) return true ;
    else return false ;
}*/
int main()
{
    int n,trmp,j,i;
    Student a[n];
    for (int i=0; i<n; i++)
    {
        cin >>a[i].name;
        cin>>a[i].classs;
        cin>>a[i].se;
        cin>>a[i].id;
    }
//  reverse (begin (a[i].id),end (a.[i].id))
    // sort (a,a+3,compare);
    for (int i=0; i<n; i++)

    {
        swap(a[i],a[j])     ;
    }
    cout << a[i];
}
