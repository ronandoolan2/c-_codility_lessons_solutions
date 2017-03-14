// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    //add destination
    A.push_back(1);
    int position = -1;
    vector<int> Fibonacci;
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
    for(int hop = A.size();hop > position;hop--)
    {
        //is distance a fibonacci
        vector<int>::iterator it2;
        it3 = find (semiprimes.begin(), semiprimes.end(), y);
         
        //if(position + hop)
    }
    
}
