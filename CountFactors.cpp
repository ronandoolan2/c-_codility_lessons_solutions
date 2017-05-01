// you can use includes, for example:
// #include <algorithm>
#include <math.h>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    //get factors
    //N = ;
    if(N == 1)
    {
        return 1;
    }
    int total_factors = 2;
    int sqrtN = sqrt(N);
    //cout << sqrtN << endl;
    if(sqrtN*sqrtN == N)
       total_factors++;
    for(int i = 2;i < sqrt(N);i++)
    {
        //cout << i << " factors " << total_factors << endl;
        if((N % i) == 0)
        {
           
           total_factors = total_factors + 2;
        }
    }
    return total_factors;
} 
