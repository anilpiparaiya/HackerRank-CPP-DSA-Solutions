vector<int> breakingRecords(vector<int>scores){
    int min = scores[0], max = scores[0];
    int minCount = 0, maxCount = 0;
    
    for(int i=0; i<scores.size(); i++){
        
        if(scores[i] > max){
            max = scores[i];
            maxCount++;
        }
        
        else if(scores[i] < min){
            min = scores[i];
            minCount++;
        }
    }
    
    return {maxCount, minCount};
}
