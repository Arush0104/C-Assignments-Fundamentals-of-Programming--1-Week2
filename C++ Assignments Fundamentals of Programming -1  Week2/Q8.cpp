#include <iostream>

using namespace std;

int
main ()
{
  float x1, x2, x3, y1, y2, y3, grad,grad1,grad2;
  cout << "Enter the first coordinates\n";
  cin >> x1 >> y1;
  cout << "Enter the second coordinates\n";
  cin >> x2 >> y2;
  cout << "Enter the third coordinates\n";
  cin >> x3 >> y3;

  grad = (y2 - y1) / (x2 - x1);
  grad1 = (y3 - y2) / (x3 - x2);
  grad2 = (y3 - y2) / (x3 -x2);
  if(grad == grad1 == grad2){
      cout<<"These coordinates are found on the same line";
  }
  if(grad!=grad1 || grad!=grad2 || grad1!=grad || grad1!=grad2 || grad2!=grad1 || grad2!=grad){
      cout<<"These coordinates are not found on the same line";
  }

}
