#include<iostream>
using namespace std;
int main()
{
    int a=1,b=2,temp;
    temp=b;
    b=a;
    a=temp;
    cout<<"after swapping " << "a = " <<a<<" b = "<<b<<endl;
}