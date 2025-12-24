#include <bits/stdc++.h>
using namespace std;

class student
{
  public:
    string name;
    int roll_no;
    string grade;
};

int main()
{
    student s1;
    s1.name = "sumit";
    s1.grade= "A+";
    cout << s1.name<<endl;
    cout << s1.grade<<endl;

    return 0;
}