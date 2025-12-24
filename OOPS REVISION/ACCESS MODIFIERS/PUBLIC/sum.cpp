#include<bits/stdc++.h>
using namespace std;

class number
{
public:
int num;
int getnum(int x){
    num=x;
    if(x==0){
           cout<<"You cannot enter this type of number"<<endl;
    }
    return num;
}

};

class summation {
public:
int sum;

int sum1(int m , int n){
    int number1  = m;
    int number2  = n;
    int sumTotal  = number1 + number2;
     return sumTotal;
}

};



int main(){
number num1;
cout<<"The 1st Complex No is : " << num1.getnum(65)<<" i" << endl;
number num2;
cout<<"The 2nd Complex No is : " << num2.getnum(5)<<" i" << endl;
summation sum;
cout<<"The sum of the complex no is :"<<sum.sum1(num1.num,num2.num)<<" i"<<endl;
return 0;
}
