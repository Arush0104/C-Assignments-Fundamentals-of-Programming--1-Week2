#include <iostream>
using namespace std;
int main() {
    int x;
    int y;
    cout<<"Enter first number\n";
    cin>>x;
    cout<<"Enter second number\n";
    cin>>y;
    if(x<y){
        cout<<"The greatest number is "<<y;
    }
    if(x>y){
        cout<<"The greatest number is "<<x;
    }
    return 0;
}
