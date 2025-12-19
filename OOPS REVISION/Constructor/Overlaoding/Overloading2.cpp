#include <iostream>
using namespace std;

class Area
{
    int a, b, r;

public:
    // default Constructor
    Area()
    {
        cout << "That is default construcrtor" << endl;
    }
    // Constructor overloading
    Area(int r)
    {
        this->r = r;
        cout << "The area of the circle is : " << (3.14 * r * r) << endl;
    }

    // Constructor overloading
    Area(int a, int b)
    {
        this->a = a;
        this->b = b;

        cout << "The area of the rectangle is : " << (a * b) << endl;
    }
};
int main()
{
    Area circle(3);         // implicit call
    Area circle2 = Area(3); // explicit calls
    Area rectangle(3, 5);
    return 0;
}
