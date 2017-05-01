

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int K, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int shortest_rope = *std::min_element(A.begin(), A.end());
    if(A.size() < 2)
    {
        if(shortest_rope < K)
            return 0;
        else
            return 1;
    }
    vector<int>::iterator it2;
    it2 = std::min_element(A.begin(), A.end());
    while((shortest_rope < K)&&(A.size() > 1))
    {
        
        //check for left or right
        if(it2 <= A.begin())
        {
            if(it2 >= A.end())
            {
                //cout << "last element" << endl;
                //last element
                return 0;
            }
            else
            {
                //no left add right
                int position = it2 - A.begin() ;
                //cout << "start position " <<position << " add right"<<endl;
                A[position] = A[position + 1] + A[position];
                A.erase(it2 + 1);  
                //delete A[position];
                //*it2.clear();
                //cout << "done" << endl;
            }
        }
        else if(it2 >= A.end())
        {
            //add left
            int position = it2 - A.begin() ;
            //cout << "end position " <<position << "add left"<< endl;
            A[position - 1] = A[position - 1] + A[position];
            //A[position] = A[position - 1] + A[position];
            A.erase(it2);   
            //cout << "done " << endl;
        }
        else
        {
            int position = it2 - A.begin();
            //check is left smaller
            if(A[position - 1] <= A[position + 1])
            {
                //cout << "middle position " <<position << " add left" << endl;
                A[position - 1] = A[position - 1] + A[position];
                A.erase(it2);   
                //cout << "done " << endl;
            }
            else
            {
                //cout << "middle position " <<position << " add right"<<endl;
                A[position + 1] = A[position + 1] + A[position];
                A.erase(it2);  
            }
        }
        //cout << A.size() << endl;
        shortest_rope = *std::min_element(A.begin(), A.end());
        //cout << "shortest rope " << shortest_rope << endl;
        it2 = std::min_element(A.begin(), A.end());
        //cout << shortest_rope << " is shortest " << endl;
    }
    //cout << "exited" << endl;
    if(shortest_rope >= K)
    {
       return A.size();
    }
    else
    {
        return 0;
    }
}


