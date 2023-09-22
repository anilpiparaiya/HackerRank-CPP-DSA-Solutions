#include <iostream>
#include <deque> 
using namespace std;
void printKMax(int arr[], int n, int k){
    deque<int> q;   // Monotonically Increasing Queue
    for (auto i = 0; i < n; ++i) {
        while (!q.empty() && arr[i] > q.back()) { // Make room arr[i]
            q.pop_back();  // Remove smaller elements from the back
        }

        q.emplace_back(arr[i]);         // Add current maximum arr[i]
        if (i+1 >= k) {
            cout << q.front() << ' ';   // Print maximum at the front
            if (arr[i+1-k] >= q.front()) {
                q.pop_front();          // Remove maximum from the front
            }
        }
    }
    cout << '\n';
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
