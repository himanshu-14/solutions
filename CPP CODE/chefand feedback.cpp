#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin.ignore();
        getline(cin, s);
        int i;
        for (i = 0; i <= s.length() - 3; i++)
        {
            //            cout<<"loop";

            if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') || (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
            {
                cout << "Good";
                break;
            }
        }
        if (i > s.length() - 3)
        {
            cout << "Bad";
        }
        cout << endl;
    }
    return 0;
}
