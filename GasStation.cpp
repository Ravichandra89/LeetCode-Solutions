class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int size = gas.size();
        int gas_total = 0,cost_total=0;
        int gas_avl = 0,starting = 0;

        for(int i=0;i<size;i++){
            gas_total += gas[i];
            cost_total += cost[i];

            gas_avl += gas[i] - cost[i];

            if(gas_avl < 0){
                starting= i+1;
                gas_avl = 0;
            }
        }
        return (gas_total<cost_total)?-1:starting;
    }
};
