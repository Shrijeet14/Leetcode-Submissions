class Solution {
public:

    int totalTravel(int limit  , vector<int> travel){
        int  time = 0;
        for(int i =0  ; i < limit ; i++){
            time = time + travel[i];
        }
        return time;
    }


    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int totalTravelTime = 0;
        int totalPickingTime =0;
        int g = -1 ;
        int p = -1 ;
        int m = -1 ;

        for(int i =0 ; i < garbage.size() ; i++){
            int len = garbage[i].size();
            totalPickingTime = totalPickingTime + len;
            if(garbage[i].find('G') != string :: npos){
                g = i ;
            }
            if(garbage[i].find('P') != string :: npos){
                p = i ;
            }
            if(garbage[i].find('M') != string :: npos){
                m = i ;
            }
        }

        totalTravelTime = totalTravelTime + totalTravel(g , travel);
        totalTravelTime = totalTravelTime + totalTravel(p , travel);
        totalTravelTime = totalTravelTime + totalTravel(m , travel);

        return totalTravelTime+totalPickingTime;

    }
};