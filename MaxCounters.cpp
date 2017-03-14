

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    vector<int> V;
    for(int k =0; k < N; k++)
    {
        V.push_back(0);
    }
    int* arr = &V[0];
    //return V;
    //int arr[N] = {0};
    int max_counter = 0;
    //vector<int> B ();
    for (vector<int>::const_iterator i = A.begin(); i != A.end(); ++i)
    {
        if(*i <= N)
        {
            //increase(X)
            arr[(*i-1)]++;
            if(arr[(*i-1)] > max_counter)
            {
                max_counter = arr[(*i-1)];
            }
        }
        else
        {
            for(int j =0;j < N;j++)
            {
                arr[j] = max_counter;
            }
        }
    }
    return V;
}


