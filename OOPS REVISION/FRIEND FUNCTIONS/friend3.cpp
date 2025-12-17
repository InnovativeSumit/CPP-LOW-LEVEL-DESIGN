#include <iostream>
using namespace std;

class Y;

class X{
    int num1;
    public:
        void setValue(int value){
            num1 = value;
        }
    friend void add(X, Y);    
};

class Y{
    int num2;
    public:
        void setValue(int value){
            num2 = value;
        }
    friend void add(X, Y);    

};

void add(X o1, Y o2){
    cout<<"Summing data of X and Y objects gives me "<< o1.num1 + o2.num2;
}


int main(){
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(15);

    add(a1, b1);
    return 0;
}



