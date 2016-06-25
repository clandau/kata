#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//https://www.hackerrank.com/challenges/cavity-map


int main(){
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0;grid_i < n;grid_i++){
        cin >> grid[grid_i];
    }
    for (int i=1; i<(n-1); i++){
        for (int j=1; j<(n-1); j++) {
            char a = grid[i][j];
            if (a > grid[i-1][j] && a > grid[i+1][j] && a > grid[i][j+1] && a> grid[i][j-1]){
                grid[i][j] = 'X';
            }
        }
    }
    for (int k=0; k<n; k++) cout << grid[k] << endl;
    return 0;
}