#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        cout << "Enter the id of the employee : " << endl;
        cin >> id;
        cout << "Enter the salary  of the employee : " << endl;
        cin >> salary;
    }
    void getid(void)
    {
        cout << "The id of thi semployee is: " << id << endl;
        cout << "The id of thi salary is: " << salary << endl;
    }
};

int main()
{
    // employee sumit, sohini, susmita, mritthi;
    // sumit.setid();
    // sumit.getid();

    employee em[3];
    for(int i =0; i< 3; i++){
        em[i].setid();
        em[i].getid();
    }


    return 0;
}
