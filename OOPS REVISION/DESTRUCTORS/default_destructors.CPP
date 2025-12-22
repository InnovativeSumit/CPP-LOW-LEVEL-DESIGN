#include<bits/stdc++.h>
using namespace std;

class customer{
    string name;
    int *balance;

public:
 customer(){
    cout<<"Default Constructor Called!"<<endl; 
 }
 // destructor is called 
 ~customer(){
    cout<<" Deafault destructor is called  "<<endl;
    
 }
};

int main(){
    customer s1;
    return 0;
}