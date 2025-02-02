class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        vector<int> ans ;
        deque<int> dq ;

        // First we will process the first window 
        for(int i = 0 ; i < k ; i++){
            int ele = nums[i];
            //jitne bhi deque k andr chhote elements h remove krdo
            while(!dq.empty() && ele > nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }


        // Remaining Window  Ko Process Karna hai
        // Removal 
        // Addition

        for(int i = k; i < nums.size() ; i++){
            // store ans
            ans.push_back(nums[dq.front()]); // Didn't check the emoty case as one of the element must be max in window so we will for sure get one answer !
            // removal
            // Out Of Range Elements
            if(!dq.empty() && i-dq.front() >=k){
                dq.pop_front();
            }
            int ele = nums[i];
            //jitne bhi deque k andr chhote elements h remove krdo
            while(!dq.empty() && ele > nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }

        // Last Window ka Answer store krne hai
        ans.push_back(nums[dq.front()]);
        return ans;
    }
};