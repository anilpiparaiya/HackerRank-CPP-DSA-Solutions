
string kangaroo(int x1, int v1, int x2, int v2) {
    if((x1>x2&&v1<v2)||(x1<x2&&v1>v2)){
        if(abs(x1-x2)%abs(v1-v2)==0) return "YES"; 
    }
    
    return "NO";
    
}
