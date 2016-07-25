/* hackerrank challenge Maximum Element
 https://www.hackerrank.com/challenges/maximum-element
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    stack<int> myStack;
    stack<int> maxStack;
    int n; cin >> n;
    int x;
    maxStack.push(0);
    for (int i=0; i<n; i++) {
        int choice; cin >> choice;
        switch (choice) {
            case 1: cin >> x;
                    if (x >= maxStack.top() || maxStack.empty()) {
                        maxStack.push(x);
                    }
                    myStack.push(x);
                    break;
            case 2: if (myStack.empty()) break;
                    x = myStack.top();
                    myStack.pop();
                    if (x == maxStack.top()) maxStack.pop();
                    break;
            case 3: cout << maxStack.top() << endl;
                    break;
        }
    }
    return 0;
}
