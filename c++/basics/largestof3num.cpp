#include<iostream>
using namespace std;
int main()
{
    int a,b,c,temp;
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    if(a>b && a>>c)
    cout<<a<<endl;
    if(b>a && b>c)
    cout<<b<<endl;
    else cout<<c<<endl;

    cout<<((a>b) ? ((a>c)?a:c) : ((b>c)?b:c))<<endl;
}