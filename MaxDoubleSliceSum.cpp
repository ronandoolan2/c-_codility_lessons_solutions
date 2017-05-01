

// you can use includes, for example:
#include <algorithm>
#include <math.h>
#include <iostream>
#include <limits.h>
#include <numeric>
#include <climits>
#include <stdlib.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int maxdoubleslice = INT_MIN;
    int xy;
    int yz;
    for(int x = 0;x < A.size();x++)
    {
        for(int y = x+1;y < A.size();y++)
        {
            xy = std::accumulate((A.begin() + (x + 1)), (A.begin() + y), 0);
            for(int z = y+1;z<A.size();z++)
            {
                yz = std::accumulate((A.begin() + (y + 1)), (A.begin() + z), 0);
                if(xy + yz > maxdoubleslice)
                {
                    maxdoubleslice = xy + yz;
                }
            }
        }
    }
    return maxdoubleslice;
}


