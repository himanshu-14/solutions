#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;

        vector<int> a(n);
        for(int i=0; i<n; i++)
        {

            cin>>a[i];
        }
        vector<int> b(n);

        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        vector<int> diff(n);
        int maxsum=0;
        int numa=0,numb=0;
        for(int i=0; i<n; i++)
        {
//            pair<int,int> p();
//            p.second=i;
            diff[i]=a[i]-b[i];
            if(a[i]>=b[i])
            {
                numa++;
                maxsum+=a[i];
            }
            else
            {
                numb++;
                maxsum+=b[i];

            }
        }
        sort(diff.begin(),diff.end());
//for(int i=0; i<n; i++)
//            {
//                cout<<diff[i]<<",";
//            }
        if(numa>x)
        {
            for(int i=0; i<n; i++)
            {
                if(diff[i]>=0&&numa>x)//allot those allotted to a to b
                {
                    numa--;
                    numb++;
                    maxsum-=diff[i];
                }
            }
        }
        else if(numb>y)
        {
            for(int i=n-1; i>0; i--)
            {
                if(diff[i]<0&&numb>y)
                {
                    numa++;
                    numb--;
                    maxsum+=diff[i];
                }
            }
        }
        cout<<maxsum<<endl;
    }
    return 0;
}
