

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;



// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int max_profit = 0;
    for(int x = 0;x < A.size();x++)
    {
        for(int y = x;y < A.size(); y++)
        {
            int profit = A[y] - A[x];
            if(profit > max_profit)
            {
                //cout << y << " " << x << endl;
                max_profit = profit;
            }
        }
    }
    return max_profit;

}


