#include <iostream>
using namespace std;

class Area
{
    int r;

public:
    // default Constructor
    Area()
    {
        cout << "That is default construcrtor" << endl;
    }
    // Parametarized Constructor

    Area(int r)
    {
        this->r = r;
        cout << "That is Parametarized construcrtor" << endl;

        cout << "The area of the circle is : " << (3.14 * r * r) << endl;
    }
    
    
};
int main()
{
    Area A1();
    Area circle1(4);         // implicit call
    Area circle2 = Area(3); // explicit calls
    return 0;
}
