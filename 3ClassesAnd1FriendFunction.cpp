//Three classes and a friend function.

#include <iostream>
using namespace std;

//The forward declaration of classes to be used later.
class ccb;
class bbc;

class abc
{
    int x;
public:
    void setdata()
    {
        cout<<"\nEnter x : ";
        cin>>x;
    }
    //Friend function below.
    friend float func(abc , bbc , ccb , int &);
};

class bbc
{
    int y;
public:
    void setdata()
    {
        cout<<"\nEnter y : ";
        cin>>y;
    }
    friend float func(abc , bbc , ccb , int &);
};

class ccb
{
    int z;
public :
    void setdata()
    {
        cout<<"\nEnter z : ";
        cin>>z;
    }
    friend float func(abc , bbc , ccb , int &);
};

//Definition of friend function.
float func( abc v1 , bbc v2 , ccb v3 , int &m)
{
    m = v1.x+v2.y+v3.z;
    return (m/3);
}

int main()
{
    int m;
    abc v1;
    v1.setdata();
    bbc v2;
    v2.setdata();
    ccb v3;
    v3.setdata();
    float avg = func(v1,v2,v3,m);
    cout<<"\nAverage is : "<<avg<<"\n";
    return 0;
}
