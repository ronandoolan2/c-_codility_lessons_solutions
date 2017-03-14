// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int max_flags = 0;
    //cout << A.size()/2 << endl;
    int max_peaks = ((A.size()-1)/2);
    //find first peak
    vector<int>::const_iterator first_peak;
    for (vector<int>::const_iterator it=(A.begin()+1); it!=A.end(); ++it)
    {
        if((*(it-1) < *it)&&(*it > *(it + 1)))
        {
            //set first peak
            first_peak = it;
            break;
        }
    }
    //cout << "first_peak" << *first_peak << endl;
    for(int flags = 1;flags < max_peaks;flags++)
    {
        //cout << flags << endl;
        int flags_remaining = flags - 1;
        for (vector<int>::const_iterator it=first_peak+flags; it!=A.end(); ++it)
        {
            if(flags_remaining == 0)
            {
                break;
            }
            //check are you on a peak
            if((*(it-1) < *it)&&(*it > *(it + 1)))
            {
                //put a flag down
                //first_peak = it;
                //break;
                flags_remaining--;
                it = it + flags;
                if(it > A.end())
                {
                    break;
                }
            }
        }
        int total_flags_put_down = flags - flags_remaining;
        //cout << total_flags_put_down << endl;
        if(total_flags_put_down > max_flags)
        {
            max_flags = total_flags_put_down;
        }
    }
    return max_flags;
    /*for(int i = 3;i < (A.size()/2);i++)
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
    return max_blocks;*/
}
