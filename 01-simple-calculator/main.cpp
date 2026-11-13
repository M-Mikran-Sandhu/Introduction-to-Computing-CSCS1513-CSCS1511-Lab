#include<iostream>
using namespace std;

int main(){
    double  a, b;
    char sign;

    cout<<"Enter First Number:";
    cin>>a;

    secondnumber:

    cout<<"Enter Second Number:";
    cin>>b;
    
    signagain:

    cout<<"Enter Operator (+, -, *, /):";
    cin>>sign;

    switch(sign){
        case '+':
            cout<<a<<"+"<<b<<"="<<a+b;
            break;
        case '-':
            cout<<a<<"-"<<b<<"="<<a-b;
            break;
        case '*':
            cout<<a<<"*"<<b<<"="<<a*b;
            break;
        case '/':   
            if(b==0){
                cout<<"Division by zero is not allowed."<<endl;
                goto secondnumber;
            }
            cout<<a<<"/"<<b<<"="<<a/b;
            break;

        default:
            cout<<"Invalid Operator"<<endl;
            goto signagain;
    }
}