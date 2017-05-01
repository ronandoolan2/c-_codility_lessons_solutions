// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &H) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> blocks;
    int number_blocks = 0;
    for(int i = 0;i < H.size();i++)
    {
        if(blocks.size() < 1)
        {
            blocks.push_back(H[i]);
            continue;
        }
        if(blocks.back() < H[i])
        {
            blocks.push_back(H[i]);
        }
        if(blocks.back() == H[i])
        {
            continue;
        }
        while(blocks.back() > H[i])
        {
            blocks.pop_back();
            number_blocks++;
        }
        if(blocks.back() < H[i])
        {
            blocks.push_back(H[i]);
        }
        if(blocks.back() == H[i])
        {
            continue;
        }
    }
    return number_blocks + blocks.size();
}
