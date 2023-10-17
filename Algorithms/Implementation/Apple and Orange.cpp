void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    
    int apple=0, orange=0;
    for(int app: apples) if(app + a >= s && app + a <= t) apple++;
    for(int ora: oranges) if(ora + b >= s && ora + b <= t) orange++;
    cout<<apple<<endl<<orange;

}
