// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int K, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int shortest_rope = *std::min_element(A.begin(), A.end());
    if(A.size() < 2 && shortest_rope < K)
    {
        return 0;
    }
    while(shortest_rope < K)
    {
        vector<int>::iterator it2;
        it2 = find (A.begin(), A.end(), shortest_rope);
        if (it2 != A.end())
        {
            //check for left
            if((it2 - 1) < A.begin())
            {
                //cout << "no left" << endl;
                auto position = it2 - A.begin() ;
                //cout << "position " <<position << endl;
                A[1] = A[0] + A[1];
                A.erase(it2);
            }
            else if((it2 + 1) > A.end())            //check for right
            {
                //cout << "no right" << endl;
                auto position = it2 - A.begin() ;
                //cout << "position " <<position << endl;
                A[position-1] = A[position] + A[position-1];
            }
            else if(*(it2 - 1) < *(it2 +1))            //is left or right shorter
            {
                //cout << "tie " << *(it2 - 1) << " and  " << *it2 << endl;
                auto position = it2 - A.begin() ;
                //cout << position << endl;
                A[position-1] = A[position] + A[position-1];
                //int left = *(it2 - 1);
                //*(it2 - 1) = 5;//*(it2) + left;
                //std::transform(v.begin(), v.end(), v.begin(), [mean](int i) -> int { return i - mean; });
                A.erase(it2);
                //cout << "A is now " << A.size() << endl; 
            }
            else
            {
                //int right = *(it2 + 1);
                //*(it2 + 1) = 5;//*(it2) + right;
                auto position = it2 - A.begin() ;
                //cout << position << endl;
                A[position+1] = A[position] + A[position+1];
                A.erase(it2);
                //cout << "A is now " << A.size() << endl; 
            }
            //*(it2) = *(it2) + 2;
        }
        shortest_rope = *std::min_element(A.begin(), A.end());
        //cout << shortest_rope << " is shortest " << endl;
    }
    //cout << "exited " << endl;
    //cout << A.size() << endl;
    return A.size();
}
