

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int>::iterator it;
    int missing_element = A.size();
    int start = *std::min_element(A.begin(), A.end());
    //cout << start << endl;
    for(unsigned int i = start;i < (A.size() + 1);i++)
    {
        it = find (A.begin(), A.end(), i);
        if (it == A.end())
           missing_element = i;
    }
    if(missing_element == A.size())
    {
        return 1;
    }
    else
    {
        return 0;
    }

}


