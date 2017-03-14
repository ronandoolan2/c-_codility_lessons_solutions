// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int K, vector<int> &C, vector<int> &D) {
    // write your code in C++14 (g++ 6.2.0)
    //get number of colours of socks
    int number_of_colours = max(*std::max_element(C.begin(), C.end()),*std::max_element(D.begin(), D.end()));
    int socks_to_wash = 0;
    //get half pairs of clean socks
    vector<int> half_pairs;
    for(int i = 1; i < number_of_colours;i++)
    {
        int mycount = std::count (C.begin(), C.end(), i);
        if((mycount % 2) != 0)
        {
            half_pairs.push_back(i);
        }
    }
    vector<int> half_clean_pair;
    //search for matches in dirty socks
    for(int i = 1; i < number_of_colours;i++)
    {
        int mycount = std::count (D.begin(), D.end(), i);
        if((mycount % 2) != 0)
        {
            vector<int>::iterator it2;
            it2 = find (half_pairs.begin(), half_pairs.end(), i);
            if (it2 != half_pairs.end())
            {
            //cout << "eat " << chocolate << endl;
                //add to pair for washing
                half_clean_pair.push_back(*it2);
                socks_to_wash++;
                //take out of dirty drawer
                D.erase(std::remove(D.begin(), D.end(), *it2), D.end());
                //remove a sock from half_pair
                half_pairs.erase(std::remove(half_pairs.begin(), half_pairs.end(), *it2), half_pairs.end());
                //add a sock to clean drawer
                C.push_back(*it2);
            }

            //half_pairs.push_back(i);
        }
    }
    
    //fill washing machine with pairs of dirty socks
    cout << "space in washing machine " << K - socks_to_wash << endl;
    //count socks to take
    int socks_to_take = 0;
    for(int i = 1; i < number_of_colours;i++)
    {
        int mycount = std::count (C.begin(), C.end(), i);
        if((mycount % 2) == 0)
        {
            socks_to_take++;
        }
    }
    cout << "socks to take " << socks_to_take << endl;
    return socks_to_take/2;
}
