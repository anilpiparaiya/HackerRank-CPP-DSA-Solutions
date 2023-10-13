#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n=0,d1=0,d2=0, a[100][100];
    cin>>n;

    for(unsigned long long i=0;i<n;i++){
        for(unsigned long long j=0;j<n;j++){
            cin>>a[i][j];
            if(i==j){
                d1+=a[i][j];
            }
            if(i+j==n-1){
                d2+=a[i][j];
            }
        }
    }
    cout<<abs(d2-d1)<<"\n";
    return 0;
}
