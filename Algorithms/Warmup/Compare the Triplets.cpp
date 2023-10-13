#include <bits/stdc++.h>

using namespace std;
    vector<int>solve(int a0,int a1,int a2,int b0,int b1,int b2){
        vector<int>results(2);
        results[0]=0;
        results[1]=0;
        int a[3],b[3];
        a[0]=a0; a[1]=a1; a[2]=a2;
        b[0]=b0;b[1]=b1;b[2]=b2;
        for(int i=0;i<3;i++){
            if(a[i]>b[i])results[0]++;
            else if(a[i]<b[i])results[1]++;

        }
        return results;
    
}
int main(){
    int a0;
    int a1;
    int a2;
    cin>>a0>>a1>>a2;
    int b0;
    int b1;
    int b2;
    cin>>b0>>b1>>b2;
    vector<int>result=solve(a0,a1,a2,b0,b1,b2);
    for(ssize_t i=0;i<result.size();i++){
        cout<<result[i]<<(i!=result.size()-1?" ":" ");

    }
    cout<<endl;
    return 0;
}
