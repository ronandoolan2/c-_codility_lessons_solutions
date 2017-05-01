

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    //convect S to vector<int>
    vector<int> impact_factor;
    vector<int> M;
    for(int i = 0;i < S.size();i++)
    {
        if(S[i] == 'A')
        {
            impact_factor.push_back(1);
        }
        else if(S[i] == 'C')
        {
            impact_factor.push_back(2);
        }
        else if(S[i] == 'G')
        {
            impact_factor.push_back(3);
        }
        else
        {
            impact_factor.push_back(4);            
        }
    }
    //cout << impact_factor.size() << endl;
    for(int y = 0;y < P.size();y++)
    {
        if(Q[y] == impact_factor.size() - 1)
        {
            M.push_back(*std::min_element(impact_factor.begin()+P[y], impact_factor.end()));
        }
        else
        {
            M.push_back(*std::min_element(impact_factor.begin()+P[y], impact_factor.begin()+Q[y]));
        }
    }
    return M;
}

