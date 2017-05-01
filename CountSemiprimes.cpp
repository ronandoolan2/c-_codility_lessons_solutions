

// you can use includes, for example:
#include <algorithm>
#include <math.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> primes;
    vector<int> semiprimes;
    primes.push_back(2);
    primes.push_back(3);
    semiprimes.push_back(4);
    int largest_int = *std::max_element(Q.begin(), Q.end());
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
        //get semiprimes
    for (std::vector<int>::const_iterator it = primes.begin(); it != primes.end(); ++it)
    {
        int prime = *it;
        if(prime*prime > largest_int)
        {
            break;
        }
        for(int k = 0;k < primes.size();k++)
        {
            int prime1 = *it;
            if(it+k > primes.end())
            {
                break;
            }
            int prime2 = *(it+k);
            int semiprime = prime1*prime2;
            //cout << prime1 << " " << prime2 << " " << semiprime << endl;
            if(prime1*prime1 > largest_int)
            {
                break;
            }
            if(semiprime <= largest_int)
            {
                vector<int>::iterator it2;
                it2 = find (semiprimes.begin(), semiprimes.end(), semiprime);
                if (it2 == semiprimes.end())
                {
                    semiprimes.push_back(semiprime);
                }

            }
            else
            {
                break;
            }
        }
        //cout << "added primes for " << *it << endl;
    }
    //check semiprimes
    sort(semiprimes.begin(), semiprimes.end());
    /*for (std::vector<int>::const_iterator it = semiprimes.begin(); it != semiprimes.end(); ++it)
    {
        cout << "semiprime " << *it << endl;
    }*/
    //return P;
    //loop through P&Q
    vector<int> ans;

    for(int z = 0;z < P.size();z++)
    {
        int M = 0;
        //loop through each set
        for(int y = P[z];y < Q[z]+1;y++)
        {
            //cout << "y " << y << endl;
            vector<int>::iterator it3;
            it3 = find (semiprimes.begin(), semiprimes.end(), y);
            if (it3 != semiprimes.end())
            {
                //cout << "semiprime " << endl;
                M++;
            }
        }
        //cout << "M " << M << endl; 
        ans.push_back(M);
    }
    return ans;
}


