
int birthday(vector<int> s, int d, int m) {
    int n = s.size();
    vector<int>prefix(n, 0);
    prefix[0] = s[0];
    
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + s[i];
    }
    
    int count = 0, sum = prefix[m-1];
    
    if(sum == d) count++;
    
    int index = 0;
    
    for(int i=m; i<n; i++){
        int temp = prefix[i] - prefix[index];
        if(temp == d) count++;  
        index++;  
    }
    
    return count;
}
