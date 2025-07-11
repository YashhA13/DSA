#include<iostream>
#include<set>
using namespace std;

int main(){

    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    int cnt1 = ms.count(1);
    cout << cnt1;
    cout << endl;

    // ms.erase(1); // all 1 erased

    int cnt = ms.count(1);
    cout << cnt;
    cout << endl;

    ms.erase(ms.find(1));
    ms.erase(ms.find(1));

    int cnt3 = ms.count(1);
    cout << cnt3;
    cout << endl;

    return 0;
}