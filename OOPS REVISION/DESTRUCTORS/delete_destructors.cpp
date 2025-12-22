#include<bits/stdc++.h>
using namespace std;

class customer{
    string name;
    int *balance;

public:

customer (){
    name = "34";
    cout<<"Default constructor is called Name: " << name <<endl;

}

 customer(string name){
    this->name = name ;
    cout<<"Default constructor is called Name: " << name <<endl;
 }

 // destructor is called 
 ~customer(){
    cout <<"Default destructor is called Name: " << name << endl;
 }
};

int main(){
    customer s1("Sumit"),s2("Harry"),s3("susmita"),s4("sohini");
    customer *s5 = new customer;
    delete s5;

}