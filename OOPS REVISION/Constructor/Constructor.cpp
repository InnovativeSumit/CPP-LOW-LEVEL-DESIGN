#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created
    Complex(void);          // Constructor declaration
    void printNumber(void); // Functions declaration
};
Complex ::Complex(void) // ----> This is a default constructor as it takes no parameters
{
    a = 10;
    b = 2;
    // cout<<"Hello world";
}
void Complex ::printNumber()
{
    cout << "Your number is " << a << " + " << b << "i" << endl;
}

int main()
{
    Complex a1;      
    a1.printNumber();
    return 0;
}
