#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student{
    int age;
    string firstName;
    string lastName;
    int standard;
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Student st;
    cin>>st.age>>st.firstName>>st.lastName>>st.standard;
    cout<<st.age<<" "<<st.firstName<<" "<<st.lastName<<" "<<st.standard;  
    return 0;
}
