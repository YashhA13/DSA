#include<iostream>
using namespace std;

void fnc(int i , int sum){
    
    if(i<1){
        cout << sum;
        return;
    }
    fnc(i-1,sum+i);
}


int main(){

    int n;
    cout << "Enter a number for summation: ";
    cin >> n;
    fnc(n,0);

    return 0;
}