class Solution:
    def firstUniqChar(self, s: str) -> int:
       rep = []
       for i in range(len(s)):
        c = 0
        if s[i] in rep:
            continue
        for j in range(i + 1, len(s)):
            if(s[i] == s[j]):
                c += 1
                break
        if c > 0:
            rep.append(s[i])
        else:
            return i
       return -1

        