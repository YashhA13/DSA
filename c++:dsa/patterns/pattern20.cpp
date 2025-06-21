#include<iostream>
using namespace std;

void pattern(int n){

    for(int i = 0;i<n;i++){
        for(int j = n-1;j>=i;j--){
            cout << "*";
        }
        for(int j = 0;j<=i*2;j++){
            cout << " ";
        }

        for(int j = n-1;j>=i;j--){
            cout << "*";
        }
        cout << endl;
    }
    int ins = 2*n;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout << "*";
        }
        for(int j = 0;j<=ins-2;j++){
            cout << " ";
        }
        for(int j = 0;j<=i;j++){
            cout << "*";
        }
        ins = ins-2;
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