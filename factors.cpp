// you can use includes, for example:
#include <math.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int factors = 2;
    for(int M = 2;M < sqrt(N); M++)
    {
        //cout << M << " " << (M % N) << endl;
        if((N % M)==0)
        {
            factors = factors+2;
        }
    }
    return 
