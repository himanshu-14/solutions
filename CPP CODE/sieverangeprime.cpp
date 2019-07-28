#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        vector<bool> sieve(sqrt(n)+1,true);//make a sieve only till upper end of range's square root then sieve the range with it
        sieve[1]=false;
        sieve[2]=true;
        for(int i=4; i<=sqrt(n); i+=2)
            sieve[i]=false;
//        sieve[m-m]=isprime(m);
        for(int i=3; i<=sqrt(n); i+=2)
        {
//        cout<<sieve[i]<<endl;
            if(!sieve[i])
                continue;
            for(int j=i; i*j<=sqrt(n); j+=2)//optimization here as all multiples of numbers less than i have been crossed
                sieve[i*j]=false;

        }
         //NOW SIEVE CONTAINS ALL THE PRIME NUMBERS TILL SQRT(N)
        vector<bool> actSieve(n-m+1,true);//actual sieve for given range
        if(m==1)
            actSieve[0]=false;
        for(int i=m;i<=n;i++)//iterate over actSieve and remove even numbers except 2
        {
            if(i!=2&&i%2==0)actSieve[i-m]=false;
        }

        for(int i=3; i<=sqrt(n); i+=2)//iterate over sieve and take prime numbers
        {
            if(sieve[i])//if i is a prime then
            {
                for(int j=m; j<=n; j++)//iterate over actSieve and remove all j divisible by i
                {
                    if(j!=i&&actSieve[j-m]&&j%i==0)
                        actSieve[j-m]=false;
                }
            }
        }
        for(int i=m; i<=n; i++)//print out from actual sieve the sieved range
        {
            if(actSieve[i-m])
            {
                cout<<i<<endl;
            }
        }

        cout<<endl;
    }//end of while t--
    return 0;
}
