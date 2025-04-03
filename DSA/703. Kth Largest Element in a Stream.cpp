class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>p;
    int l;
    KthLargest(int k, vector<int>& nums) {
        l=k;
        for(int i=0;i<nums.size();i++){
            p.push(nums[i]);
            if(p.size()>l)p.pop();
        }
    }
    
    int add(int val) {
        p.push(val);
        if(p.size()>l)p.pop();
        return p.top();
    }
};
