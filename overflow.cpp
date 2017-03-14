#include <math.h>
#include <iostream>
#include <limits.h>

using namespace std;

int main()
{

int a = <something>;
int x = <something>;
if ((x > 0) && (a > INT_MAX - x)) /* `a + x` would overflow */;
if ((x < 0) && (a < INT_MIN - x))

}
