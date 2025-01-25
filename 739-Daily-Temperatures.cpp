class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        vector<int>answerIndex;

        for(int i = temperatures.size()-1 ; i >= 0 ; i--){
            while(!st.empty() && temperatures[i] >= st.top().first){
                st.pop();
            }
            if(st.empty()){
                answerIndex.push_back(-1);
            }
            else{
                answerIndex.push_back(st.top().second);
            }
            st.push({temperatures[i] , i});
        }
        reverse(answerIndex.begin() , answerIndex.end());

        vector<int> answer;
        for(int i = 0 ; i < temperatures.size() ; i++){
            if(answerIndex[i]==-1){
                answer.push_back(0);
            }
            else{
                answer.push_back(answerIndex[i]-i);
            }
        }
        return answer;
    }
};