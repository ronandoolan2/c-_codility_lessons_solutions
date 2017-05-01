

// you can use includes, for example:
// #include <algorithm>
#include <algorithm>
#include <numeric>
#include <climits>
#include <stdlib.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int max_flags = 0;
    int peaks = 0;
    vector<int>::const_iterator first_peak;
    //cout << A.size()/2 << endl;
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
           peaks++;
           dA[i] = 1;
       }
       else
       {
           dA[i] = 0;
       }
       if(peaks == 1)
       {
           first_peak = A.begin()+i;
           peaks++;
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

    int max_peaks = std::accumulate((dA.begin()), (dA.end()), 0);
    if(max_peaks < 2)
    {
        //cout << "only one peak" << endl;
        return max_peaks;
    }
    //find first peak
    /*vector<int>::const_iterator first_peak;
    for (vector<int>::const_iterator it=(A.begin()+1); it!=A.end(); ++it)
    {
        if((*(it-1) < *it)&&(*it > *(it + 1)))
        {
            //set first peak
            first_peak = it;
            break;
        }
    }*/
    //cout << "first_peak" << *first_peak << endl;
    for(int flags = 1;flags <= max_peaks;flags++)
    {
        //cout << flags << endl;
        int flags_remaining = flags - 1;
        for (vector<int>::const_iterator it=first_peak+flags; it!=A.end(); ++it)
        {
            if(flags_remaining == 0)
            {
                break;
            }
            //check are you on a peak
            //if((*(it-1) < *it)&&(*it > *(it + 1)))
            if(dA[it-A.begin()] == 1)
            {
                //put a flag down
                //first_peak = it;
                //break;
                flags_remaining--;
                it = it + flags;
                if(it > A.end()||(std::accumulate((dA.begin() + (it-A.begin())), (dA.end()), 0) < 1))
                {
                    break;
                }
            }
        }
        int total_flags_put_down = flags - flags_remaining;
        //cout << total_flags_put_down << endl;
        if(total_flags_put_down > max_flags)
        {
            max_flags = total_flags_put_down;
        }
    }
    return max_flags;
}


