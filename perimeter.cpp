

// you can use includes, for example:
// #include <algorithm>
#include <math.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    int side1 = round(sqrt(N));
    int side2 = ceil(sqrt(N));
    //cout << side1 << " " << side2 << endl;
    // write your code in C++14 (g++ 6.2.0)
    return 2*(side1 + side2);
    
}


