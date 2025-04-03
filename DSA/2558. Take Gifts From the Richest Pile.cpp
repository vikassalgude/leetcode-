class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        priority_queue<long long>p;
        for(int i=0;i<gifts.size();i++){
            p.push(gifts[i]);
        }
        while(k--){
            long long a=p.top();
            p.pop();
            long long b=(sqrt(a));
            p.push(b);
        }
        long long s=0;
        while(!p.empty()){
            long long c=p.top();
            p.pop();
            s+=c;
        }
        return s;
    }
};
