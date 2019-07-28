#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b,vector<int> &weight)
{
    int ans=0;
    for(; a<=b; a++)
    {
        ans+=weight[a];
    }
    return ans;
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> weight(n+1,0);
        for(int i=1; i<=n; i++)
        {
            cin>>weight[i];
        }
        sort(weight.begin(),weight.end());
        if(k<=n/2)
            cout<<sum(k+1,n,weight)-sum(1,k,weight);
        else
            cout<<sum(n-k+1,n,weight)-sum(1,n-k,weight);
        cout<<endl;
    }
}

