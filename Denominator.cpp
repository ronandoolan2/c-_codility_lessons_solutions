

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    /*A.clear();
    for(int k = 0;k < 100000;k++)
    {
        A.push_back(1);
    }*/

    vector<int> A2 = A;
    int most_freq = 0;
    int mycount = 0;
    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    for (vector<int>::const_iterator it=A.begin(); it!=A.end(); ++it)
    {
        //std::cout << ' ' << *it;
        mycount = std::count (A2.begin(), A2.end(), *it);
        if(mycount > most_freq)
        {
            most_freq = mycount;
        }
        if(mycount > (A2.size()/2))
        {
            int pos = find(A2.begin(), A2.end(), *it) - A2.begin();
            //cout << pos << endl;
            return pos;
        }
    }
    return -1;
}


