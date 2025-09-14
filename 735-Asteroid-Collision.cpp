class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i = 0 ; i < asteroids.size() ; i++){
            bool destroyed = false;
            if(asteroids[i] < 0){
                while(!st.empty() && st.top() > 0){
                    if(abs(st.top()) < abs(asteroids[i])){
                        st.pop();
                    }
                    else if(abs(st.top()) == abs(asteroids[i])){
                        st.pop();
                        destroyed = true;
                        break;
                    }
                    else{
                        destroyed = true;
                        break;
                    }
                }
                if(!destroyed){
                    st.push(asteroids[i]);
                }
            }
            else{
                st.push(asteroids[i]);
            }
        }
        vector<int> ans;
        int n = st.size();
        for(int i = 0 ; i < n ; i++){
            ans.push_back(st.top());st.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};










// class Solution {
// public:
//     vector<int> asteroidCollision(vector<int>& asteroids) {
//         stack<int>st;
//         for(int i = 0 ; i < asteroids.size() ; i++){
//             while(!st.empty() && asteroids[i]*st.top() < 0){
//                 if(st.top() <= asteroids[i]){
//                     st.pop();
//                 }
//             }

//             if(st.empty()){
//                 st.push(asteroids[i]);
//             }
            
//             if(!st.empty() && asteroids[i]*st.top() > 0){
//                 st.push(asteroids[i]);
//             }
//         }
//         vector<int> ans;
//         for(int i = 0 ; i < st.size() ; i++){
//             ans.push_back(st.top());st.pop();
//         }
//         reverse(ans.begin() , ans.end());
//         return ans;
//     }
// };