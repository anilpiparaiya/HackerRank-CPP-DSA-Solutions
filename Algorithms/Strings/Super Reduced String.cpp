string superReducedString(string s) {
    if(s.empty()) return "Empty String";
    if(s.size() >= 2){
        for(int i=1; i<s.size(); i++){
            if(s[i] == s[i-1]){
                return superReducedString(s.erase(i-1, 2));
            }
        }
    }
    return s;

}
