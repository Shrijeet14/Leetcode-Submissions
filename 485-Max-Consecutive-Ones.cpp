class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]==1){
                
                int j = i+1;
                int count = 1;

                while(j<nums.size() && nums[j] == 1){
                    count++;
                    j++;
                }

                if(count> max){
                    max = count;
                }
                i=j-1;
            }
        }
        return max;
    }
};