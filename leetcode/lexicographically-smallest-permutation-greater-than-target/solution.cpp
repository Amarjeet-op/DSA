class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        vector<int> cnt(26);
        for (int i = 0; i < s.size(); i++) {
            cnt[s[i] - 'a']++;
            cnt[target[i] - 'a']--;
        }

        // Try from right to left
        for (int i = s.size() - 1; i >= 0; i--) {
            int b = target[i] - 'a';
            cnt[b]++;  // Reversal of consumption
                       // Check if the prefix can fully match
            if (*min_element(cnt.begin(), cnt.end()) < 0) {
                continue;
            }
            // Find the smallest available character larger than b.
            for (int j = b + 1; j < 26; j++) {
