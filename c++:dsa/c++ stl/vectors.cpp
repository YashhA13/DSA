#include<iostream>
#include<vector> 
using namespace std;

int main(){

    vector<int> v;

    v.push_back(1); // places 1 in place of empty container
    v.emplace_back(2); //increases the container space and adds 2
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);

    vector<pair<int,int>>vec;
    vec.push_back({1,2}); //pushback required {}
    vec.emplace_back(3,4); //emplaceback does not require {}

    vector<int>q(5,100); // 5 container, 100 stored in each of them
    vector<int>vv(5); //an empty container with 5 empty place

    vector<int>v1(5,20);
    vector<int>v2(v1); // copy of v1

    //ways to access a vector:
    // 1. Normal way v[1]
    // 2. Using itrator

    // NORMAL WAY
    cout << v1[2] << endl;

    // ITRATOR WAY

    vector<int>::iterator it = v.begin(); //begin points at the address of 1st container's memory location
    cout << *(it) << endl; // to access that memory location we use *
    it++;
    cout << *(it) << endl;
    it = it+1;
    cout << *(it) << endl;

    vector<int>::iterator itt = v.end(); //this points to the memory location right after the value present in last container
    cout << *(itt) << endl; // this prints 0 because there is no value its and empty container
    itt--;
    cout << *(it) << endl; // now that it-- is done the memory address shifts back to that of last container

    cout << v[0] << " " << v.at(0) << endl;
    cout << v.back() << endl;

    // USING LOOPS

    for(vector<int>::iterator itr = v.begin(); itr != v.end();itr++){
        cout << *(itr) << " ";
    }
    cout << endl;

    // Now using this itrator syntax is a pain cuz its too big so we use:

    for(auto irt = v.begin(); irt != v.end();irt++){
        cout << *(irt) << " ";
    }
    cout << endl;

    for(auto ittrr : v){ // THIS IS NOT AN ITRATOR ITS INT
        cout << ittrr << " ";
    }
    cout << endl;

    // DELETION IN A VECTOR
    // v.erase(v.begin()+1);

    // for(auto it = v.begin(); it != v.end(); it++){
        // cout << *(it) << " ";
    // }

    v.erase(v.begin()+2,v.begin()+4);
    for(auto it = v.begin();it != v.end();it++){
        cout << *(it) << " ";
    }
    cout << endl;

    // INSERT FUNCTION
    vector<int> v4(2,100); // two 100 
    v4.insert(v4.begin(),300);

    for(auto it = v4.begin(); it != v4.end();it++){
        cout << *(it) << " ";
    }
    cout <<  endl;

    v4.insert(v4.begin() + 1,2,10);
    for(auto it =v4.begin(); it != v4.end(); it++){
        cout << *(it) << " ";
    }
    return 0;
}