class MinStack {
public:
    stack<int>s1;
    stack<int>s2;
    MinStack() {
        
    }
    
    void push(int val) {
         if(s1.empty()){
            s1.push(val);
            s2.push(val);
         }else{
            s1.push(val);
            s2.push(min(s2.top(),val));
         }
    }
    
    void pop() {
        if(!s1.empty()){
          s1.pop();
          s2.pop();  
        }
        
    }
    
    int top() {
        if(!s1.empty()){
            return s1.top();
        }else{
            return -1;
        }
    }
    
    int getMin() {
        if(!s2.empty()){
            return s2.top();
        }
        else{
            return -1;
        }
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
