// you can use includes, for example:
#include <algorithm>
#include <math.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> primes;
    primes.push_back(2);
    primes.push_back(3);
    int Z = 0;
    int largest_int = max(*std::max_element(A.begin(), A.end()), *std::max_element(B.begin(), B.end()));
    //get primes
    for (int i=2; i<largest_int; i++)
    {
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
                break;
            else if (j+1 > sqrt(i)) 
            {
                primes.push_back(i);
            }
        }
    }
    //loop through A&B
    for(int i = 0;i < A.size();i++)
    {
       int same_primes = 0;
       for(int j = 0;j < primes.size();j++)
       {
           //cout << A[i] << " " << B[i] << " " << primes[j] << endl;
           //cout << "div " << (A[i] % primes[j]) << " " << B[i] << " " << B[i] % primes[j] << endl;
           if(((A[i] % primes[j]) == 0) && ((B[i] % primes[j]) != 0))
           {
               //cout << "not equal" << endl;
               same_primes = 1;
               break;
           }
           if(((A[i] % primes[j]) != 0) && ((B[i] % primes[j]) == 0))
           {
               //cout << "not equal" << endl;
               same_primes = 1;
               break;
           }
           if((primes[j] > A[i]) && (primes[j] > B[i]))
           {
               break;
           }
       }
       //cout << same_primes << endl;
       if(same_primes == 0)
       {
           Z++;
       }
    }
    return Z;
}
