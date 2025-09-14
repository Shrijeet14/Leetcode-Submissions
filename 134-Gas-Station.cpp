class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int balance = 0,totalGas = 0, totalCost = 0;
        int start = 0;
        
        for (int i = 0; i < n; i++) {
            totalGas = totalGas + gas[i];
            totalCost = totalCost + cost[i];
            balance = balance + gas[i] - cost[i];
            if (balance < 0) {  
                start = i + 1; 
                balance = 0;  
            }
        }
        
        return (totalGas >= totalCost) ? start : -1;
    }
};
