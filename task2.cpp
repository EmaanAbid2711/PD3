#include<iostream>
using namespace std;
main(){
cout<<"Number of Minutes: ";
int min;
cin>>min;

cout<<"Frames per Second: ";
int sec;
cin>>sec;

int result;
result=min*60*sec;
cout<<"Total Number of Frames: "<<result;
}