
#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s) {

    int left = 0;
    int maxLength = 0;
    set<char> st;

    for (int right = 0; right < s.length(); right++) {

        while (st.find(s[right]) != st.end()) {
            st.erase(s[left]);
            left++;
        }

        st.insert(s[right]);

        int length = right - left + 1;

        maxLength = max(maxLength, length);
    }

    return maxLength;
}

int main() {

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int result = lengthOfLongestSubstring(s);

    cout << "Longest substring length: " << result << endl;

    return 0;
}
