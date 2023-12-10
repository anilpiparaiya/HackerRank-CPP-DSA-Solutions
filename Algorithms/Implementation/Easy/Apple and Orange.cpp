void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    
    int apple=0, orange=0;
    
    // for(int app: apples) if(app + a >= s && app + a <= t) apple++;
    // for(int ora: oranges) if(ora + b >= s && ora + b <= t) orange++;
    
    
    for(int i=0; i<apples.size(); i++){
        if(apples[i] + a >= s && apples[i] + a <= t){
            apple++;
            
        }
    }
    
    for(int i=0; i<oranges.size(); i++){
        if(oranges[i] + b >= s && oranges[i] + b <= t){
            orange++;
        }
    }
    
    cout<<apple<<endl<<orange;
    
    
}
