#include<iostream>
using namespace std;

void pattern(int n){

    for(int i = 0; i < n; i++){
        for(char j = 'A';j <= 'A' + (n - i - 1); j++){
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