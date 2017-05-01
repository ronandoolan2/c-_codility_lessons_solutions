
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
    vector<int> dA(A.size()+1, 0);
    int local_max_depth = 0;
    int max_depth = 0;
    int local_height = 0;
    if(A.size() < 3)
    {
        return 0;
    }
    //first
    if(A[1] < A[0])
    {
       dA[0] = A[0];
       //cout << "found first peak" << endl;
    }
       /*else if((A[i-1]>A[i])&&(A[i+1] > A[i]))
       
       {
           dA[i] = -A[i];
       }*/
    else
    {
       dA[0] = 0;
    }
    if(dA[0] > 0)
    {
        
        if(dA[0] > local_height)
        {
            //cout << "starting local height" << endl;
            local_height = dA[0];
            if(local_max_depth > max_depth)
            {
                max_depth = local_max_depth;
            }
            local_max_depth = 0;
        }
    }
    if((local_height - A[0]) > local_max_depth)
    {
        local_max_depth = (local_height - A[0]);
    }
    for(int i = 1;i < A.size();i++)
    {
       //cout << A[i-1] << " " << A[i] << " " << A[i+1] << endl;
       if((A[i-1]<A[i])&&(A[i+1] < A[i]))
       {
           dA[i] = A[i];
       }
       /*else if((A[i-1]>A[i])&&(A[i+1] > A[i]))
       
       {
           dA[i] = -A[i];
       }*/
       else
       {
           dA[i] = 0;
       }
       if(dA[i] > 0)
        {
            if(dA[i] > local_height)
            {
                local_height = dA[i];
                if(local_max_depth > max_depth)
                {
                    //cout << "nex max depth" << local_max_depth << endl;
                    max_depth = local_max_depth;
                }
                local_max_depth = 0;
            }
            else
            {
                //local depth so far
                if((local_max_depth - (local_height - A[i])) > max_depth)
                {
                    max_depth = local_max_depth - (local_height - A[i]);
                }
            }
        }
        if((local_height - A[i]) > local_max_depth)
        {
            //cout << "should come here" << endl;
            //cout << "new local depth " << (local_height - A[i]) << endl;
            local_max_depth = (local_height - A[i]);
        }
    }
    int j = A.size() - 1;
    if((A[j-1]<A[j])&&(A[j+1] < A[j]))
    {
           //cout << A[j] << endl;
           dA[j] = A[j];
    }
    /*else  if((A[j-1]>A[j])&&(A[j+1] > A[j]))
    {
           dA[j] = -A[j];
    }*/
    else
    {
       dA[j] = 0;
    }
    if(dA[j] > 0)
    {
        //cout << "d" << endl;
        if(dA[j] > local_height)
        {
            local_height = dA[j];
            if(local_max_depth > max_depth)
            {
                max_depth = local_max_depth;
            }
            local_max_depth = 0;
        }
        else
        {
            local_max_depth = (local_max_depth) - (local_height - dA[j]);
            if(local_max_depth > max_depth)
            {
                max_depth = local_max_depth;
            }
        }
    }
    if((local_height - A[j]) > local_max_depth)
    {
        //cout << "or here" << endl;
        local_max_depth = (local_height - A[j]);
    }
    
    return max_depth;
}
