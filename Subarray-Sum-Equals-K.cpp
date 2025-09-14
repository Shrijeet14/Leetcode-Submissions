class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        int cnt = 0;
        int sum = 0;
        mp[0] = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            sum = sum+nums[i];
            cnt = cnt + mp[sum-k] ; 
            mp[sum]++;
        }
        return cnt;
    }
};