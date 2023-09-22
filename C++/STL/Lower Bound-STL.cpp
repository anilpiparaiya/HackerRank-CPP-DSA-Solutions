#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, values, queries;
    vector<int>v;
    cin>>n;
    
    while(n--){
        cin>>values;
        v.push_back(values);
    }
    
    cin>>queries;
    for(int i=0; i<queries;i++){
        cin>>values;
        auto result=lower_bound(v.begin(),v.end(),values);
        if(values== *result){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        cout<<" "<< result-v.begin()+1<<endl;
    }   
    return 0;
}

