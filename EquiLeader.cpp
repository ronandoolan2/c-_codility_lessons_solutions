

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> A2 = A;
    int most_freq = 0;
    int mycount = 0;
    int leader = -1;
    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    for (vector<int>::const_iterator it=A.begin(); it!=A.end(); ++it)
    {
        //std::cout << ' ' << *it;
        mycount = std::count (A2.begin(), A2.end(), *it);
        if(mycount > most_freq)
        {
            most_freq = mycount;
        }
        if(mycount > (A2.size()/2))
        {
            leader = *(find(A2.begin(), A2.end(), *it));// - A2.begin();
            //cout << pos << endl;
        }
    }
    int count1 = 0;
    int count2 = 0;
    int equi_leaders = 0;
    for(int s = 0;s < A2.size();s++)
    {
          count1 = std::count (A2.begin(), A2.begin() + (s+1), leader);
          count2 = std::count (A2.begin() + s+1, A2.end(), leader);
         //cout << s << " " << count1 << " "<< (A2.size()-(s+1)) << " " << count2 << endl;
          if((count1 > ((s+1)/2)) && (count2 > ((A2.size()-(s+1))/2)))
          {
              //cout << "equi" << endl;
              equi_leaders++;
          }   
    }
    return equi_leaders;
}


