long largestRectangle(vector<int> h) {
int i,j,count,min;
long int Area,Max=0;
int n=h.size();
h[n]=0;			//to avoid crash while executing h[n]
for(i=0;i<n;i++){
  count=1;		
  min=h[i];
  j=i-1;
  while(j>=0){	//Loop to check for greater no.s in reverse dir.
    if(h[j]>min){      
      count++;
      j--;
    }
    else 
    break;
  }
  while(h[i+1]==min&&i+1<n){  
    i++;		//Loop to check for similar no.s (forward)
    count++;
  }  
  j=i+1;
  while(h[j]>=min&&j<n){    
    j++;		//Loop to check for greater no.s (forward)
    count++;
  }
  Area=min*count;
  if(Area>Max)
    Max=Area;
}
return Max;
}
