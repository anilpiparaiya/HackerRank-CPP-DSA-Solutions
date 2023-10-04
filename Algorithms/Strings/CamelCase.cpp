int camelcase(string s) {
    // numberofcapitalletters+1
    int n = s.length();
    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            count++;
        }
    }
    return count+1;

}
