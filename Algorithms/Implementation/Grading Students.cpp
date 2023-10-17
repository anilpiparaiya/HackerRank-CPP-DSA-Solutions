vector<int> gradingStudents(vector<int> grades) {
    vector<int> result;
    
    for(int i=0; i<grades.size(); i++){
        int mod = grades[i]%5;
        
        if(mod < 3 || grades[i] < 38) result.push_back(grades[i]);
        
        else{
            result.push_back(grades[i] - mod + 5);
        }
    }
    
    
    return result;

}
