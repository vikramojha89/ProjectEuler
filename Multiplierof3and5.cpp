#include <iostream>

using namespace std;

int main()
{
    int n=999;
    //Find the sum of number from 1-1000 which are multiple of either 3 or 5
    float temp=n;
    temp=temp/3;
    int Sum3  = temp*(3 + n - (n%3))/2; //AP formula  for sum of n number we have used S=n/2(a+l)
    cout<<Sum3<<"\n";
    temp=n/5;
    int Sum5 = temp*(5 + n - (n%5))/2;
    temp=n/15;
    cout<<Sum5<<"\n";
    int Sum15  = temp*(15 + n - (n%15))/2;
    cout<<Sum15<<"\n";
    int finalsum = Sum3 + Sum5 - Sum15;

    cout<<finalsum;
    return 0;
}
