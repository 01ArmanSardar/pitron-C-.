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
   // char name [150]="barkat Ullah";
  //  char name [150]="iqbL HOSEN";
    Person* barkat=new Person(45,4.5,"barkat ullah");
    Person* iqbal=new Person(90,5.8,"iqbal hossain");
    cout<<barkat->name<<endl;
    cout << barkat ->age<<endl;
    cout << barkat->height<<endl;

cout<<barkat->name<<endl;
    cout << iqbal ->age<<endl;
    cout << iqbal->height<<endl<<endl;

    if (barkat->age > iqbal->age)
    {
      cout << "barkat";
    }
    else
    {
        cout << "iqbal";
    }

}

