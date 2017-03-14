

// you can use includes, for example:
#include <algorithm>
#include <numeric>
#include <climits>
#include <stdlib.h> 
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    int right = std::accumulate(A.begin(), A.end(), 0);
    int left = 0;
    int min_diff = INT_MAX;
    // write your code in C++14 (g++ 6.2.0)
    for(vector<int>::const_iterator i = A.begin(); i != A.end(); ++i)
    {
        if(abs(right - left) < min_diff)
        {
            min_diff = abs(right - left);
        }
        left = left + *i;
        right = right - *i;
    }
    return min_diff;
}


