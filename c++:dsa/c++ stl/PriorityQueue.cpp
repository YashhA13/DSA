#include<iostream> 
#include<queue>
using namespace std;

// In priority queue the largest value stays at the top

int main(){
    // max heap

    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout << pq.top(); // prints 10
    cout << endl;
    
    pq.pop(); // {8,5,2}

    // Min heap

    priority_queue<int ,vector<int>, greater<int>> pqr;
    pqr.push(5); //{5}
    pqr.push(2); // {2,5}
    pqr.push(8); // {2,5,8}
    pqr.emplace(10); // {2,5,8,10}

    cout << pqr.top(); // prints 2
    cout << endl;

    return 0;
}