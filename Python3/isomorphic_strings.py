class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        hashmap = {}
        
        for i in range(len(s)):
            if s[i] in hashmap and hashmap[s[i]] != t[i]:
                return False
            elif s[i] not in hashmap and t[i] in hashmap.values():
                return False
            else:
                hashmap[s[i]] = t[i]
        
        return True
