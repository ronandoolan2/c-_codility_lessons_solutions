// you can use includes, for example:
// #include <algorithm>
#include <limits.h>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    /*vector<int> nA = A;
    vector<int> pA = A;
    nA.erase(std::remove_if(nA.begin(), nA.end(),[](int i){ return i > 0;}), nA.end());
    pA.erase(std::remove_if(pA.begin(), pA.end(),[](int i){ return i > 0;}), pA.end());
    vector<int> A2 = A;
    A.erase(unique(A.begin(), A.end()), A.end());*/
    int lowest = INT_MAX;
    for(int x = 0;x < A.size();x++)
    {
        for(int y = 0; y < A.size();y++)
        {
            int add = A[x] + A[y];
            //cout << "x " << x << " y " << y << " A[x] " << A[x] << " A[y] " << A[y] << " add " << add << endl;
            if(abs(add) < lowest)
            {
                lowest = abs(A[x] + A[y]);
   
}
