#include <iostream>
using namespace std;

class number
{
private:
    int a;
    int b;
    int c;

public:
    number(int a=10, int b=9, const int c=100)
    {
        this->a = a;
        this->b = b;
        this->c = c;

        
    }
    void printdata();
};

void number::printdata()
{
    cout << "The value of number1 is : " << a << " and number2 is :" << b<< " and number3 is : " << c  << endl;
}
int main()
{
    number a1;
    a1.printdata();

    number a2(5);
    a2.printdata();

    number a3(5,6);
    a3.printdata();

    number a4(5,6,9);
    a4.printdata();




    return 0;
}
