
vector<int> reverseArray(vector<int> a) {
   
   vector<int> temp;
   
   for(int i=a.size()-1; i>=0; i--)
   {
       temp.push_back(a[i]);
   }
   return temp;
}