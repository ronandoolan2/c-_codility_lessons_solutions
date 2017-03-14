

// you can use includes, for example:
// #include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iterator>
#include <algorithm>


// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    int i = strlen(S.c_str())/2;
    int l = strlen(S.c_str());
    //cout << S[i] << endl;
    std::string left = S.substr (0,i); 
    std::reverse(std::begin(left), std::end(left));
    std::string right = S.substr (i+1,l);
    /*cout << left << " " << right << endl;
    cout << left.compare(right) << endl;
    cout << left.size() << endl;*/
    if((left.size() != 0) && (left.compare(right) == 0))
        return i;
    else if (left.size() == 0)
        return 0;
    else
        return -1;
}


