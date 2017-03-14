// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <bitset> 
#include <iostream>

using namespace std;

int main() {
    int N = 2147483647;
    // write your code in C++14 (g++ 6.2.0)
    std::bitset<32> b;
    std::bitset<16> c;
    b = std::bitset<32>(N);
    cout << b.count() << endl;
    cout << c.count() << endl;
    /*std::cout << std::bitset<32>(N);
    for(int x = 32;x >= 0;x++)
    {
        cout << b[x] << endl;   
    }*/
}
