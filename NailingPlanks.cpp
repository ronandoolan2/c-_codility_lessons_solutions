// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B, vector<int> &C) {
    // write your code in C++14 (g++ 6.2.0)
    // write your code in C++14 (g++ 6.2.0)
    sort(C.begin(), C.end());
    vector<int> usefulC;
    //int current_nail = -1;
    //if only one plank nail that
    if(A.size() < 2)
    {
       for(int i = 0;i < C.size();i++)
       {
           if((C[i] >= A[0])&&(C[i] <= B[0]))
           {
               usefulC.push_back(C[i]);
               break;
           }
       }
       if(usefulC.size() != 0)
          return 1;
       else
          return -1;
       //return A.size();
    }
    else
    {
        //nail first plank
       for(int i = 0;i < C.size();i++)
       {
           cout << "Nail " << i << " " << C[i] << " for plank " << A[0] << " " << B[0] << endl;
           if((C[i] >= A[0])&&(C[i] <= B[0]))
           {
               cout << "nail first plank with " << C[i] << endl;
               usefulC.push_back(C[i]);
               C.erase(C.begin() + i);
               break;
           }
       }
       //no nail found
       if(usefulC.size() == 0)
       {
           cout << "no nail found for first plank" << endl;
           return -1;
       }
        
    }

    int end = B[0];
    int x = 1;
    int count = 1;
    //sort through planks and nails
    while(x < A.size()-1)
    {
        while((A[x] <= usefulC.back())&&(usefulC.back() <= B[x]))
        {
            //cout << "Ax " << A[x] << " x " << x << " end " << end << endl; 
            x++;
        }
        cout << "new cluster " << x << endl;
        //new cluster of planks new nail needed
        //end = B[x];
        if(x < A.size()-1)
        {
            //count++;
            x++;
            //find new nail
            cout << "find nail " << x << endl;
            for(int i = 0;i < C.size();i++)
            {
               if((C[i] >= A[x])&&(C[i] <= B[x]))
               {
                   usefulC.push_back(C[i]);
                   C.erase(C.begin(), C.begin() + i);
                   break;
               }
               //it is sorted so C should not be greater than B
               if(C[i] > B[x])
               {
                   cout << "none found for " << x << " " << B[x] << endl;
                   return -1;
               }
            }
        }
    }
    return usefulC.size();
}

