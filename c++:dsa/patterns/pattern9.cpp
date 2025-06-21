#include<iostream>
using namespace std;

void patternup(int n){

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

void patterndown(int n){

    for(int i = 0; i<n;i++){
        //space 
        for(int j = 0; j<i;j++)
        cout << " ";

        //star
        for(int j = 0; j<2*n-(2*i+1);j++)
        cout << "*";

        //space 
        for(int j = 0; j<i;j++)
        cout << " ";

        cout << endl;
    }
}



int main(){
    cout << "Enter a number:";
    int n;
    cin >> n;
    patternup(n);
    patterndown(n);
    
    return 0;
}