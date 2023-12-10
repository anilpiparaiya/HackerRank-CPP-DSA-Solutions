// Implemetation Part
vector<int> cutTheSticks(vector<int> arr) {
    
    // sort vector in decreasing order
    // push first element as size of arr
    sort(arr.begin(), arr.end(), greater<int>());
    int count, s = arr.size();
    vector<int> result;
    result.push_back(s);
    
    // check if first or largest element in arr is > 0
    // subtract each element by last or minimum elemet of arr
    while(arr[0] > 0){
        count = 0;
        for(int i = 0; i < s; i++){
            arr[i] -= arr[s-1];
            
            // if after subtraction it is not 0, then push count
            // else not
            // decrease size of arr whenever element becomes 0 
            if(arr[i] == 0){
                count = i;
                break;
            }
        }
        if(count != 0)
        result.push_back(count);
        s = count;
    }

return result;
}
