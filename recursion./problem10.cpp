#include<iostream>
using namespace std;

void fnc (int l , int r, vector<int> &a){

    if (l>=r) return;
    swap(a[l],a[r]);
    fnc(l+1,r-1,a);
}


int main(){

    vector<int> a = {1,2,3,4,5};
    fnc(0,a.size()-1,a);

    for(auto it = a.begin(); it != a.end(); it++){
        cout << *(it) << " ";
    }    

    return 0;
}