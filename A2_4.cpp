#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a 5 digit number:";
    cin>>a;
    int sum,f,sl;
    a=a/10;
    sl=a%10;
    a=a/1000;
    sum=a+sl;
    cout<<sum;
}