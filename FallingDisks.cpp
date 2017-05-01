

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    //drop disks in order
    A.push_back(0);//bottom_of_well
    int disks = 0;
    for(int i =0;i < B.size();i++)
    {
        //cout << i << endl;
        if(A[0] >= B[i])
        {
            for(int j = 0;j < A.size()+1;j++)
            {
                if(A[j+1] < B[i])
                {
                    //cout << i << "stuck at " << j+1 << endl;
                    A[j] = 0;
                    disks++;
                    break;
                }
            }
        }
        else
        {
            return disks;
        }
    }
    return disks;
}


