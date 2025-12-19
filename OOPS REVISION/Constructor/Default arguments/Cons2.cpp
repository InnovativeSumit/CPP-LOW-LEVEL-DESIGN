#include <iostream>
using namespace std;

class number
{
protected:
    int a;
    int b;
    const int c ;

public:
    // number(int a=10, int b=9, const int c)
    // {
    //     this->a = a;
    //     this->b = b;
    // this->c = c; // ❌ ILLEGAL
    // }
public:
    number(int a = 10, int b = 9, int c = 100) : a(a), b(b), c(c) {}
    void printdata();
};


void number::printdata()
{
    cout << "The value of number1 is : " << a << " and number2 is :" << b << " and number3 is : " << c << endl;
}
int main()
{
    number a1;
    a1.printdata();

    number a2(5);
    a2.printdata();

    number a3(5, 6,10);
    a3.printdata();

    return 0;
}
