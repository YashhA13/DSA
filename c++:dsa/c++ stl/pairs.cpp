#include<iostream>
using namespace std;

 


int main(){

    pair<int,int> p ={1,2};
    cout << p.first << " " << p.second << endl;;

    pair<int,pair<int , int>> q = {4,{3,5}};
    cout << q.first << " " << q.second.first << " " << q.second.second << endl;

    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[1].first << " " << arr[1].second << endl;
    cout << arr[0].first << " " << arr[0].second;

    return 0;
}