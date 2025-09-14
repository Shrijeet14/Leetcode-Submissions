class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> ans(nums.size() , 0);
        int pos = 0;
        int nos = 1;
        for(int i =0 ; i < nums.size() ; i++){
            if(nums[i] < 0){
                ans[nos]=nums[i];
                nos = nos + 2;
            }
            else{
                ans[pos]= nums[i];
                pos=pos+2;
            }
        }
        return ans;
    }
};