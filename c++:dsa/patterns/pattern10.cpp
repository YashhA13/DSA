#include<iostream>
using namespace std;

void pattern1(int n){

    for(int i = 0; i<n;i++){
        for(int j = 0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n){

    for(int i = 1; i < n; i++){
        for(int j = n; j>i;j--){
            cout << "*";
        }
        cout << endl;
    }

}


int main(){

    cout << "Enter a number:";
    int n;
    cin >> n;
    pattern1(n);
    pattern2(n);
    return 0;
}