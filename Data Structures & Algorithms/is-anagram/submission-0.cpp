class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) return false;

        vector<char>sFreq (26, -1);
        vector<char>tFreq (26, -1);

        for (int i = 0; i < s.size(); i++)
        {
            sFreq[s[i] - 'a']++;
            tFreq[t[i] - 'a']++;
        }

        for ( int j = 0; j < 26; j++) {
            if (sFreq[j] != tFreq[j]) {
                return false;
            }
        }

        return true;
    }
};
