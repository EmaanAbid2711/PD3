#include<iostream>
using namespace std;
main(){
cout<<"Enter a 4-digit number: ";
int digit;
cin>>digit;

int num4;
num4=digit%10;
int num3;
num3=(digit/10)%10;
int num2;
num2=(digit/100)%10;
int num1;
num1=(digit/1000)%10;

int result;
result=num1+num2+num3+num4;
cout<<"Sum of the individual digits: "<<result;
}