#include<iostream>
using namespace std;

void Name_Print(int i,int n,string name){
    if(i>n){
        return;
    }
    cout << name << endl ;
    Name_Print(i+1,n,name);
}



int main(){

    string name;
    cout << "Enter your name: ";
    cin >> name;

    int n;
    cout << "Enter a number: ";
    cin >> n;
    Name_Print(1,n,name);

    return 0;
}