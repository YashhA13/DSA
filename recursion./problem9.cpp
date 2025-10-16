#include<iostream>
using namespace std;

int fnc(int n){

    if(n == 0){
        return 1;
    }
    return n*fnc(n-1);

}


int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << fnc(n);

    return 0;
}