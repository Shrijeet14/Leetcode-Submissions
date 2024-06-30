class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = n-1;
        int s =0;
        while(s<=l){
            int mid =  s + (l-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if (nums[mid] < target){
                s = mid + 1;
            }
            else{
                l = mid - 1;
            }
            // mid = s +(l-s)/2;
        }
        return -1;
    }
};