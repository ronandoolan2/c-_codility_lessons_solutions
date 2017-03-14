#include <algorithm>


int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> A2 = A;
    //sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    int mycount = 0;
    for (vector<int>::const_iterator i = A.begin(); i != A.end(); ++i)
    {
       mycount = std::count (A2.begin(), A2.end(), *i);
       //cout << *i << " occurs " << mycount << endl;
       if(mycount == 1)
       {
           return *i;
       }
    }
}
