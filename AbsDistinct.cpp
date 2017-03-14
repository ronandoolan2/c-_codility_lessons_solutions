

// you can use includes, for example:
#include <algorithm>
#include <math.h>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    /*sort(A.begin(), A.end()); 
    
    A.erase(unique(A.begin(), A.end()), A.end());*/
    //check max N
    /*A.clear();
    for(int k = 0;k < 100000;k++)
    {
        A.push_back(1);
    }*/
    std::for_each(A.begin(), A.end(), [](int &n){ n = abs(n); });
    sort(A.begin(), A.end()); 
    A.erase(unique(A.begin(), A.end()), A.end());
    /*for (std::vector<int>::const_iterator it = A.begin(); it != A.end(); ++it)
    {
        cout << "eaten " << *it << endl;
    }*/

    return A.size();
}


