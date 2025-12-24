#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    string name;
    int roll_no;
    string grade;

public:
    void setname(string s)
    {
        name = s;
        if (s.size() == 0)
        {
            cout << "invalid name ";
            return;
        }
    }

    void set_roll_no(int x)
    {
         roll_no = x;
        if (x < 0 || x> 100)
        {
            cout << "invalid roll : ";
            return;
        }
    }

    void getname()
    {
        cout << name << endl;
    }

    int get_roll_no()
    {
        return roll_no;
    }

    string getgrade(int pin){
        if(pin == 435){
            cout<<"Grade : A+ "<<endl;
        }
        return "Wrong pin ";
    }
};

int main()
{
    student s1;
    s1.setname("");
    s1.getname();

    s1.set_roll_no(8);
    cout << s1.get_roll_no() << endl;

    student s2;
    s2.setname("susmita");
    s2.getname();

    s2.set_roll_no(12);
    cout << s2.get_roll_no() << endl;// for handling the garbage value we use the constuctors

    // s1.getgrade(342);
    cout<<s1.getgrade(342)<<endl;


    return 0;
}
