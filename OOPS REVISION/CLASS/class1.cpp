#include <bits/stdc++.h>
using namespace std;

class Practice {
// private: 
    int a, b, c; // if we not mention the access modifier then automatically it is private

public:
    int d, e;

    // Only declaration here
    void setdata(int a1, int b1, int c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }

    void getdata()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;

    }
};

// void Practice::setdata(int a1, int b1, int c1) { // :: is used to define the function outside the class
//     a = a1;
//     b = b1;
//     c = c1;
// }

int main() {
    Practice sum1;
    sum1.d = 45;
    sum1.e = 78;
    sum1.setdata(65, 98, 98);
    sum1.getdata();

    return 0;
}
