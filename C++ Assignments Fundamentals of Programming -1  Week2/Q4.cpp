#include <iostream>
using namespace std;
int main() {
    float l,b,area,perimeter;
    cout<<"Enter the Length\n";
    cin>>l;
    cout<<"Enter the breadth\n";
    cin>>b;
    area=l*b;
    perimeter=2*l+2*b;
    if(area>perimeter){
        cout<<"Area is greater than perimeter";
    }
    else{
        cout<<"Perimeter is greater than area";
    }
}

