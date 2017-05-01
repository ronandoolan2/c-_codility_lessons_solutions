

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, int X) {
    // write your code in C++14 (g++ 6.2.0
    sort(A.begin(), A.end());
    vector<int> duplicates;
    int areas = 0;
    for(int i = 1;i < A.size();i++)
    {
        if(A[i] == A[i-1])
        {
            duplicates.push_back(A[i]);
            //detect 3 in a row
            if(A[i] == A[i+1])
            {
                i++;
            }
        }
    }
    for(int i = duplicates.size() -1;i > 0;i--)
    {
        //cout << duplicates[i] << endl;
        for(int j = i-1;j > 0;j--)
        {
            if(duplicates[i]*duplicates[j] >= X)
            {
                areas++;
            }
            else
            {
                break;
            }
        }
    }
    return areas;
}


