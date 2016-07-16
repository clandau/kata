#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

/*https://www.hackerrank.com/challenges/c-tutorial-stringstream*/

vector<int> parseInts(string str) {
   // Complete this function
    vector<int> parsedInts;
    stringstream ss(str);
    int num; char ch;
    //ss >> num; parsedInts.push_back(num);
    while (ss) {
        ss >> num >> ch;
        parsedInts.push_back(num);
    }
    return parsedInts;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

