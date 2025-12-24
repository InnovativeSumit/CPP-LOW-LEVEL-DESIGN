#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int roll_no;
    string grade;

    void setname(string s)
    {
        name = s; 
    }

    void set_roll_no(int x)
    {
        roll_no=x;
    }

    void getname()
    {
        cout << name << endl; 
    }
       
    int get_roll_no()
    {
        return roll_no;
    }
   
};

int main()
{
    student s1;
    s1.setname("sumit"); 
    s1.getname(); 
    
    s1.set_roll_no(8); 
    cout<<s1.get_roll_no()<<endl; 
    
    student s2;
    s2.setname("susmita"); 
    s2.getname(); 
    
    s2.set_roll_no(9); 
    cout<<s2.get_roll_no() <<endl; 

    return 0;
}
