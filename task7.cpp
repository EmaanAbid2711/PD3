#include<iostream>
using namespace std;
main(){
cout<<"Enter the movie name: ";
string name;
cin>>name;

cout<<"Enter the adult ticket price: $";
float adult;
cin>>adult;

cout<<"Enter the child ticket price: $";
float child;
cin>>child;

cout<<"Enter the number of adult tickets sold: ";
float At;
cin>>At;

cout<<"Enter the number of child tickets sold: ";
float Ct;
cin>>Ct;

cout<<"Enter the percentage of the amount to be donated to charity: ";
float per;
cin>>per;
cout<<endl;
cout<<"Movie: "<<name<<endl;

float totalAmount;
totalAmount=(adult*At)+(child*Ct);
cout<<"Total amount generated from ticket sales: $"<<totalAmount<<endl;

float donation;
donation=totalAmount*0.1;
cout<<"Donation to charity ("<<per<<"%): $"<<donation<<endl;

float result;
result=totalAmount-donation;
cout<<"Remaining amount after donation: $"<<result;
}