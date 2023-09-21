#include <iostream>
  using namespace std;

 
int main () 
{
 float mark1,mark2,mark3;
 
 cout<<"Enter the first mark";
 cin>>mark1;
 cout<<"Enter the second mark";
 cin>>mark2;
 cout<<"Enter the third mark";
 cin>>mark3;
 
 if(mark1>=mark2 && mark1>=mark3){
     cout<<"Greatest number is: "<<mark1;
 }
 else if(mark2>=mark1 && mark2>=mark3){
     cout<<"Greatest number is: "<<mark2;
 }
  else{
     cout<<"Greatest number is: "<<mark3;
 }
} 
