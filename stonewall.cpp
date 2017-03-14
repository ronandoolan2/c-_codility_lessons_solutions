// you can use includes, for example:
#include <algorithm>
#include <climits>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &H) {
    // write your code in C++14 (g++ 6.2.0)
    int height = INT_MAX;
    int last_height = INT_MAX;
    int blocks = 0;
    vector<int> block;
    for(int i = 0;i < H.size();i++)
    {
        if(H[i] < height)
        {
            if()
            block.push_back(H[i]);
            height = H[i];
            block++;
        }
        else if(H[i] == height)
        {
            continue;
        }
        else if
        {
            block++;
        }
    }
}
