

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    

    //std::fill(A.begin(), A.end(), 1);
    //A.resize(50000,1);
    vector<int> sA = A;
    vector<int> res(A.size(), A.size());
    sort(sA.begin(), sA.end());
    //sA.erase(unique(sA.begin(), sA.end()), sA.end());
    //cout << A.size() << endl;
    for(int i = 0;i < A.size();i++)
    {
        int x = 0;
        while((sA[x] < (A[i] + 1))&&(x < A.size()))
        {
            /*if(x == i)
            {
                x++;
                if(sA[x] < A[i])
                {
                    break;
                }
            }*/
            //cout << A[i] << " " << sA[x] << endl;
            if((A[i] % sA[x]) == 0)
            {
                res[i]--;
            }
            //cout << A[i] << " " << sA[x] << " " << A[i] % sA[x] << endl;
            x++;
        }
        //cout << res[i] << endl;
    }
    return res;
}


