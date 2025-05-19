class Solution {
public:
    string triangleType(vector<int>& nums) {
        string s="none";
        if((nums[0]==nums[1])&&nums[1]==nums[2]){
            s="equilateral";
            return s;
        }
        // else if((nums[0]==nums[1])||(nums[1]==nums[2])||(nums[0]==nums[2])){
        //     s="isosceles";
        //     return s;
        // }
        else if(((nums[0]+nums[1])>nums[2])&&((nums[1]+nums[2])>nums[0])&&((nums[0]+nums[2])>nums[1])){
            if((nums[0]==nums[1])||(nums[1]==nums[2])||(nums[0]==nums[2])){
            s="isosceles";
            return s;
            }


            s= "scalene";
            return s;
        }

        return s;
    }
};
