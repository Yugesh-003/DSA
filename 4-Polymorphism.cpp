#include <iostream>
using namespace std;

class area_calculation
{
public:
    float result;

    // Function for square
    void area(int side);

    // Function for rectangle
    void area(float length, float breadth);

    // Function for circle
    void area(float radius);
};

// Calculate area of square
void area_calculation::area(int side)
{
    result = side * side;
    cout << "Area of square = " << result << endl;
}

// Calculate area of rectangle
void area_calculation::area(float length, float breadth)
{
    result = length * breadth;
    cout << "Area of rectangle = " << result << endl;
}

// Calculate area of circle
void area_calculation::area(float radius)
{
    result = 3.14 * radius * radius;
    cout << "Area of circle = " << result << endl;
}

int main()
{
    area_calculation ac;

    int side;
    float length, breadth, radius;

    cout << "\nArea of square" << endl;
    cout << "Enter the value for side: ";
    cin >> side;
    ac.area(side);

    cout << "\nArea of rectangle" << endl;
    cout << "Enter the value for length and breadth: ";
    cin >> length >> breadth;
    ac.area(length, breadth);

    cout << "\nArea of circle" << endl;
    cout << "Enter the value for radius: ";
    cin >> radius;
    ac.area(radius);

    return 0;
}