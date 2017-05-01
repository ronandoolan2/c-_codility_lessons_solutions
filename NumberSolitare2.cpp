// you can use includes, for example:
#define noop
#include <algorithm>
#include <math.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    //std::fill(A.begin(), A.end(), -10000);
    //A.resize(100000,-10000);

    int marked = A[0];
    /*if(A.size() < 2)
    {
        return marked;
    }*/
    vector<int>::iterator next_most_square;
    for (std::vector<int>::const_iterator it = A.begin() + 1; it != A.end(); ++it)
    {
        start:
        cout << it - A.begin() << " " << *it << endl;
        cout << marked << endl;
        if(it+5 < A.end())
        {
           //cout << "before end" << endl;
           //cout << *std::max_element(it, it+5) << endl;
           for(int y =1;y < 6;y++)
           {
               if(*(it +y) > 0)
               {
                   marked= marked +*(it +y);
                   it = it+y;
                   goto start;
               }
           }
           marked= marked + *std::max_element(it, it+5);
           it = std::max_element(it, it+5);
        }
        else
        {
            int x = A.end() - it;
            if(*std::max_element(it, it + x) <= 0)
            {
                cout << "last square" << x << endl;
                //cout << *(A.end()-1) << endl;
                //next_most_square = A.end();
                marked = marked + *(A.end()-1);
                break;
                //it = A.end();
            }
            else
            {
                //next_most_square = std::max_element(it, A.end());
                for(int y =1;y < x;y++)
                {
                    cout << "y " << y << " " << *(it + y)<< endl;
                    if(*(it +y) > 0)
                    {
                        marked= marked +*(it +y);
                        it = it+y;
                        cout << it - A.begin() << endl;
                        goto start;
                    }
                }
                marked = marked + *std::max_element(it, it + x);//.push_back(*std::max_element(it, A.end()));
                //cout << *std::max_element(it, it + x) << endl;
                it = std::max_element(it, it + x);
                //it = std::max_element(it, A.end());
                
            }
            //end: noop;
        }
        //it = next_most_square;
    }
    return marked;
}
