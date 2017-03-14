

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int ans = -1;
    //cout << "size " << A.size() << " " << sizeof(A[0]) << endl;
    for(unsigned int i = 0;i < A.size();i++)
    {
        int total = 0;
        int total2 = 0;
        for(unsigned int j = 0;j < i;j++)
        {
            total = total+A[j];  
        }
        for(unsigned int k = i+1;k < A.size();k++)
        {
            //cout << "k " << k << endl;
            total2 = total2 + A[k];
        }
        //cout << "for " << i << " " << total << " compared with " << total2 << endl;
        if(total == total2)
        {
            ans = i;
        }
    }
    return ans;
}


