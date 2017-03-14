

// you can use includes, for example:
#include <algorithm>
#include <limits.h>
#include <numeric>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    float max_slice = (std::accumulate(A.begin(), A.end(), 0))/A.size();//INT_MAX;
    int start_pos = 0;
    // write your code in C++14 (g++ 6.2.0)
    for(int i = 0;i < A.size();i++)
    {
       for(int j = 2;j < (A.size() - i);j++)
       {
           int sum_of_elems = std::accumulate(A.begin()+i, A.begin()+(i+j), 0);
           float avg = ((float)sum_of_elems);
           //cout << i << " " << j << " " << avg << endl;
           if(avg > max_slice)
           {
               //cout << "max_pos" << i << " " << j << " " << max_slice << endl;
               max_slice = avg;
               start_pos = i;
           }
       }

    }
    return max_slice;//min_slice;

}


