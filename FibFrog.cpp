// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    //testcase
    //std::fill(A.begin(), A.end(), 1);
    //A.resize(100000,1);

    //add destination

    A.push_back(1);
    //int position = -1;
    vector<int> Fibonacci;
    vector<int>::iterator it2;
    int distance = A.size();
    int first = 0;
    int second = 1;
    int next = 2;
    //get fibonaccis up to distance
    Fibonacci.push_back(first);
    Fibonacci.push_back(second);
    Fibonacci.push_back(next);
    while(next < distance)
    {
        first = second;
        second = next;
        next = first + second;
        Fibonacci.push_back(next);
    }
    //count hops to other side
    //loop through leaves ahead
    int pos = -1;
    int hops = 0;
    //cout << A.size() << endl;
    /*for(int i = 0;i < A.size();i++)
    {
        if(A[i] == 1)
        {
            it2 = find (Fibonacci.begin(), Fibonacci.end(), A[i] - pos);
            if(it2 < Fibonacci.end())
            {
                hops++;
                pos = A[i];
                cout << i << endl;
                if(i == A.size()-1)
                {
                    return hops;
                }
            }
        }
    }
    return -1;*/
    for(int i = A.size()-1;i >= 0;i--)
    {
        //cout << "index " << i << endl;
        if(A[i] == 1)
        {
            //cout << i << "is a leaf" << i - pos << " of a hop away"<< endl;
            it2 = find (Fibonacci.begin(), Fibonacci.end(), i - pos);
            if(it2 < Fibonacci.end())
            {
                hops++;
                pos = i;
                //cout << i << endl;
                if(i == A.size()-1)
                {
                    return hops;
                }
                i = A.size();
            }
        }
    }
    return -1;
    /*for(int hop = A.size();hop > position;hop--)
    {
        //is distance a fibonacci
        vector<int>::iterator it2;
        it3 = find (semiprimes.begin(), semiprimes.end(), y);
         
        //if(position + hop)
    }*/
    
}
