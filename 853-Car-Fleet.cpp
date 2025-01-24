class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        map<int , int> mp;
        for(int i = 0 ; i<position.size() ; i++){
            mp[position[i]] = speed[i];
        }
        sort(position.rbegin(), position.rend());

        vector<double> timeTaken;
        for (int i = 0; i < position.size(); i++) {
            timeTaken.push_back((double)(target - position[i]) / mp[position[i]]);
        }
        // Count fleets
        int fleets = 0;
        double lastTime = 0.0;
        for (double time : timeTaken) {
            if (time > lastTime) {
                fleets++;
                lastTime = time;
            }
        }
        return fleets;
    }
};