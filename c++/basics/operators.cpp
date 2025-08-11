#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<< "lets try Airthmetic operations on two numbers, please enter two numbers";
    cin>>a>>b;
    cout<<"add of two  num: "<<a+b<<endl;
    cout<<"sub of two num: "<<a-b<<endl;
    cout<<"mul of two num: "<<a*b<<endl;
    cout<<"divide of two num: "<<a/b<<endl;
    cout<<"divide of two num in float: "<<static_cast<float>(a)/b<<endl;
    cout<<"mod of two num: "<<a%b<<endl;

    cout<<"max of two num : "<<((a>b)?a:b)<<endl;
}