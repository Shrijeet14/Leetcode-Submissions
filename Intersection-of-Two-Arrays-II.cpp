class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //Method-1

        // vector<int> ans;
        // map<int , int> mp;
        // if(nums1.size() > nums2.size()){
        //     for(int i = 0 ; i < nums1.size() ; i++){
        //         mp[nums1[i]]++;
        //     }
        //     for(int i = 0 ; i<nums2.size() ; i++){
        //         if(mp[nums2[i]] > 0){
        //             ans.push_back(nums2[i]);
        //             mp[nums2[i]]--;
        //         }
        //     }
        // }
        // else{
        //     for(int i = 0 ; i < nums2.size() ; i++){
        //         mp[nums2[i]]++;
        //     }
        //     for(int i = 0 ; i<nums1.size() ; i++){
        //         if(mp[nums1[i]] > 0){
        //             ans.push_back(nums1[i]);
        //             mp[nums1[i]]--;
        //         }
        //     }
        // }
        // return ans;

        //Method-2 
        vector<int> ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int f = 0, s = 0;
        while (f < nums1.size() && s < nums2.size()) {
            if (nums1[f] == nums2[s]) {
                ans.push_back(nums1[f]);
                f++;
                s++;
            }
            else if (nums1[f] < nums2[s]) {
                f++;
            }
            else {
                s++;
            }
        }

        return ans;

    }
};