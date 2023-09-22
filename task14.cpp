#include<iostream>
using namespace std;
main(){
cout<<"height of side: ";
float height;
cin>>height;

cout<<"radius of side: ";
float radius;
cin>>radius;

float result;
result=2*3.14*radius*(height+radius);
cout<<"area of cylinder is: "<<result;
}