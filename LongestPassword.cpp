

// you can use includes, for example:
// #include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    std::istringstream iss(S);
    int longest_password = 0;
    do
    {
        std::string sub;
        iss >> sub;
        //std::cout << "Substring: " << sub << std::endl;
        int countNumbers = 0;
        int countLetters = 0;        
        for ( size_t i = 0; i < sub.size(); i++ )
        { 
            if( isdigit(sub[i])) 
                { countNumbers++; }
            if( isalpha(sub[i])) 
                { countLetters++; }
        }
        //check for symbols
        if(countNumbers + countLetters == sub.size())
        {
            //check for odd number of digits
            if((countNumbers % 2) != 0)
            {
                //check for even number of letters
                if((countLetters % 2) == 0)
                {
                    if(sub.size() > longest_password)
                    {
                        longest_password = sub.size();
                    }
                }
            }
        }
    } while (iss);
    return longest_password;
}


