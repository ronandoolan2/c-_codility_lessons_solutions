// you can use includes, for example:
#include <algorithm>
//#include <climit>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    //cout << A.size();
    int max_double_slice = 0;
    int double_slice = 0;
    for(int x = 0;x < (A.size()-2);x++)
    {
        for(int y = x+1;y < (A.size() - 1);y++)
        {
            for(int z = y+1; z < (A.size());z++)
            {
                double_slice = A[x+1] + A[x+2] + A[y-1] + A[y+1] + A[y+2] + A[z-1] ;
                cout << A[x+1] << "+" << A[x+2] <<"+" <<  A[y-1] <<"+" <<  A[y+1] << "+" << A[y+2] << "+" << A[z-1] << endl;
                if(double_slice > max_double_slice)
                {
                    cout << x << " " << y << " " << z << endl;
                    max_double_slice = double_slice;
                }
            }
        }
    }
    return max_double_slice;
}
