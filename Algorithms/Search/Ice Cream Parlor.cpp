vector<int> icecreamParlor(int m, vector<int> arr) {
    int n = arr.size();
    vector<int>ans;
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == m) {
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
        }
    }
    ans.push_back(-1);
    return ans;

}
