#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin>>N;
    vector <int> v;
    while(N--){
        int n;
        cin>>n;
        v.push_back(n);
    } 
    
    sort(v.begin(),v.end()); 
    
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    
      
    return 0;
}



