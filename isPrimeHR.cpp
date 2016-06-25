#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* adds a list of numbers to a vector, then tests to see which numbers
    are prime and prints prime or not prime. Algorithm used to keep running
    time as low as possible. 
    https://www.hackerrank.com/challenges/30-running-time-and-complexity*/   
    int n;
    cin >> n;
    vector<int> numList(n);
    for (int i=0; i<n; i++)
    {
        cin >> numList[i];
    }
    for (int j=0; j<n; j++)
    {
        if (numList[j]==2) { cout << "Prime" <<endl; }
        else if(numList[j]==1 || numList[j] % 2 == 0)
            { cout << "Not prime" <<endl; }
        else
        {
            bool prime = true;
            if (numList[j] < 9)
            {
                for (int k=3; k<numList[j]; k+=2)
                {
                    if (numList[j]%k==0) { prime=false; }
                }
            }
            else
            {
               for (int k=3; k<sqrt(numList[j]); k+=2)
               {
                   if (numList[j]%k==0) { prime=false; }
               }
            }
            if (prime) { cout << "Prime" <<endl; }
            else cout << "Not prime" <<endl;
        }
    }
    return 0;
}