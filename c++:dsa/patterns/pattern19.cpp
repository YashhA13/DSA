#include<iostream>
using namespace std;

void pattern(int n){

    for(int i = 0;i<n;i++){
        for(char ch = 'E'-i;ch<='E';ch++){
            cout << ch << " ";
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