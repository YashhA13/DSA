#include<iostream>
#include<stack>
using namespace std;
// NOTE:- Stack DO NOT support INDEXING
// Only uses:- push,pop,top,empty,size.
// which means something liek cout << st[0]; is not valid
int main(){
    
    stack<int>st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout << st.top(); // Prints 5
    cout << endl;

    st.pop(); // Removes 5

    cout << st.top();
    cout << endl;

    cout << st.size(); // prints the size
    cout <<  endl;

    cout << st.empty(); // Returns a boolean value(1 or 0)

    stack<int>st1,st2;
    st1.swap(st2); // swaps the stack

    return 0;
}