// you can use includes, for example:
// #include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    int squigly_bracket = 0;
    int square_bracket = 0;
    int round_bracket = 0;
    char latest = '0';
    if(S.empty())
        return 1;
    else
    {
        int x = 0;
        while((round_bracket >= 0))
        {
            if((int)S[x] == 40)
            {
                round_bracket++;
                latest = '(';
                //break;
            }
            if((int)S[x] == 41)
            {
                round_bracket--;
                if((latest != '(')&&(latest != '0'))
                    break;
                else
                    latest = '0';
                //break;
            }

            if(x == strlen(S.c_str()))
            {
                if((round_bracket == 0))
                {
                   return 1;
                }
                else
                {
                    return 0;
                }
            }
            x++;
        }
        //loop through string
        return 0;
    }

}
