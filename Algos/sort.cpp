#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    // if same
    if(p1.first>p2.first) return true;
    return false;
}



int main(){

    int a[] = {1,3,2,5,6};
    for(int i = 0; i <= 4;i++){
        cout << a[i] << " ";
    }
    cout << endl;

    sort(a,a+5);

    for(int i = 0; i <= 4;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << endl;

    vector<int>v;
    v.push_back(10);
    v.emplace_back(40);
    v.emplace_back(25);
    v.emplace_back(32);
    v.emplace_back(65);
    
    for(auto it = v.begin(); it != v.end();it++){
        cout << *(it) << " ";
    }
    cout << endl;

    sort(v.begin(),v.end());

    for(auto it = v.begin(); it != v.end();it++){
        cout << *(it) << " ";
    }
    cout << endl;
    cout << endl;

    // sort only two elements 

    int a1[] = {1,3,6,4};
    for(int i = 0 ; i <= 3; i++){
        cout << a1[i] << " ";
    }
    cout << endl;

    sort(a1+2,a1+4);

    for(int i = 0 ; i <= 3; i++){
        cout << a1[i] << " ";
    }
    cout << endl;

    sort(a1,a1+4,greater<int>());

    for(int i = 0 ; i <= 3; i++){
        cout << a1[i] << " ";
    }
    cout << endl;
    cout << endl;


    pair<int,int>a2[] = {{1,2},{2,1},{4,1}};

    for(int i = 0;i < 3;i++){
        cout << a2[i].first << " " << a2[i].second << endl;
    }
    cout << endl;
    cout << endl;

    sort(a2,a2+3,comp); // SORT 2
    
    for(int i = 0;i < 3;i++){
        cout << a2[i].first << " " << a2[i].second << endl;
    }
    cout << endl;
    cout << endl;

    
    // sort it according to the second element increasing
    // if second element is same, then sort
    // it according to first element but in descending 

    int num = 7; // Tells the number of set bits
    // set bit is a bit that has a value of 1
    int cnt = __builtin_popcount(num);
    cout << cnt;
    cout << endl;

    long long num1 = 172837594758;
    int cnt1 = __builtin_popcountll(num1);
    cout << cnt1;
    cout << endl;
    cout << endl;

    string s = "231"; // If you use 231 or something else just use sort to sort it
    sort(s.begin() , s.end()); // this sorted it to 123
    do{
        cout << s << endl;
    } while(next_permutation(s.begin(),s.end()));
    cout << endl;
    cout << endl;

    int arr[] = {1,20,4,6};
    int maxi = *max_element(arr,arr+4);
    int mini = *min_element(arr,arr+4);
    cout << maxi;
    cout << endl;
    cout << mini;


    return 0;
}