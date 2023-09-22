#include<iostream>
using namespace std;
main(){
cout<<"Enter vegetable price per kilogram (in coins): ";
float veg;
cin>>veg;

cout<<"Enter fruit price per kilogram (in coins): ";
float fruit;
cin>>fruit;

cout<<"Enter total kilograms of vegetables: ";
int Tveg;
cin>>Tveg;

cout<<"Enter total kilograms of fruits: ";
int Tfruit;
cin>>Tfruit;

float result;
result=(Tveg*veg)+(Tfruit*fruit);
float result2;
result2=result/1.94;
cout<<"Total earnings in Rupees (Rps): "<<result2;
}