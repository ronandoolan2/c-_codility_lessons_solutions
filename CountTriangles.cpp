

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    /*A.clear();
    for(int k = 0;k < 100000;k++)
    {
        A.push_back(1);
    }*/
    int number_of_triangles = 0;
    sort(A.begin(), A.end());
    int tri = 0;
    for (vector<int>::const_iterator i = A.end()-1; i != A.begin()-1; --i)
    {
        //cout << "i " << *i;
        if(*i < 0)
        {
            break;
        }
        for (vector<int>::const_iterator j = i-1; j != A.begin()-1; --j)
        {
            //cout << " j " << *j;
            if(*j < 0)
            {
                break;
            }
            for (vector<int>::const_iterator k = j-1; k != A.begin()-1; --k)
            {
                long long int ij = 0;
                ij = ij + *i;
                ij = ij + *j;
                //cout << " k " << *k;
                if((*k < 0)||(*k > ij))
                {
                    break;
                }
                long long int kj = 0;
                kj = kj + *k;
                kj = kj + *j;

                long long int ki = 0;
                ki = ki + *k;
                ki = ki + *i;
                //cout << "ki" << ki << endl;
                if((kj > *i)&&(ij > *k)&&(ki > *j))
                {
                    //cout << *k << " " << *j << " " << *i << endl;
                    number_of_triangles++;
                }
            }
        }
    }
    return number_of_triangles;
}
