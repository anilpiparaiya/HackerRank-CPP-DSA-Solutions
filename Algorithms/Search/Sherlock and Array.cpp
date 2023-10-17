string balancedSums(vector<int> arr) {
    int total = 0;
        for(int i: arr){
            total = total + i;
        }
        
        int lsum =0;
        for(int i=0;i<arr.size();i++){
            int rsum = total - lsum -arr[i];
            if(lsum == rsum)
                return "YES";
            lsum = lsum + arr[i];
        }
        return "NO";
    }
