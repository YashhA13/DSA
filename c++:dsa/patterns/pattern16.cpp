#include<iostream>
using namespace std;

void pattern(int n){

    for(int i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j = 0;j<=i;j++){
            cout << ch << " ";
        }
        cout << endl;
    }

}


int main(){

    cout << "Eneter a number:";
    int n;
    cin >> n;
    pattern(n);

    return 0;
}