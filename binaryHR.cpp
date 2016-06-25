//convert a number to binary and return the highest sequential ones
//https://www.hackerrank.com/challenges/30-binary-numbers

#include <iostream>

using namespace std;

int main()
{
    int count=0, num, max=0;
    cin >> num;
    while (num > 0)
    {
        int rem = num % 2;
        num = num / 2;
        if (rem == 1)
        {
            count++;
        }
        else
        {
            if (max < count)
                max = count;
            count = 0;
        }
    }
    if (max < count)
        max = count;
    cout << max << endl;
    return 0;
}