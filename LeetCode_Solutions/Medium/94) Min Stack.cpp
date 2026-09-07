class MinStack {
public:
    stack<int> s;
    stack<int> minimum;

    MinStack() {
        
    }
    
    void push(int value) {
        s.push(value);

        if (minimum.empty() || value <= minimum.top())
            minimum.push(value);
    }
    
    void pop() {
        if (s.top() == minimum.top())
            minimum.pop();

        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minimum.top();
    }
};
