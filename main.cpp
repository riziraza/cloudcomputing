// This file will be used for Assignment-3
// Test file
#include<iostream>
using namespace std;
int main()
{
    int num1, num2, res;
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;
    res = num1+num2;
    cout<<endl<<"Addition Result = "<<res<<endl;
    cout<<endl<<"Addition Result from function = "<<add(num1, num2)<<endl;
    res = num1-num2;
    cout<<endl<<"Subtraction Result = "<<res<<endl;
    res = num1*num2;
    cout<<endl<<"Multiplication Result = "<<res<<endl;
    res = num1/num2;
    cout<<endl<<"Division Result = "<<res<<endl;
    return 0;
}
int add(int num1, int num2)
{
    //addition function
    int result = num1+num2;
    return result;
}