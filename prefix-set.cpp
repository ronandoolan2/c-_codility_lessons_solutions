

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> A2 = A;
    sort(A.begin(), A.end()); 
    A.erase(unique(A.begin(), A.end()), A.end()); 
    int count = 0;
    for (vector<int>::const_iterator i = A2.begin(); i != A2.end(); ++i)
    {
        A.erase(std::remove(A.begin(), A.end(), *i), A.end());
        if(A.size() == 0)
        {
            return count;
        }
        count++;
    }
}


