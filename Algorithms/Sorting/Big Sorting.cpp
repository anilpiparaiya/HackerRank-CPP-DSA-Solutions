#include<bits/stdc++.h>
#include <iostream>
using namespace std;

bool check(string a, string b){
    return a.length() == b.length() ? a > b : a.length() > b.length();
}

int main() {
    int n;
    cin >> n;
    vector<string> arr;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        arr.push_back(a);
    }
    
    sort(arr.begin(),arr.end(),check);
    for(int i = arr.size() - 1; i >= 0; i--){
        cout << arr[i] << endl;
    }
    return 0;
}
