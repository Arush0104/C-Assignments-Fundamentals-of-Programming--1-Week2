#include <iostream>

using namespace std;

int
main ()
{
  float x, y;
  cout << "Enter the Coordinates\n";
  cin>>x>>y;
  if(x==0 && y==0){
      cout<<"Origin";
  }
  if(x!=0 && y==0){
      cout<<"X-AXIS";
  }
  if(x==0 && y!=0){
      cout<<"Y-AXIS";
  }
  if(x!=0 && y!=0){
      cout<<"Neither of the three";
  }
}

