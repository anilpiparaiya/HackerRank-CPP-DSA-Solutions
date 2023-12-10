vector<int> breakingRecords(vector<int> scores) {
   
    // Initialize highestScore and lowestScore to first value of scores
    // number of times she breaks her record i.e initialize 0 to countLow and countHigh 
    int high = scores[0], low = scores[0], countHigh = 0, countLow = 0;
    vector<int> result;
   
    for(int i = 1; i < scores.size(); i++){
        // compare current score with lowest score
        // if condition satisfies then do changes as given 
        if(scores[i] < low){
            countLow++;
            low = scores[i];
        }else if(scores[i] > high){
        // compare current score with highest score
        // if above condition satisfies then update the values
            countHigh++;
            high = scores[i];
        }
    }
    
    // then push countHigh and countLow in returning vector i.e result
    result.push_back(countHigh);
    result.push_back(countLow);
    return result;
}
