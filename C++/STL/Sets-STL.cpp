#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int>s;
    int choice, x, y, val,n;
    
    cin>>n;
    while(n--){
        cin>>choice;
        if(choice==1){
            cin>>x;
            s.insert(x);
        }
        
        else if(choice == 2){
            cin>>y;
            s.erase(y);
            s.erase(y);
        }
        
        else if(choice==3){
            cin>>val;
            set<int>::iterator itr=s.find((val));
            
            if(itr==s.end()){
                cout<<"No"<<endl;
            }
            
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
    
    return 0;
}
