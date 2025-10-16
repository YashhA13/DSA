#include<iostream>
using namespace std;

void fnc(int i ,int n){
    if(n<i){
        return;
    }
    cout << n << " ";
    fnc(i,n-1);
}


int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;
    fnc(1,n);

    return 0;
}