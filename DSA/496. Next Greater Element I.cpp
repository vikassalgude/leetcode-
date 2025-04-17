class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& num1, vector<int>& num2) {
        vector<int>ans;
        for(int i=0;i<num1.size();i++){
            int x=-1;
            for(int j=0;j<num2.size();j++){
               if(num1[i]==num2[j]){
                 // int x=-1;
                  for(int k=j+1;k<num2.size();k++){
                    if(num2[k]>num2[j]){
                        x=num2[k];break;
                    }
                  }
                //   ans.push_back(x);
               }
            }
            ans.push_back(x);
        }
        return ans;
    }
};
