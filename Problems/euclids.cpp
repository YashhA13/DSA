#include<iostream>
using namespace std;

int main(){

    cout << "Enter first number: ";
    int a;
    cin >> a;

    cout << "Enter the second number: ";
    int b;
    cin >> b;

    while(a>b && b>a){
        if (a>b) a = a%b;
        else b = b%a;
    }

    if(a==0){
        cout << "GCD is: " << b << endl;
    }
    else{
        cout << "GCD is: " << a << endl;
    }
    return 0;
}