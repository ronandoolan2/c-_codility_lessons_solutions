

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    //find unique numbers 
    //vector<int> B = A;
    vector<int> res;
    //sort(B.begin(), B.end());
    //B.erase(unique(B.begin(), B.end()), B.end());
    for(int i = 0;i < A.size();i++)
    {
        //cout << i << " " << A[i] << endl; 
        int k = A[i];
        int value = 0;
        vector<int> pA((A.begin()+i+1),A.end());
        pA.erase(std::remove_if(pA.begin(), pA.end(),[&k](int x){ return x <= k;}), pA.end());
        //find distance to closest
        if(pA.size() == 0)
        {
            res.push_back(0);
            //cout << "*" << 0 << endl;
            continue;
        }
        for(int v = 1;v < A.size();v++)
        {
            if((i+v) < A.size())
            {
               if(A[i+v] == pA[0])
               {
                   //cout << A[i+v] << "*" << v << endl;
                   res.push_back(v);
                   value = v;
                   break;
               }
            }
            if((i-v)>= 0)
            {
               if(A[i-v] == pA[0])
               {
                   //cout << A[i+v] << "*" << v << endl;
                   res.push_back(v);
                   value = v;
                   break;
               }
            }
        }
        if(value = 0)
        {
            //cout << "*" << 0 << endl;
            res.push_back(value);
        }
    }
    return res;    
}
