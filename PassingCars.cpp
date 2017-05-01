

// you can use includes, for example:
#include <algorithm>
#include <numeric>
#include <climits>
#include <stdlib.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size() > 1000000000)
       return -1;
    int total = 0;
    //int ones = 0;
    int zeros = 0;
    for (vector<int>::const_iterator i = A.begin(); i != A.end(); ++i)
    {
        if(*i == 0)
        {
           zeros++;
        }
        else
        {
            total = total + zeros;
            if(total > 1000000000)
               return -1;
        }
    }
    return total;
}


