// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;



// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> peaks;
    vector<int> valleys
    int max_profit;
    //int max_blocks = 0;
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
                    peak.push_back(*it);
                }
            }
            //if(peak == //number of blocks)
        }
    }
    for(int i = 3;i < (A.size()/2);i++)
    {
        if(((A.size()) % i) != 0)
        {
            continue;
        }
        //cout << "checking " << i << endl;
        int valley = 0;
        //check for peaks in each block
        for(int j = 0;j < (A.size()/i);j++)
        {

            //check for valley in block k
            for (vector<int>::const_iterator it=(A.begin() + j*i + 1); it!=(A.begin() + (j+1)*i); ++it)
            {
                if((*(it-1) > *it)&&(*it < *(it + 1)))
                {
                    valley.push_back(*it);
                }
            }
            //if(peak == //number of blocks)
        }
    }
    for (std::vector<int>::const_iterator it = valleys.begin(); it != valleys.end(); ++it)
    {
        vector<int>::iterator it2;
        it2 = find (A.begin(), A.end(), *it);
        for (std::vector<int>::const_iterator it3 = peaks.begin(); it3 != peaks.end(); ++it3)
        {
            
        }
        //cout << "valley " << *it << endl;
        
    }
    //return max_blocks;
}
