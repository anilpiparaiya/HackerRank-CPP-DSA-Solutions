int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    int sum_h1 = 0;
    int sum_h2 = 0;
    int sum_h3 = 0;
    
    vector<int> temp;
    for(int i=0; i<h1.size(); i++){
        sum_h1 += h1[i];
        temp.insert(temp.begin(), h1[i]);
    }
    
    h1 = temp;
    temp.clear();
    
    for(int i=0; i<h2.size(); i++){
        sum_h2 += h2[i];
        temp.insert(temp.begin(), h2[i]);
    }
    
    h2 = temp;
    temp.clear();
    
    
    for(int i=0; i<h3.size(); i++){
        sum_h3 += h3[i];
        temp.insert(temp.begin(), h3[i]);
    }
    
    h3 = temp;
    temp.clear();
    
    while(sum_h1 != sum_h2 or sum_h1 != sum_h3){
        if(sum_h1 >sum_h2 or sum_h1 > sum_h3){
            sum_h1 -= h1[h1.size() -1];
            h1.pop_back();
        }
        
        if(sum_h2 >sum_h1 or sum_h2 > sum_h3){
            sum_h2 -= h2[h2.size() -1];
            h2.pop_back();
        }
        
        if(sum_h3 >sum_h1 or sum_h3 > sum_h2){
            sum_h3 -= h3[h3.size() -1];
            h3.pop_back();
        }
    }
    
    return sum_h1;
    

}
