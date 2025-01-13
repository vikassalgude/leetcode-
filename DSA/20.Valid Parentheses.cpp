class Solution {
public:
    bool isValid(string s) {
    //METHOD 1 USING VECTOR
    //     vector<char>ans;
    //     for (char c : s) {
    //     if (c == '(' || c == '[' || c == '{') {
    //         ans.push_back(c);
    //     } 
    //     else if (c == ')' || c == ']' || c == '}') {
    //         if (ans.empty()) {
    //             return false; 
    //         }

    //         char last = ans.back(); 
    //         if ((c == ')' && last != '(') ||
    //             (c == ']' && last != '[') ||
    //             (c == '}' && last != '{')) {
    //             return false; 
    //         }

    //         ans.pop_back(); 
    //     }
    // }
    // return ans.empty();
    //METHOD 2 USING STACK
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return 0;
            }
            else if(s[i]==')'){
                if(st.top()!='('){
                    return 0;
                }else{
                    st.pop();
                }
            }
            else if(s[i]=='}'){
                if(st.top()!='{'){
                    return 0;
                }else{
                    st.pop();
                }
            }
            else if(s[i]==']'){
                if(st.top()!='['){
                    return 0;
                }else{
                    st.pop();
                }
            }
        }
    }return st.empty();
}
    
};
