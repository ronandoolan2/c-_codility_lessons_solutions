#include <iostream>
#include <string>
#include <cstring>
#include<vector>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    int squigly_bracket = 0;
    int square_bracket = 0;
    int round_bracket = 0;
    vector<int> nest;
    char latest = '0';
    if(S.empty())
        return 1;
    for(int i = 0;i < S.size();i++)
    {
        //cout << S[i] << endl;
        if(((int)S[i] == 40)||((int)S[i] == 123)||((int)S[i] == 91))
        {
            nest.push_back((int)S[i]);
        }
        else
        {
            //cout << nest.back() << " " << (int)S[i] << endl;
            if((nest.back() == (int)S[i]-1)||(nest.back() == (int)S[i]-2))
            {
                nest.pop_back();
            }
            else
            {
                return 0;
            }
        }
    }
    return 1;
}
