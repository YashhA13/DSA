#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> ls;
    ls.push_back(1); // Same as vector
    ls.emplace_back(2); // Same as vector

    ls.push_front(3); // Adds an element in front of the list
    ls.emplace_front(4);

    // Rest everything same as vector
    for(auto it = ls.begin(); it != ls.end();it++){
        cout << *(it) << " ";
    }

    return 0;
}