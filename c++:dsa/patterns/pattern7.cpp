#include<iostream>
using namespace std;

void pattern(int n){

    for(int i = 0; i<n;i++){
        //space 
        for(int j = 0; j<n-i-1;j++)
        cout << " ";

        //star
        for(int j = 0; j<2*i+1;j++)
        cout << "*";

        //space 
        for(int j = 0; j<n-i-1;j++)
        cout << " ";

        cout << endl;
    }
    
}


int main(){

    cout << "Enter a number:";
    int n;
    cin >> n;
    pattern(n);

    return 0;
}