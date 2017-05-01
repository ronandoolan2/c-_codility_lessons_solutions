#include <algorithm>
#include <limits.h>
#include <numeric>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    float min_slice = (std::accumulate(A.begin(), A.end(), 0))/A.size();//INT_MAX;
    int start_pos = 0;
    // write your code in C++14 (g++ 6.2.0)
    for(int i = 0;i < A.size();i++)
    {
       for(int j = 2;j < 4;j++)
       {
           if(A.begin()+(i+j) > A.end())
           {
               continue;
           }
           int sum_of_elems = std::accumulate(A.begin()+i, A.begin()+(i+j), 0);
           float avg = ((float)sum_of_elems)/ ((float)j);
           //cout << i << " " << j << " " << avg << endl;
           if(avg < min_slice)
           {
               //cout << "min_pos" << i << " " << j << " " << min_slice << endl;
               min_slice = avg;
               start_pos = i;
           }
       }

    }
    return start_pos;//min_slice;
}
