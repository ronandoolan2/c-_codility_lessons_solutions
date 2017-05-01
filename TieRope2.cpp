// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <iostream>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
using namespace std;

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
    while(shortest_rope < K)
    {
        
        //check for left or right
        if(it2 <= A.begin())
        {
            if(it2 >= A.end())
            {
                //last element
                return 0;
            }
            else
            {
                //no left add right
                int position = it2 - A.begin() ;
                cout << "start position " <<position << " add right"<<endl;
                A[position + 1] = A[position + 1] + A[position];
                A.erase(it2);  
                //delete A[position];
                //*it2.clear();
                cout << "done" << endl;
            }
        }
        if(it2 >= A.end())
        {
            //add left
            int position = it2 - A.begin() ;
            cout << "end position " <<position << "add left"<< endl;
            A[position - 1] = A[position - 1] + A[position];
            A.erase(it2);   
            cout << "done " << endl;
        }
        else
        {
            int position = it2 - A.begin();
            //check is left smaller
            if(A[position - 1] <= A[position + 1])
            {
                cout << "middle position " <<position << " add left" << endl;
                A[position - 1] = A[position - 1] + A[position];
                A.erase(it2);   
                cout << "done " << endl;
            }
            else
            {
                cout << "middle position " <<position << " add right"<<endl;
                A[position + 1] = A[position + 1] + A[position];
                A.erase(it2);  
            }
        }
        /*it2 = find (A.begin(), A.end(), shortest_rope);
        if (it2 != A.end())
        {
            //check for left
            if((it2 - 1) < A.begin())
            {
                //cout << "no left" << endl;
                auto position = it2 - A.begin() ;
                //cout << "position " <<position << endl;
                A[1] = A[0] + A[1];
                A.erase(it2);
            }
            else if((it2 + 1) > A.end())            //check for right
            {
                //cout << "no right" << endl;
                auto position = it2 - A.begin() ;
                //cout << "position " <<position << endl;
                A[position-1] = A[position] + A[position-1];
            }
            else if(*(it2 - 1) < *(it2 +1))            //is left or right shorter
            {
                //cout << "tie " << *(it2 - 1) << " and  " << *it2 << endl;
                auto position = it2 - A.begin() ;
                //cout << position << endl;
                A[position-1] = A[position] + A[position-1];
                //int left = *(it2 - 1);
                //*(it2 - 1) = 5;//*(it2) + left;
                //std::transform(v.begin(), v.end(), v.begin(), [mean](int i) -> int { return i - mean; });
                A.erase(it2);
                //cout << "A is now " << A.size() << endl; 
            }
            else
            {
                //int right = *(it2 + 1);
                //*(it2 + 1) = 5;//*(it2) + right;
                auto position = it2 - A.begin() ;
                //cout << position << endl;
                A[position+1] = A[position] + A[position+1];
                A.erase(it2);
                //cout << "A is now " << A.size() << endl; 
            }
            //*(it2) = *(it2) + 2;
        }*/
        shortest_rope = *std::min_element(A.begin(), A.end());
        cout << "shortest rope " << shortest_rope << endl;
        it2 = std::min_element(A.begin(), A.end());
        //cout << shortest_rope << " is shortest " << endl;
    }
    cout << "exited " << endl;
    cout << A.size() << endl;
    int ans = A.size();
    for( int i = 0 ; i < A.size(); i++)
    {
       cout << i << " "<<A[i] << endl;
    }
    cout << ans << endl;
    //delete &A;
    //delete &shortest_rope;
    A.clear();
    return 1;//A.size();
}

int main()
{
   vector<int> A;
   A.push_back(1);
   A.push_back(2);
   A.push_back(3);
   A.push_back(4);
   A.push_back(1);
   A.push_back(1);
   A.push_back(3);
   int x = solution(4, A);
   cout << x << endl;
}
