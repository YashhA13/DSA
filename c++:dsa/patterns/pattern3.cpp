#include<iostream>
using namespace std;

 void pattern(int n){

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
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