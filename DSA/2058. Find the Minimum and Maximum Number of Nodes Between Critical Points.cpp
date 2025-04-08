class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        // int a=-1;
        // int b=-1;
        // vector<int>ans;
        // while(head){
        //     ans.push_back(head->val);
        //     head=head->next;
        // }
        // if(ans.size()<3){
        //     vector<int>res;
        //     res.push_back(b);
        //     res.push_back(a);
        // return res;
        // }
        // vector<int>c;
        // for(int i=1;i<ans.size()-1;i++){
        //     if(ans[i]>ans[i-1]&&ans[i]>ans[i+1]){
        //         // a=ans[i];
        //         c.push_back(i);
        //     }
        //     if(ans[i]<ans[i-1]&&ans[i]<ans[i+1]){
        //         // b=ans[i];
        //         c.push_back(i);
        //     }
        // }
        // a=0;
        // b=0;
        // a=c[1]-c[0];
        // b=c[c.size()-1]-c[0];
        // for (int i=0;i<c.size()-1;i++){
        //    a=min(a,c[i+1]-c[i]);
        //    b=max(b,c[i+1]-c[i]);
        // }
        // vector<int>res;
        // res.push_back(a);
        // res.push_back(b);
        // return res;
        std::vector<int> values;
    while (head) {
        values.push_back(head->val);
        head = head->next;
    }

    if (values.size() < 3) {
        return {-1, -1}; // Simplified return for edge case
    }

    std::vector<int> criticalPoints;
    for (int i = 1; i < values.size() - 1; i++) {
        if (values[i] > values[i - 1] && values[i] > values[i + 1]) {
            criticalPoints.push_back(i);
        } else if (values[i] < values[i - 1] && values[i] < values[i + 1]) {
            criticalPoints.push_back(i);
        }
    }

    if (criticalPoints.size() < 2) {
        return {-1, -1}; // Not enough critical points
    }

    int minDistance = INT_MAX;
    int maxDistance = 0;

    for (int i = 0; i < criticalPoints.size() - 1; i++) {
        int distance = criticalPoints[i + 1] - criticalPoints[i];
        minDistance = std::min(minDistance, distance);
        maxDistance = std::max(maxDistance, distance);
    }

    return {minDistance, criticalPoints[criticalPoints.size()-1] - criticalPoints[0]};
    }
};
