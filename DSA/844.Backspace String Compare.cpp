class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // WRONG MTHOD
        // stack<char>st;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='#'){
        //         if(!st.empty()){
        //         st.pop();}
        //     }else{
        //         st.push(s[i]);
        //     }
        // }
        // string a="";
        // while(!st.empty()){
        //     a+=st.top();st.pop();
        // }
        // for(int i=0;i<t.size();i++){
        //     if(s[i]=='#'){
        //         if(!st.empty()){
        //         st.pop();}
        //     }else{
        //         st.push(s[i]);
        //     }
        // }
        // string b="";
        // while(!st.empty()){
        //     b+=st.top();st.pop();
        // }
        // return a==b;
        std::stack<char> stS, stT;
    // CORRECT METHOD
    // Process the first string
    for (char ch : s) {
        if (ch == '#') {
            if (!stS.empty()) {
                stS.pop();
            }
        } else {
            stS.push(ch);
        }
    }

    // Process the second string
    for (char ch : t) {
        if (ch == '#') {
            if (!stT.empty()) {
                stT.pop();
            }
        } else {
            stT.push(ch);
        }
    }

    // Compare the two stacks
    while (!stS.empty() && !stT.empty()) {
        if (stS.top() != stT.top()) {
            return false;
        }
        stS.pop();
        stT.pop();
    }

    // If one stack is empty and the other is not, they are not equal
    return stS.empty() && stT.empty();
    }
};
