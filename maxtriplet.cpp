

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int P = *std::max_element(A.begin(), A.end());
    A.erase(std::remove(A.begin(), A.end(), P), A.end());
    int Q = *std::max_element(A.begin(), A.end());
    A.erase(std::remove(A.begin(), A.end(), Q), A.end());
    int R = *std::max_element(A.begin(), A.end());
    return P*Q*R;

    
}


