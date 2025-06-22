#include<iostream>
#include<queue>
using namespace std;
// QUEUE IS A FIFO DATA STRUCTURE I.E first one to come is first one to go
int main(){

    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(4); // {1,2,4}

    q.back()+=5; // adds 5 to 4
    cout << q.front(); // prints 1
    cout << endl;
    cout << q.back();
    cout << endl;

    q.pop(); // Del the first element {2,9}

    cout << q.front(); // prints 2

    

    return 0;
}