#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void display(vector<int> &v);
vector<int> returnVector()
{
    vector<int> v(30,-1);
    return v;
}
void display(vector<int> &v)
{
    cout << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; 
    }
}
int main()
{
    string s;
    cin>>s;
    return 0;
}