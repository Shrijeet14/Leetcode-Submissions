class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int count = 0;
        int n = nums.size();
        int s = 0;
        int l = n-1;
        while((s < nums.size()-1)&&(nums[s] == nums[s+1])){
            s++;
        }
        while((l > 0)&&(nums[l-1] == nums[l])){
            l--;
        }
        for(int i = s+1 ; i < l ; i++){
            count++;
        }
        return count;
    }
};