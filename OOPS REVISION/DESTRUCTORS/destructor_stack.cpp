#include<bits/stdc++.h>
using namespace std;

class customer{
    string name;
    int *balance;

public:
 customer(string name){
    this->name = name ;
    cout<<"Deafault constructor is called Name: " << name <<endl;
 }
 // destructor is called 
 ~customer(){
    cout <<"Deafault destructor is called Name: " << name << endl;
 }
};

int main(){
    customer s1("Sumit"),s2("Harry"),s3("susmita"),s4("sohini");
    return 0;
}