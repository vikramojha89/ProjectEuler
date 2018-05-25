#include <iostream>

using namespace std;

int main()
{
    int n=1000;
    //Find the sum of number from 1-1000 which are multiple of either 3 or 5
    int Sum3  = (n/2)*(3 + n/3); //AP formula  for sum of n number we have used S=n/2(a+l)
    int Sum5  = (n/2)*(5 + n/5);
    int Sum15 = (n/2)*(15 + n/15);

    int finalsum = Sum3 + Sum5 - Sum15;

    cout<<finalsum;
    return 0;
}
