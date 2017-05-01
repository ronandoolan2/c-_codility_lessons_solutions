// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <numeric>
#include <climits>
#include <stdlib.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N, int M) {
    // write your code in C++14 (g++ 6.2.0)
    //while not wrapper
    vector<int> eaten(N, 0);
    int wrapper = 0;    
    //vector<int> eaten;
    int chocolate = 0;
    while(wrapper != 1)
    {
        
        //vector<int>::iterator it2;
        //it2 = find (eaten.begin(), eaten.end(), chocolate);
        if (*(eaten.begin()+chocolate) == 0)
        {
            //cout << "eat " << chocolate << endl;
            *(eaten.begin()+chocolate) = 1;
        }
        else
        {
            //cout << "should exit" << endl;
            wrapper = 1;
            break;
        }
        //check for loop back
        if(chocolate + M > N - 1)
        {
            //cout << "loop back " << chocolate << " " << M << endl;
            chocolate = (chocolate + M) - N;
            while(chocolate > N - 1)
            {
                chocolate = chocolate - N;
            }
        }
        else
        {
            chocolate = chocolate + M;
        }
        //cout << "next chocolate" << endl;
    }
    //cout << "check eaten" << endl;
    //sort(semiprimes.begin(), semiprimes.end());
    /*for (std::vector<int>::const_iterator it = eaten.begin(); it != eaten.end(); ++it)
    {
        cout << "eaten " << *it << endl;
    }*/
    return std::accumulate((eaten.begin()), (eaten.end()), 0);
}
