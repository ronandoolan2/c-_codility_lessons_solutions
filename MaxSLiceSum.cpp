

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
    int maxdoubleslice = std::accumulate((A.begin()), (A.end()), 0);
    int xy;
    for(int x = 0;x < A.size();x++)
    {
        for(int y = x+1;y < A.size();y++)
        {
            xy = std::accumulate((A.begin() + (x)), (A.begin() + y), 0);
            //cout << "x " << x << " y " << y<< " xy "<< xy << endl;
            if(xy > maxdoubleslice)
            {
                maxdoubleslice = xy;
            }
            
        }
    }
    return maxdoubleslice;
}


