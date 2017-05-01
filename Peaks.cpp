

#include <algorithm>
#include <numeric>
#include <climits>
#include <stdlib.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    //cout << "checking " << i << endl;
    //differentiate
    vector<int> dA(A.size(), 0);
    if(A.size() < 3)
    {
        return 0;
    }
    for(int i = 1;i < A.size();i++)
    {
       //cout << A[i-1] << " " << A[i] << " " << A[i+1] << endl;
       if((A[i-1]<A[i])&&(A[i+1] < A[i]))
       {
           dA[i] = 1;
       }
       else
       {
           dA[i] = 0;
       }
    }
    int j = A.size() - 1;
    if((A[j-1]<A[j])&&(A[j+1] < A[j]))
    {
           dA[j] = 1;
    }
    else
    {
       dA[j] = 0;
    }
    //dA[A.size()] = 0 - A[A.size()];
    /*for(int i = 0;i < A.size();i++)
    {
        cout << i << " " << dA[i] << endl;
    }*/
    int max_blocks = 0;
    //cout << A.size()/2 << endl;

    // write your code in C++14 (g++ 6.2.0)
    for(int i = 3;i < (A.size()/2);i++)
    {
        if(((A.size()) % i) != 0)
        {
            continue;
        }
        //cout << "checking " << i << endl;

        int peak = 0;
        //check for peaks in each block
        for(int j = 0;j < (A.size()/i);j++)
        {
            if(std::accumulate((dA.begin() + j*i + 1), (dA.begin() + (j+1)*i), 0) > 0)
            {
               peak++;
            }
            //if(peak == //number of blocks)
        }
        if(peak == (A.size()/i))
        {
            return (A.size()/i);
        }
    }
    return std::accumulate((dA.begin()), (dA.end()), 0);

}


