#include<iostream>
using namespace std;

void pattern(int n){

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i == 0 || j == 0 || i == n-1 || j == n-1){
                cout << "*";
            }
            else cout << " ";
        }
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