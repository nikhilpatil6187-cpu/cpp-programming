#include <iostream>
using namespace std;

class Rectangle
{
    float length, breadth;

public:
    // Default Constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // Parameterized Constructor
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    // Copy Constructor
    Rectangle(const Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

int main()
{
    // Default constructor
    Rectangle r1;
    cout << "Default Constructor:" << endl;
    r1.display();

    // Parameterized constructor
    Rectangle r2(15, 10);
    cout << "\nParameterized Constructor:" << endl;
    r2.display();

    // Copy constructor
    Rectangle r3(r2);
    cout << "\nCopy Constructor:" << endl;
    r3.display();

    return 0;
}