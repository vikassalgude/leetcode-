class Solution {
public:
    int evalRPN(vector<string>& t) {
        int i=0;
        stack<int>s;
        while(i<t.size()){
            if(t[i]=="+"){
                int a=s.top();s.pop();
                int b=s.top();s.pop();
                s.push(a+b);
            }
            else if(t[i]=="-"){
                int a=s.top();s.pop();
                int b=s.top();s.pop();
                s.push(b-a);
            }
            else if(t[i]=="/"){
                int a=s.top();s.pop();
                int b=s.top();s.pop();
                s.push(b/a);
            }
            else if(t[i]=="*"){
                int a=s.top();s.pop();
                int b=s.top();s.pop();
                s.push(a*b);
            }else{
                s.push(stoi(t[i]));
            }
            i++;
        }
        return s.top();
    }
};
