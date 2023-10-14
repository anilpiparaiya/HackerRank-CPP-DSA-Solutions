#include <iostream>
#include <stack>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> s;
    vector<int> res;
    vector<int> maxNums;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int command;
        cin >> command;
        if (command == 1)
        {
            int x;
            cin >> x;
            s.push(x);
            if (x >= max) {
                max = x;
                maxNums.push_back(x);
            }
           
        }
        else if (command == 2)
        {
            if (!s.empty())
            {
                if (s.top() == max) {
                    maxNums.pop_back();
                    if (maxNums.size() == 0) {
                        max = 0;
                    } else {
                        max = maxNums.at(maxNums.size() - 1);
                    }
                }
                s.pop();
            }
        }
        else if (command == 3)
        {
            // stack<int> temp = s;
            // while (!temp.empty())
            // {
            //     if (temp.top() >= max)
            //     {
            //         max = temp.top();
            //     }
            //     temp.pop();
            // }
            res.push_back(max);
        }
    }

    // while (!s.empty())
    // {
    //     cout << s.top() << endl;
    //     s.pop();
    // }

    for (int i = 0; i < res.size(); i++)
    {
        cout << res.at(i) << endl;
    }
}
