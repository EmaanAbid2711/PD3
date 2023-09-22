#include<iostream>
using namespace std;
main(){
cout<<"Enter the Name of the Person: ";
string name;
cin>>name;

cout<<"Enter the target weight loss in kilograms: ";
float weight;
cin>>weight;

float result;
result=weight*15;
cout<<name<<" will need "<<result<<" days to lose "<<weight<<" kg of weight by following the doctor's suggestions";
}