// #include <bits/stdc++.h>
#include <iostream>
#include <utility>
using namespace std;

int main(){
    pair<int, int> p = {1,3};
    cout << p.first<< " " << p.second << endl; // 1 3

    pair<int,pair<int,int>> p2 = {1,{2,3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl; // 1 2 3

    // pair of array;
    pair<int, int> arr[] = {{1,2},{10,20},{100,200}};
    cout << arr[1].first; // 10

    return 0;
}