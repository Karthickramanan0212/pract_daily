#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int age;
    cout<<"please enter your name: ";
    cin>>name;
    cout<<"please enter your age: ";
    cin>>age;
    cout<<"your name : " << name << endl << "your age: " << age << endl;

    string choice;
    cout << "need to continue further ? if yes please type yes  : ";
    cin>>choice;
    if(choice=="yes")
    {
        float a,b,c,result;
        int d,result1;
        cout << "please enter 3 float values";
        cin>>a>>b>>c;
        cout<<"please enter one int value";
        cin>>d;
        result= a+b+c+d;
        result1= a+b+c+d;
        cout<<" sum of all given numbers in float: "<< result << endl << "sum of all numbers in int" << result1 << endl;

    }

    cout << "need to continue on area of circle ? if yes please enter yes : ";
    cin>>choice;
    if(choice == "yes")
    {
        float pi = 3.14159,r;
        cout<< " enter radius of circle";
        cin>>r;
        cout<<"area of circle is : "<< pi*r*r<< endl;
        
    }
}