#include <list>
#include <iostream>

using namespace std;

int main()
{
    int a[] = {1, 9, 4, 5, 8, 3, 1, 3, 5};

    std::list<int> la(a, a+9);
    la.sort();
    la.unique();
    std::cout << la.size() << std::endl;

    return 0;
}
