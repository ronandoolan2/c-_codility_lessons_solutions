

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int k = A.size() - K;
    while(k < 0)
    {
        k = k + A.size();
    }
    std::rotate(A.begin(),A.begin()+k,A.end());
    return A;
}


