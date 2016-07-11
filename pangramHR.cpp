/* hackerrank challenge, takes in a string and determines whether
the string is a pangram
https://www.hackerrank.com/challenges/pangrams */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    char c1, c2;
    getline(cin, s);
    //cout << s << endl;
    if (s.length() < 26) {
        cout << "not pangram" << endl;
        return 1;
    }
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(), s.end());
    for (int i=1; i<s.length(); i++) {
        c1 = s[i]; c2 = s[i-1];
        if (c2 != 32 && c1 != c2) {
            if (c1 != (c2)+1) {
                cout << "not pangram" << endl;
                return 1;
            }
        }
    }
    cout << "pangram" << endl;
    return 0;
}