

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int count = 0;
    int first = 0;
    for(int i = A;i < B;i++)
    {
        if((i % K) == 0)
        {
            count++;
            first = i;
            break;
        }
    }
    int j = first;
    while(j < B)
    {
        j = j + K;
        count++;
    }
    count = count - 1;
    return count;
}


