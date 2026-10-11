
#include <bits/stdc++.h>
using namespace std;

int longestSubstring(string s) {
    unordered_set<char> st;

    int left = 0;
    int right = 0;
    int maxLen = 0;

    while (right < s.size()) {
        if (st.find(s[right]) == st.end()) {
            st.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        else {
            st.erase(s[left]);
            left++;
        }
    }

    return maxLen;
}

int main() {
    string s;
    cin >> s;

    cout << longestSubstring(s);
    return 0;
}
