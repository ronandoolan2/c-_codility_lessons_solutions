

// you can use includes, for example:
// #include <algorithm>
#include <math.h>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int sqrtN = sqrt(N);
    if(sqrtN*sqrtN == N)
    {
        return 4*sqrtN;
    }
    for(int i = sqrtN;i > 0;i--)
    {
        if((N % i) == 0)
        {
            return (2*(N/i) + 2*i);
        }
    }
}


