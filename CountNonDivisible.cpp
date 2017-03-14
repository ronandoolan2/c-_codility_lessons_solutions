

// you can use includes, for example:
#include <algorithm>
#include <math.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    //int non-divisors = 0;
    vector<int> ans;
    for(int i = 0;i < A.size();i++)
    {
        //get factors of A[i]
        vector<int> factors;
        factors.push_back(1);
        vector<int>::iterator it2;
        it2 = find (factors.begin(), factors.end(), A[i]);
        if (it2 == factors.end())
        {
            factors.push_back(A[i]);
        }
        int sqroot = sqrt(A[i]);
        if(sqroot != 1)
        {
            cout << A[i] << " " << sqroot << endl;
            if((A[i] % sqroot) == 0)
            {
                factors.push_back(sqrt(A[i]));
            }
        }
        //if(sqrt(i)*sqrt(i))
        for(int j = 2;j < sqrt(i);j++)
        {
            if((A[i] % A[j]) == 0)
            {
                it2 = find (factors.begin(), factors.end(), A[j]);
                if (it2 == factors.end())
                {
                    cout << A[j] << "this is a factor of" << A[i] << endl; 
                    factors.push_back(A[j]);
                }
             //cout << A[j] << "this is a factor of" << A[i] << endl; 
                it2 = find (factors.begin(), factors.end(), A[i]/A[j]);
                if (it2 == factors.end())
                {
                    factors.push_back(A[i]/A[j]);
                }
            }
        }
        //print factors
        sort(factors.begin(), factors.end());
        for (std::vector<int>::const_iterator it = factors.begin(); it != factors.end(); ++it)
        {
            cout << "factor " << *it << endl;
        }

        //find and count factors
        int factor_count = 0;
        for(int k = 0;k < A.size();k++)
        {
            if(k == i)
            {
                continue;
            }
            cout << "search for " << A[k] << endl;
            vector<int>::iterator it3;
            it3 = find (factors.begin(), factors.end(), A[k]);
            if (it2 != factors.end())
            {
                factor_count++;
            }
        }
        cout << "factor_count" << factor_count << endl;
        //non-divisors = A.size - factors
        int non_divisors = (A.size()+1) - factor_count;
        ans.push_back(non_divisors);
        
    }
    return ans;
}


