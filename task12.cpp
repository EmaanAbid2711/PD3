#include<iostream>
using namespace std;
main(){
cout<<"Number of square meters you can paint: ";
int meter;
cin>>meter;

cout<<"Width of the single wall (in meters): ";
int sw;
cin>>sw;

cout<<"Height of the single wall (in meters): ";
int sl;
cin>>sl;

int area;
area=sw*sl;
int result;
result=meter/area;
cout<<"Number of walls you can paint: "<<result;
}