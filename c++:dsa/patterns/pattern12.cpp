#include<iostream>
using namespace std;
//2n - 2i
void pattern(int n){

    for(int i = 1; i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout << j;
        }
        for(int j = 1;j<= 2*n-2*i;j++){
            cout << " ";
        }
        for(int j = i;j>=1;j--){
            cout << j;
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