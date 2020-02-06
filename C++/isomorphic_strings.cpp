class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int key[128] = {0}, value[128] = {0};
        
        for(int i = 0; i < s.size(); i++) {
            if(key[s[i]] != value[t[i]]) return false;
            key[s[i]] = i + 1;
            value[t[i]] = i + 1;
        }
        return true;
    }
};
