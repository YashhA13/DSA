#include<iostream>
using namespace std;
// This is not a correct code because only works for 3 digit number need to correct
// by using math library
bool isArmstrong(int n){
    int add_str = 0;
    int dup = n;
    while(n>0){
        int new_digit = n % 10;
        n = n/10;
        add_str = add_str + new_digit*new_digit*new_digit;
    }
    if(add_str == dup){
        return true;
    }
    else{
        return false;
    }
}


int main(){

    int n;
    cout << "Enter the number: ";
    cin >> n;
    bool result = isArmstrong(n);

    if(result == true){
        cout << "The number " << n << " is an Armstrong number";
    }
    else {
        cout << "The number " << n << " is not an Armstrong number ";
    }

 
    return 0;
}