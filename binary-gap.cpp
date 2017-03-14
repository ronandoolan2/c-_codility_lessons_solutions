

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <bitset> 

using namespace std;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    std::bitset<32> b;
    b = std::bitset<32>(N);
    //std::cout << std::bitset<32>(N);
    //ones = b.count();
    int count = -1;
    int greatest_count = 0;
    for(int x = 32;x >= 0;x-- )
    {
       if(b[x] == 1)
       {
           if(count > greatest_count)
           {
               greatest_count = count;
           }
           count = 0;
       }
       else if(count >= 0)
       {
           count++;

       }
    }
    return greatest_count;
}


