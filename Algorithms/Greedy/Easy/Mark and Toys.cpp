int maximumToys(vector<int> prices, int k) {
    sort(prices.begin(),prices.end());//sorted vector
    int count=0,sum=0;
    for(int i=0;i<prices.size();i++){
        sum+= prices[i];//sum of prices of toys.
        if(sum<k)
            count++;//no of toys purchased without exceeding k.
        else
            break;
    }
    return count;
}
