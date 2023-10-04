int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    
    int lower = 1, upper = 1, digit = 1, special = 1;
    int size = password.size();
    string s("!@#$%^&*()-+");
    for(char &c : password){
        if(c >= 'A' && c <= 'Z') upper = 0;
        else if(c >= 'a' && c <='z') lower = 0;
        else if (c>='0' && c<='9') digit = 0;
        else if(s.find(c) != string::npos) special = 0;
           

    }
    
    int total = lower + upper + digit + special;
    return max(6 -size, total);
    

}
