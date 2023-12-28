#include<iostream>
using namespace std;
int main()
{
    int a;
    int sum=0;
    cout<<"Enter a 3 digit number";
    cin>>a;
    for (int i=1;i<4;i++){
        sum=sum+a%10;
        a/=10;
    }
    cout<<sum;
    return 0;
}