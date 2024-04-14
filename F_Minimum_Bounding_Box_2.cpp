#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
        int n, k;
        string s;
        cin >> n >> k >> s;
        unordered_map<char, int> freq;
        int left = 0, right = 0;
        int max_len = 0, start = -1, end = -1;
        while (right < n) {
            freq[s[right]]++;
            while ((int)freq.size() > k) {
                freq[s[left]]--;
                if (freq[s[left]] == 0)
                    freq.erase(s[left]);
                left++;
            }
            if (right - left + 1 > max_len) {
                max_len = right - left + 1;
                start = left;
                end = right;
            }
            right++;
        }
        cout << max_len << endl;
        if (start != -1 && end != -1)
            cout << s.substr(start, end - start + 1) << endl;
    return 0;
}
