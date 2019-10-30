#include <bits/stdc++.h>
using namespace std;
// solution to problem length of longest substring without repeating characters using unordered_set or hashset
// O(n) complexity assuming set insert remove i.e erase and s.find are all o(1) operations
int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int maxlen = 0;
        int i = 0, j = 0;
        unordered_set<char> uniq;
        while (j < s.length())
        {
            if (uniq.find(s[j]) == uniq.end())
            {
                uniq.insert(s[j]);
                j++;
                maxlen = max(maxlen, j - i);
            }
            else
            {
                uniq.erase(s[i]);
                i++;
                // remove elements from starting of window till you can insert the element at j index
                // can be optimised in the sense that you dont shorten the window
            }
        }
        cout << maxlen << endl;
    }

    return 0;
    // my window logic should not be implemented with set it should use a simple array to maintain counts of characters of each window
    // to shift a window you subract the count of s[i] and increase the count of s[j]
}