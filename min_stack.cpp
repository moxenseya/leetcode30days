class MinStack {
public:
    /** initialize your data structure here. */
      
      stack <int> mystack;
         multiset<int> myset;
    MinStack() {
        
    }
    
    void push(int x) {
        mystack.push(x);
        myset.emplace(x);
    }
    
    void pop() {
        int num = mystack.top();
        mystack.pop();
        
        set<int>::iterator it= myset.find(num);
        if(it!=myset.end())
        {    cout << *it << endl;
            myset.erase(it);
        }
    }
    
    int top() {
        return mystack.top();
    }
    
    int getMin() {
        
        return (*myset.begin());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */