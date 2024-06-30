class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target){
        int n = nums.size();
        int l1 = n-1;
        int s1 = 0;
        int l2 = n-1;
        int s2 = 0;
        int floor = -1;
        int ceil = -1;


        while(s1 <= l1){
            int mid = s1 + (l1-s1)/2;
            if(nums[mid]==target){
                l1 = mid-1;
            }
            else if(nums[mid]<target){
                s1 = mid + 1;
            }
            else{
                l1 = mid - 1;
            }
        }

        if(l1+1 < n && nums[l1+1]==target){
            floor  = l1+1 ;
        }

        while(s2 <= l2){
            int mid = s2 + (l2-s2)/2;
            if(nums[mid]==target){
                s2 = mid+1;
            }
            else if(nums[mid]<target){
                s2 = mid + 1;
            }
            else{
                l2 = mid - 1;
            }
        }

        if(s2-1 >= 0 && nums[s2-1]==target){
            ceil = s2-1 ;
        }
        
        return {floor , ceil};
    }
};