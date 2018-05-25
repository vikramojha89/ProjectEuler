#include<iostream>
using namespace std;

int main()
{
    /* Brute Force Method*/
    unsigned long long a=1, b=2, sum1=0,c;

    for(; b<4000000;){
        c=a+b;
        if(b%2==0)sum1+=b;
        a=b; //mind this assign b before changing its value
        b=c;
    }
    cout<<"Sum output by Bruteforce method:"<<sum1<<"\n";
    /*Brute Force End here*/

    /*some what awesome solution*/
    /*

        Patter 1,2,3,5,8,13,21,34,55,89,144
                 ^     ^        ^        ^
                 |     |        |        |
        Here we only care about:  numbers marked with arrow
    */
    long long a1=0, b1=2, sum2=2;
    long long n=4000000; //4 million
    n=n/4; //since in formula we are doing b=4*b+a, so there could be case where be case where b is less
           //than 4 million but 4*b or 4*b+a can be greator than 4 million
    while(b1<n){
        long long temp=b1;
        b1=4*b1 + a1;
        a1=temp;
        sum2+=b1;
    }
    cout<<"Sum output by little good method:"<<sum2<<"\n";
    return 0;
}
