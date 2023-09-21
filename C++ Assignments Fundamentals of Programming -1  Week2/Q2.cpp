#include <iostream>
using namespace std;
int main() {
    float pi,circumference,radius,area;
    pi=3.1414;
    cout<<"Enter the radius";
    cin>>radius;
    circumference = 2*pi*radius;
    area=pi*radius*radius;
    if(circumference>area){
        cout<<"Circumference is greater than area";
    }
    if(circumference<area){
        cout<<"Area is greater than circumference";
    }

}
