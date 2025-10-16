#include<iostream>
using namespace std;

int reverseNumber(int n){
    int rev_num = 0;
    while(n>0){
        int new_num = n%10;
        rev_num = (rev_num*10) + new_num;
        n = n/10;
    }
    return rev_num;
}
int main(){

    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << "The reversed number is: " << reverseNumber(n);

    return 0;
}