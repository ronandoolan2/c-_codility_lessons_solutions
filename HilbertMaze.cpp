// you can use includes, for example:
#include <algorithm>
#include <iostream>

using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N, int A, int B, int C, int D) {
    // write your code in C++14 (g++ 6.2.0)
            if(N == 1)
        {
            N = 5;
            int** ary = new int*[N];
            for(int i = 0; i < N; ++i)
            {
                ary[i] = new int[N];
            }
            for(int i = 0;i < N;i++)
            {
                for(int j = 0;j < N;j++)
                {
                    ary[j][i] = 0;
                    if((j == 1)&&(i == 1))
                       ary[j][i] = 1;
                    if((j == 1)&&(i == 3))
                       ary[j][i] = 1;
                    if((j == 2)&&(i == 1))
                       ary[j][i] = 1;
                    if((j == 2)&&(i == 3))
                       ary[j][i] = 1;   
                    if((j == 3)&&(i > 0)&&(i < 4))
                       ary[j][i] = 1;   
                    if((j == B)&&(i == A))
                       ary[j][i] = 2; 
                    if((j == D)&&(i == C))
                       ary[j][i] = 3; 
                }
            }
for(int i = 0;i < N;i++)
    {
        for(int j = 0;j < N;j++)
        {
            cout << ary[j][i];
        }
        cout << endl;
    }
        }
}
