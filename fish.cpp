

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    int stream = 0;
    int fish_size = 0;
    int survived = 0;
    for(int x = 0;x < A.size();x++)
    {
        //cout << "stream " << stream << " fish size " << fish_size << endl;
        if(B[x] == 1)
        {
           stream = 1;
           fish_size = A[x];
           continue;
        }
        if(stream == 0)
        {
            survived++;
            continue;
        }

        if(fish_size > A[x])
        {
            continue;
        }
        else
        {
            fish_size = 0;
            stream = 0;
        }
        
    }
    return survived+1;
}


