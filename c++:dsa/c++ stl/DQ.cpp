#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int>dq;
    dq.push_back(1); 
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(5);
    // ALL SAME AS VECTOR

    dq.pop_back(); // Removes the last element
    dq.pop_front(); // Removes the first element

    dq.back();
    dq.front();
    // REST EVERYTHING SAME AS VECTOR

    return 0;
}