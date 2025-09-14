class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        mp = {}
        ans = 0
        leng = 0
        st = 0
        l = 0

        while  l < len(s):
            if s[l] not in mp:
                leng += 1
                ans = max(ans,leng)
                mp[s[l]] = 1
            elif mp[s[l]] == 0 :
                leng += 1
                ans = max(ans,leng)
                mp[s[l]] += 1
            else :
                while s[st] != s[l]:
                    mp[s[st]] -= 1
                    st += 1
                st += 1
                leng  = l - st + 1
                ans = max(ans,leng)
            l += 1
        return ans




                    
            

            

        