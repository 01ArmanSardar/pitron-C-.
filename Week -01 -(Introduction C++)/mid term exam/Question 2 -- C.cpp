#include <bits/stdc++.h>
using namespace std;
class Person
{
    public :
    char name[150];
    float height ;
    int age ;
    //constructor
    Person(int a,float h,char*n)
    {
    age=a;
    height=h;
    strcpy (name,n);
    }
};
int main()
{
    char name [150]="barkat Ullah";
    Person* barkat=new Person(45,4.5,name);
    cout << barkat ->age<<endl;
    cout << barkat->height<<endl;
    cout<<barkat->name<<endl;
}
