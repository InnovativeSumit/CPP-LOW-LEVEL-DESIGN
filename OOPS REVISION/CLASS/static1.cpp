#include <iostream>
using namespace std;

class employee
{
    string name;
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter your id : ";
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The name is : " << name << " &  the id is :  " << id  << endl;
    }
    static void getcount(void){
        cout<<"the value os the count is : "<<count <<endl;
        }
};

int employee ::count;

int main()
{
    employee sumit, sohini, susmita;
    sumit.setdata();
    sumit.getdata();
    employee::getcount();


    sohini.setdata();
    susmita.getdata();
    employee::getcount();


    susmita.setdata();
    sohini.getdata();
    employee::getcount();


    return 0;
}
