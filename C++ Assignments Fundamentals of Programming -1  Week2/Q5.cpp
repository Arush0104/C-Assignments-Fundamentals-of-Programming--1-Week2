#include <iostream>
using namespace std;

int main()
{

    float side1, side2, side3;
    cout << "Enter the first side";
    cin >> side1;
    cout << "Enter the second side";
    cin >> side2;
    cout << "Enter the third side";
    cin >> side3;

    if (side3 == side2 == side1)
    {
        cout << "Its a equilateral triangle";
    }
    if (side1 == side2 && side1 != side3 || side2 == side3 && side2 != side1)
    {
        cout << "Its a isosceles triangle";
    }
    if (side1 != side2 != side3)
    {
        cout << "Its a scalene triangle";
    }
}
