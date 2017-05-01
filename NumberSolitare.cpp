// you can use includes, for example:
#include <algorithm>
#include <math.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    //std::fill(A.begin(), A.end(), -10000);
    //A.resize(100000,-10000);

    int marked = A[0];
    /*if(A.size() < 2)
    {
        return marked;
    }*/
    vector<int>::iterator next_most_square;
    for (std::vector<int>::const_iterator it = A.begin() + 1; it != A.end(); ++it)
    {
        if(it+5 < A.end())
        {
           //cout << "before end" << endl;
           //cout << *std::max_element(it, it+5) << endl;
           marked= marked + *std::max_element(it, it+5);
           it = std::max_element(it, it+5);
        }
        else
        {
            int x = A.end() - it;
            if(*std::max_element(it, it + x) <= 0)
            {
                //cout << "last square" << x << endl;
                //cout << *(A.end()-1) << endl;
                //next_most_square = A.end();
                marked = marked + *(A.end()-1);
                break;
                //it = A.end();
            }
            else
            {
                //next_most_square = std::max_element(it, A.end());
                marked = marked + *std::max_element(it, it + x);//.push_back(*std::max_element(it, A.end()));
                //cout << *std::max_element(it, it + x) << endl;
                it = std::max_element(it, it + x);
                //it = std::max_element(it, A.end());
            }
        }
        //it = next_most_square;
    }
    return marked;
}
