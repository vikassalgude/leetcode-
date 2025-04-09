class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>a;
        while(head){
            a.push_back(head->val);
            head=head->next;
        }
        int ans=INT_MIN;
        int n=a.size();
        for(int i=0;i<n;i++){
            int k=n-1-i;
            if(k<n){
                int b=a[i]+a[k];
                ans=max(ans,b);
            }
        }
        return ans;

    }
};
