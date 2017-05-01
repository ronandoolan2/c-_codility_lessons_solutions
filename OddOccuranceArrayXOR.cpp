#include <algorithm>


int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int x = 0;

    for (vector<int>::const_iterator i = A.begin(); i != A.end(); ++i)
    {
       x = x ^ *i; 
    }
    return x;
}
