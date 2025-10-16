#include<iostream>
using namespace std;

bool isPalindrome(int n) {
        int original_n = n;
        int Rev_num = 0;
        while(n>0){
            int New_num = n%10;
            Rev_num = (Rev_num*10) + New_num;
            n = n/10;
        }
        if(Rev_num == original_n){
            return true;
        }
        else{
            return false;
        }
    }


int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool func_palindrome = isPalindrome(n);

    if(func_palindrome == true){
        cout << "The number " << n << " is a palindrome number";
    }
    else{
        cout << "The number " << n << " is not a palindrome number";
    }

    return 0;
}