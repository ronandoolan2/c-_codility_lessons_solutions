

// you can use includes, for example:
#include <algorithm>
#include <iostream>
#include <limits.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end());
    vector<int> B;
    int max_mult = INT_MIN;
    int mult = 0;
    if(A.size() > 6)
    {
        vector<int> B;
        B.push_back(*(A.begin()));
        B.push_back(*(A.begin()+1));
        B.push_back(*(A.begin()+2));
        B.push_back(*(A.end()-3));
        B.push_back(*(A.end()-2));
        B.push_back(*(A.end()-1));
        for (vector<int>::const_iterator i = B.begin(); i != B.end()-2; ++i)
        {
            for (vector<int>::const_iterator j = i+1; j != B.end()-1; ++j)
            {
                for (vector<int>::const_iterator k = j+1; k != B.end(); ++k)
                {
                    mult = *i * *j * *k;
                    if(mult > max_mult)
                        max_mult = mult;
                }
            }
        }
    }
    else
    {
        for (vector<int>::const_iterator i = A.begin(); i != A.end()-2; ++i)
        {
            //cout << "*i " << *i << endl;
            for (vector<int>::const_iterator j = i+1; j != A.end()-1; ++j)
            {
                //cout << "*j " << *j << endl;
                for (vector<int>::const_iterator k = j+1; k != A.end(); ++k)
                {
                    //cout << "*k " << *k << endl;
                    mult = *i * *j * *k;
                    //cout << mult << endl;
                    if(mult > max_mult)
                        max_mult = mult;
                }
            }
        }

    }
    return max_mult;
}


