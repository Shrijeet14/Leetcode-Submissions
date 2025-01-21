class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack<int> st;
        map<int,int> mp;
        for(int i=nums2.size()-1; i >= 0 ; i--){
            mp[nums2[i]] = i;
            while(!st.empty() && nums2[i] >= st.top()){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(st.top());
            }
            st.push(nums2[i]);
        }
        vector<int> ansSheet;

        for(int i = 0 ; i < nums1.size() ; i++){
            ansSheet.push_back(ans[nums2.size()-1-mp[nums1[i]]]);
        }
        return ansSheet;
    }
};


// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> ans(nums2.size(), -1); // Initialize ans vector for next greater elements
//         stack<int> st;                     // Stack for monotonic decreasing order
//         map<int, int> mp;                  // Map to store indices of nums2 elements

//         // Populate the ans vector with next greater elements for nums2
//         for (int i = nums2.size() - 1; i >= 0; i--) {
//             while (!st.empty() && nums2[i] >= st.top()) {
//                 st.pop();
//             }
//             if (!st.empty()) {
//                 ans[i] = st.top();
//             }
//             st.push(nums2[i]);
//             mp[nums2[i]] = i; // Store the index of nums2[i]
//         }

//         vector<int> ansSheet(nums1.size(), -1); // Initialize ansSheet with the size of nums1

//         // Use the map and ans vector to find results for nums1
//         for (int i = 0; i < nums1.size(); i++) {
//             ansSheet[i] = ans[mp[nums1[i]]];
//         }

//         return ansSheet;
//     }
// };
