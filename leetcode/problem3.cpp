class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastIndex;
        int left = 0, maxLength = 0;

        for (int right = 0; right<s.length(); right++) {
            if (lastIndex.find(s[right]) != lastIndex.end()) {
                left = max(left, lastIndex[s[right]] + 1);
            }
            lastIndex[s[right]] = right;
            int currentLength = right - left + 1;

            maxLength = max(maxLength, currentLength);
        }
        return maxLength;
    }
};