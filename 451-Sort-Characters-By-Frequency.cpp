class Solution {
public:
    vector<int> mapping(string s) {
        vector <int> map(256,0);
        for(int i = 0 ; i < s.length() ; i++){
            char ch = s[i];
            map[ch]++;
        }
        return map;
    }


    static bool compare(pair<int,int> &a , pair<int,int> &b){
        return a.second > b.second ;
    }



    string frequencySort(string s) {
        vector<pair<int, int>>pairMap;
        string ans;
        vector<int> map = mapping(s);

        for(int i =0 ; i< map.size() ; i++){
            if(map[i] != 0){
                pairMap.push_back(make_pair(i , map[i]));
            }
        }

        sort(pairMap.begin(), pairMap.end(), compare);

        for(int i = 0 ; i < pairMap.size() ; i++){
            int n = pairMap[i].second;
            for(int j =0 ; j < n ; j++){
                ans.push_back((char(pairMap[i].first)));
            }
        }

        return ans;
    }
};