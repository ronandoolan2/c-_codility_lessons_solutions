// you can use includes, for example:
// #include <algorithm>
#define noop
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    int stream = 0;
    int fish_size = 0;
    //int survived = 0;
    vector<int> survived;
    for(int x = 0;x < A.size();x++)
    {
        //cout << "x " << x << endl;
        if(survived.size() < 1)
        {
            if(B[x] == 0)
            {
               survived.push_back(A[x]);
            }
            else
            {
                survived.push_back(-A[x]);
            }
        }
        else
        {
            if((survived.back() < 0)&&(B[x] == 0))
            {
                
                while(survived.back() < 0)
                {
                   //they meet
                   if((survived.back() + A[x]) < 0)
                   {
                       //cout << 1 << " eats" << endl;
                       goto endloop;
                   }    
                   else
                   {
                       survived.pop_back();
                       //survived.push_back(A[x]);
                   }
                }
                survived.push_back(A[x]);
            }
            else
            {
                //cout << "add " << x << endl;
                if(B[x] == 0)
                {
                    survived.push_back(A[x]);
                }
                else
                {
                    survived.push_back(-A[x]);
                }
            }
            
        }
        endloop: noop;
    }
    return survived.size();
}
