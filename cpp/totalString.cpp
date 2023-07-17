#include <bits/stdc++.h>
using namespace std;
void helper(string s, unordered_set<string> &st)
{
    int len = s.size();
    int ans = 0;
    for (char c : s)
    {
        if (c == '4' || c == '8' || c == '0')
            st.insert(to_string(c));
    }
    for (int i = 0; i < len - 1; i++)
    {
        int val = (s[i] - '0') * 10 + (s[i + 1] - '0');
        if (val % 4 == 0)
        {
            ans = ans + i + 1;
            st.insert(to_string(val));
        }
    }
}
int main()
{
    string s = "483112";
    unordered_set<string> st;
    helper(s, st);
    cout << st.size() << endl;
}