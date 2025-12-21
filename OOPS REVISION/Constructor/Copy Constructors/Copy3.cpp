// Default copy constructors

#include <iostream>
using namespace std;

class Bank
{
    string name;
    int balance;

public:
    Bank(string name, int balance)
    {
        this->name = name;
        this->balance = balance;
    }

    // // Parametarized copy constructors

    // Bank(Bank &obj)
    // {
    //     name = obj.name;
    //     balance = obj.balance;
    //     cout << "Copy contructors called" << endl;
    //     cout << "The bank name is: " << name << " the balance is: " << balance << endl;
    // }

    void show(void);
};

void Bank::show()
{
    cout << "The bank name is: " << name << " the balance is: " << balance << endl;
}

int main()
{
    Bank b1("kanada", 789632145);
    b1.show();

    Bank b2("Baroda", 200000);
    b2.show();

    Bank b3(b1);
    b3.show();

    Bank b4 = b2;
    b4.show();

    return 0;
}
