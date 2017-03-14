

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    int count = 0;
    // write your code in C++14 (g++ 6.2.0)
    for(int i = 0;i < A.size();i++)
    {
        for(int j = i+1;j < A.size();j++)
        {
            int d = j - i;
            long long int total = 0;
            total = total + A[i];
            total = total + A[j];
            if(d > total)
            {
                continue;
            }
            else
            {
                count++;
            }
            if(count > 10000000)
            {
                return -1;
            }
            //cout << i << " " << j << " intersect " << count << endl;
        }
    }
    return count;
}


