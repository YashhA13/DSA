// Given the number "n", find out and return the number of digits present in a number
// SAMPLE INPUT 1:
// 156
// SAMPLE OUTPUT 1:
// 3
// SAMPLE INPUT 2:
// 7
// SAMPLE OUTPUT 2:
// 1

#include<iostream>
using namespace std;

int count(int n){
        int cnt = 0;
        while(n>0){
            int Last_Digit = n%10;
            cnt = cnt + 1;
            n = n/10;
        }
        return cnt;
    }
int main(){

    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << "Number of digits present:"<<count(n) << endl;

    // METHOD 2:-

    int New_Num;
    cout << "Enter another number:";
    cin >> New_Num;

    int NumberOf_Digit = (int)(log10(New_Num)+1);
    cout << "Number of digits present:"<<NumberOf_Digit;

    return 0;
}