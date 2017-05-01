

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <algorithm>
#include <numeric>
#include <climits>
#include <stdlib.h>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector< vector<int> > Ps;
    vector< vector<int> > Ss;
    int sets = 0;
    for(int i = 0;i < A.size();i++)
    {
        vector<int> P(A.begin(), A.begin()+i+1);
        sort(P.begin(), P.end());
        P.erase(unique(P.begin(), P.end()), P.end());
        Ps.push_back(P);
        vector<int> S(A.begin()+i, A.end());
        sort(S.begin(), S.end());
        S.erase(unique(S.begin(), S.end()), S.end());
        Ss.push_back(S);
    }
    for(int i = 0;i < A.size();i++)
    {
        for(int j = 0;j < A.size();j++)
        {
     //       cout << i << " "<<Ps[i].size() << " " << j <<" " << Ss[j].size() << endl;
            if(Ps[i] == Ss[j])
            {
                //cout << i << " " << j << endl;
                sets++;
            }
        }
    }
    return sets;
    
}


