class Solution {
public:
    int count(string s , char c){
        int num=0;
        for(int i =0 ; i < s.size() ; i++){
            if(s[i]==c){
                num++;
            }
        }
        return num;
    }

    int numberOfBeams(vector<string>& bank) {
        int ans  = 0;
        int prev = 0;
        int curr = 0;
        for(int i=0 ; i < bank.size() ; i++){
            curr = count(bank[i],'1');
            if(curr != 0 &&  prev == 0){
                prev = curr;
            }
            else if(curr != 0 && prev != 0){
                ans = ans + prev*curr;
                prev = curr;
            }
            else{
                continue;
            }
        }
        return ans;
    }
};