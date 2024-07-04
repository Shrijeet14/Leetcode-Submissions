class Solution {
public:

    int countPalindrome(string str , int s , int l){
        int count =0 ;
        while(s >= 0 && l < str.length() && str[s] == str[l]){
            count++;
            s--;
            l++;
        }
        return count;
    }


    int countSubstrings(string str) {
        int center =0;
        int totalCount = 0 ;
        while(center < str.length()){
            int oddPalindrome = countPalindrome(str , center , center);
            int evenPalindrome = countPalindrome(str , center , center+1);
            totalCount = totalCount + oddPalindrome + evenPalindrome ;
            center++;
        }
        return totalCount;
    }
};

