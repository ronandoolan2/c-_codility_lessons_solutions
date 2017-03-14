

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int max_blocks = 0;
    //cout << A.size()/2 << endl;
    for(int i = 3;i < (A.size()/2);i++)
    {
        if(((A.size()) % i) != 0)
        {
            continue;
        }
        //cout << "checking " << i << endl;
        int peak = 0;
        //check for peaks in each block
        for(int j = 0;j < (A.size()/i);j++)
        {

            //check for peak in block k
            for (vector<int>::const_iterator it=(A.begin() + j*i + 1); it!=(A.begin() + (j+1)*i); ++it)
            {
                if((*(it-1) < *it)&&(*it > *(it + 1)))
                {
                    peak++;
                }
            }
            //if(peak == //number of blocks)
        }
        if(peak == (A.size()/i))
        {
            if(max_blocks < (A.size()/i))
            {
                return (A.size()/i);
            }
        }
    }
    return max_blocks;
}


