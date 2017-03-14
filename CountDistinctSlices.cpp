

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int M, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int unique_slices = 0;
    for(int x = 0;x < A.size();x++)
    {
        //cout << "x " << x << " " << A.size() << endl;
        for(int y = 1;x + y < (A.size() + 1);y++)
        {
            //doesnt enter here for >2?
            vector<int> slice(A.begin()+x, A.begin()+x+y); 
            vector<int> unique_slice(A.begin()+x, A.begin()+x+y); 
            sort(unique_slice.begin(), unique_slice.end());
            unique_slice.erase(unique(unique_slice.begin(), unique_slice.end()), unique_slice.end());
            //cout << "slice " << slice.size() << " " << unique_slice.size() << endl;
            if((slice.size() == unique_slice.size()) && (slice.size() > 0))
            {
                //cout << x << " " << x + y << endl;
                unique_slices++;
            }

        }
    }
    return unique_slices;
}


