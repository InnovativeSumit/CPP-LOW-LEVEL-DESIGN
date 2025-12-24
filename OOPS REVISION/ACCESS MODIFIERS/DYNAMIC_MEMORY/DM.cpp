#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int roll;
    string subject;
};
int main()
{
    student *S = new student;
    (*S).name = "sumit pal";
    (*S).roll = 78;
    (*S).subject = "CST";

    cout << S-> name << endl;
    cout << S-> roll << endl;
    cout << S-> subject << endl;

    return 0;
}