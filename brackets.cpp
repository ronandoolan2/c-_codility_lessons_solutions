

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
        while((squigly_bracket >= 0)&&(square_bracket >= 0)&&(round_bracket >= 0))
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
            if((int)S[x] == 123)   
            {
                squigly_bracket++;
                latest = '{';
                //break;
            }
            if((int)S[x] == 125)   
            {
                squigly_bracket--;
                if((latest != '{')&&(latest != '0'))
                    break;
                else
                    latest = '0';
                //break;
            }
            if((int)S[x] == 91)   
            {
                square_bracket++;
                latest = '[';
                //break;
            }
            if((int)S[x] == 93)   
            {
                square_bracket--;
                if((latest != '[')&&(latest != '0'))
                    break;
                else
                    latest = '0';
            }
            if(x == strlen(S.c_str()))
            {
                if((square_bracket == 0)&&(squigly_bracket == 0)&&(round_bracket == 0))
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


