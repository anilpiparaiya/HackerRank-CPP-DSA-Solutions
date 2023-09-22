#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n;
    cin>>n;
    
    vector<int>v;
    
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    int position, a, b;
    cin>>position;
    v.erase(v.begin()+position-1);
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<endl;
    
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    

    return 0;


}
