

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> pA = A;
    pA.erase(std::remove_if(pA.begin(), pA.end(),[](int i){ return i < 0;}), pA.end());
    /*for (vector<int>::const_iterator i = pA.begin(); i != pA.end(); ++i)
    {
        cout << *i << endl;
    }*/
    sort(pA.begin(), pA.end());
    pA.erase(unique(pA.begin(), pA.end()), pA.end());
    int x = 1;
    for (vector<int>::const_iterator i = pA.begin(); i != pA.end(); ++i)
    {
        //cout << x << " " << *i << endl;
        if(*i != x)
        {
            return x;
        }
        x++;
    }
    return x;
    
}


