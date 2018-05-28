//Largest Prime factor
//Problem 3 of project euler
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int n=600851475143;
    int lf=2;
    while(n>lf){
        if(n%lf==0){
            n=n/lf;
            lf=2;
        }
        else lf++;
    }
    cout<<lf<<"\n";
    return 0;
}
