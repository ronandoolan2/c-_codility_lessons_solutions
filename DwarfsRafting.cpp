// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <climits>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N, string &S, string &T) {
    // write your code in C++14 (g++ 6.2.0)
    vector<string> v;
    int** ary = new int*[N];
    for(int i = 0; i < N; ++i)
    {
        ary[i] = new int[N];
    }
    for(int i = 0;i < N;i++)
    {
        for(int j = 0;j < N;j++)
        {
            ary[i][j] = 0;
        }
    }
    //ary[1][4] = 1;
    //cout << "created NxN array" << endl;
    for(int h = 0;h < N;h++)
    {
        //cout << "populate row" << h << endl;
        for(int i = 0;i < S.size();i++)
        {
//            cout << S[i] << endl;
            int row = S[i] - '0';

            int column = S[i+1] - 64;
//            cout << row << " " << column << endl;
            if(row-1 == h)
            {
                ary[column-1][row-1] = 1;
                //cout << "next row" << endl;
            }
            i = i + 2;
        
        }
    }
    //add drawves from T
    for(int h = 0;h < N;h++)
    {
        //cout << "populate row" << h << endl;
        for(int i = 0;i < T.size();i++)
        {

            //cout << T[i] << endl;
            int row = T[i] - '0';

            int column = T[i+1] - 64;
//            cout << row << " " << column << endl;
            if(row-1 == h)
            {
                ary[column-1][row-1] = 2;
                //cout << "next row" << endl;
            }
            i = i + 2;
        
        }
    }
    //cout << "populated NxN array" << endl;
    /*for(int i = 0;i < N;i++)
    {
        for(int j = 0;j < N;j++)
        {
            cout << ary[j][i];
        }
        cout << endl;
    }*/
    //check for min number of 2s and 0s in any quarter
    //first quarter
    int max_quarter = INT_MAX;
    int count[4] = {0};
    for(int i = 0;i < N/2;i++)
    {
        for(int j = 0;j < N/2;j++)
        {
            if((ary[i][j] == 0)||(ary[i][j] == 2))
            {
                count[0]++;
            }
        }
    }
    if(count[0] < max_quarter)
    {
        max_quarter = count[0];
    }
    for(int i = 0;i < N/2;i++)
    {
        for(int j = N/2;j < N;j++)
        {
            if((ary[i][j] == 0)||(ary[i][j] == 2))
            {
                count[1]++;
            }
        }
    }
    if(count[1] < max_quarter)
    {
        max_quarter = count[1];
    }
    for(int i = N/2;i < N;i++)
    {
        for(int j = 0;j < N/2;j++)
        {
            if((ary[i][j] == 0)||(ary[i][j] == 2))
            {
                count[2]++;
            }
        }
    }
    if(count[2] < max_quarter)
    {
        max_quarter = count[2];
    }
    for(int i = N/2;i < N;i++)
    {
        for(int j = N/2;j < N;j++)
        {
            if((ary[i][j] == 0)||(ary[i][j] == 2))
            {
                count[3]++;
            }
        }
    }
    if(count[3] < max_quarter)
    {
        max_quarter = count[3];
    }
    //cout << max_quarter << endl;
    //dwarves to add
    int dwarves_to_add = 0;
    int dwarves_already[4] = {0};
    //this is the max any quarter can have
    for(int i = 0;i < N/2;i++)
    {
        for(int j = 0;j < N/2;j++)
        {
            if((ary[i][j] == 2))
            {
                dwarves_already[0]++;
            }
        }
    }
    if(dwarves_already[0] < max_quarter)
    {
        dwarves_to_add = max_quarter - dwarves_already[0];
    }
    for(int i = 0;i < N/2;i++)
    {
        for(int j = N/2;j < N;j++)
        {
            if((ary[i][j] == 2))
            {
                dwarves_already[1]++;
            }
        }
    }
    if(dwarves_already[1] < max_quarter)
    {
        dwarves_to_add = dwarves_to_add + (max_quarter - dwarves_already[1]);
    }
    for(int i = N/2;i < N;i++)
    {
        for(int j = 0;j < N/2;j++)
        {
            if((ary[i][j] == 2))
            {
                dwarves_already[2]++;
            }
        }
    }
    if(dwarves_already[2] < max_quarter)
    {
        dwarves_to_add = dwarves_to_add + (max_quarter - dwarves_already[2]);
    }
    for(int i = N/2;i < N;i++)
    {
        for(int j = N/2;j < N;j++)
        {
            if((ary[i][j] == 2))
            {
                dwarves_already[3]++;
            }
        }
    }
    if(dwarves_already[3] < max_quarter)
    {
        dwarves_to_add = dwarves_to_add + (max_quarter - dwarves_already[3]);
    }
    return dwarves_to_add;
}
