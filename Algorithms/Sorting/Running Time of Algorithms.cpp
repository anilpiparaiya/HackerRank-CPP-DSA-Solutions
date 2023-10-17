int runningTime(vector<int> arr) {
    int i,j;
    int value;
    int result = 0;
    for(i=1;i<arr.size();i++)
    {
        value=arr[i];
        j=i-1;
        while(j>=0 && value<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
            result ++;
        }
        arr[j+1]=value;
    }
    return result;
}
