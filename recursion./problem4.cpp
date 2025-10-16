#include<iostream>
using namespace std;

void fnc(int i ,int n){

    if(i < 1){
        return;
    }
    fnc(i-1,n);
    cout << i << " ";
    

}


int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;
    fnc(n,n);

    return 0;
}