/* Hackerrank challenge balanced brackets 
practice with stacks
https://www.hackerrank.com/challenges/balanced-brackets */
#include <stack>
#include <string>
#include <iostream>

using namespace std;

bool balancedBrackets(string s) {
    string test = s;
    char ch;
    stack<char> myStack;
    for (int i=0; i<test.length(); i++) {
        ch = test[i];
        switch(ch) {
            case '[':
            case '{':
            case '(': myStack.push(ch);
                break;
            case ']': if (myStack.empty() || myStack.top() != '[') return false;
                      else myStack.pop(); break;
            case '}': if (myStack.empty() || myStack.top() != '{') return false;
                      else myStack.pop(); break;
            case ')': if (myStack.empty() || myStack.top() != '(') return false;
                      else myStack.pop(); break;
        }
    }
    return myStack.empty() ? true : false;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        if (balancedBrackets(s)) cout << "YES" << endl;
        else cout<< "NO" <<endl;
    }
    return 0;
}
