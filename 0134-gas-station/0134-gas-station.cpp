class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int x=0;
         int y=0;
         for(int i=0;i<gas.size();i++){
            x+=gas[i];
            y+=cost[i];
         }
         if(y>x)return -1;
         int start=0;
         int gas_left=0;
         for(int i=0;i<gas.size();i++){
            gas_left+=gas[i];
            gas_left-=cost[i];
            if(gas_left<0){
                gas_left=0;
                start=i+1;
            }
         }
         return start;
    }
};