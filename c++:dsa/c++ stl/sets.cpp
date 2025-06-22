#include<iostream>
#include<set>
// Everything is sorted and is unique

using namespace std;

int main(){

    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1,2}
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}

    auto it = st.find(3);
    
    // auto it = st.find(6);

    st.erase(4); // erases 4

    cout << st.count(1); // gives you occurances a number can only occur
    // 1 and 0 times in sets because they are unique hence st.count()
    // only returns 1 and 0 value 1 i.e 1 time occured 0 means no occurance 

    auto it1 = st.erase(2);
    auto it2 = st.erase(3);
    st.erase(it1);
    st.erase(it2);

    return 0;
}