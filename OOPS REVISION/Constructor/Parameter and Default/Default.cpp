#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
public:
    // default Constructor
    Student() {
        name = "Sumit";
        age = 45;
        cout << "That is default construcrtor"<<endl;
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Student s1;
    return 0;
    
}





