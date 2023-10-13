#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int key,element_in_array, size, pos = 0;
    cin >> key>> size;
    for(int i = 0; i < size; i++){
        cin >>element_in_array;
        if(key == element_in_array){
            cout << pos << endl;
            return 0;
        }
        pos++;
    }
    return 0;
}
