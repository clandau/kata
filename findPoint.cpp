#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* find point reflection about the line created by 2 points around the other point 
    hacker rank challenge Find Point https://www.hackerrank.com/challenges/find-point */
    int n, c;
    int pReflectedX, pReflectedY;
    cin >> n;  //get number of test cases
    int coordinates[n][4];
    for (int i=0; i<n; i++) {
        for (int j=0; j<4; j++) {
            cin >> c;
            coordinates[i][j] = c;
        }
    }
    for (int i=0; i<n; i++) {
        pReflectedX = 2*coordinates[i][2] - coordinates[i][0];
        pReflectedY = 2*coordinates[i][3] - coordinates[i][1];
        cout << pReflectedX << " " << pReflectedY << endl;
    }
return 0;
}