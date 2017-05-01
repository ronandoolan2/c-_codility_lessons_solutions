

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size() < 2)
       return A.size();
    int end = B[0];
    int x = 1;
    int count = 1;
    while(x < A.size())
    {
        while(A[x] <= end)
        {
            //cout << "Ax " << A[x] << " x " << x << " end " << end << endl; 
            x++;
        }
        //cout << "new cluster " << x << endl;
        
        end = B[x];
        if(x < A.size())
        {
            count++;
            x++;
        }
    }
    return count;
}


