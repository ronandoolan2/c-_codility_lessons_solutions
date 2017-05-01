

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    //std::fill(A.begin(), A.end(), 1);
    //A.resize(100000,1);

    int inversions = 0;
    for(int i =0;i < A.size();i++)
    {
        int k = A[i];
        vector<int> pA((A.begin()+i+1),A.end());
        pA.erase(std::remove_if(pA.begin(), pA.end(),[&k](int x){ return x >= k;}), pA.end());
        inversions+=pA.size();
        if(inversions > 1000000000)
        {
            return -1;
        }
        //cout << inversions << endl;
    }
    return inversions;
}


