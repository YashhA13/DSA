#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter a number";
    cin >> num;

    vector <int> vc;
    
    for(int i = 1;i <= sqrt(num);i++){
        if (num%i == 0){
            vc.push_back(i);
        }
        if ((num/i) != i){
            vc.push_back(num/i);
        }
    }

    sort(vc.begin(),vc.end());

    for(auto it = vc.begin(); it != vc.end();it++){
        cout << *(it) << " ";
    }


    return 0;
}