#include<iostream>
using namespace std;

void fnc(int n,int fact){

    if(n<1){
        cout << fact;
        return;
    }

    fnc(n-1,fact*n);

}


int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;
    fnc(n,1);

    return 0;
}