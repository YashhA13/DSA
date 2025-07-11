#include<iostream>
#include<map>
using namespace std;

int main(){
    // map stores unique keys in sorted order
    
    // {Key,Value} key is unique value can be same.

    map<int , int> mpp; // first int is key second is value
    map<int , pair<int , int>>mpp1; //first int is key second pair with two int is key
    map<pair<int,int>,int>mpp2; // first pair value is key second is value

    mpp[1] = 2; // 1 is the key value to 1 is 2
    // mpp1.emplace({3,1});
    mpp.insert({2,4}); // key is 2 value is 4

    mpp.insert({3,5});

    mpp2[{2,3}] = 10; // key is {2,3} and value is 10

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << endl;
    cout << mpp[2];
    cout << endl;
    cout << mpp[5];
    cout << endl;

    auto it = mpp.find(3);
    cout << (*it).second;

    auto it = mpp.find(5);

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    //erase,swap,size,empty same as before

    return 0;
}