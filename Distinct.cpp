// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    //vector<int> A2 = A;
   /*A.clear();
    for(int k = 0;k < 100000;k++)
    {
        A.push_back(1);
    }*/
    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    /*for (vector<int>::const_iterator i = A.begin(); i != A.end(); ++i)
       cout << *i << endl;*/
    return A.size();
    /*int mycount = 0;
    for (vector<int>::const_iterator i = A.begin(); i != A.end(); ++i)
    {
       mycount = std::count (A2.begin(), A2.end(), *i);
       //cout << *i << " occurs " << mycount << endl;
       if(mycount == 1)
       {
           return *i;
       }
    }*/
}
