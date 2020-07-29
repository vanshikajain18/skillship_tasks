TASK 2
DESIGN CIRCULAR DEQUEUE 

vector<int>dq;
    int s;
    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k) {
        dq.clear();
        s=k;
    }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if(dq.size()==s)return false;
        dq.insert(dq.begin(),value);
        return true;
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if(dq.size()==s)return false;
        dq.push_back(value);
        return true;
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if(dq.empty())return false;
        dq.erase(dq.begin());
        return true;
    }
    
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if(dq.empty())return false;
        dq.pop_back();
        return true;
    }
    
    /** Get the front item from the deque. */
    int getFront() {
        if(dq.empty())return -1;
        return dq[0];
    }
    
    /** Get the last item from the deque. */
    int getRear() {
        if(dq.empty())return -1;
        return dq[dq.size()-1];
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return dq.empty();
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        if(dq.size()==s)return true;
        return false;
    }
    
    
    
TASK 3
IMPLEMENT STACK USING QUEUES

   queue<int>q1;
    queue<int>q2;
    
    /** Initialize your data structure here. */
    MyStack() {
        while(!q1.empty())q1.pop();
        while(!q2.empty())q2.pop();
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(q1.size()==0)return -1;
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans= q1.front();
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return ans;
    }
    
    /** Get the top element. */
    int top() {
        if(q1.size()==0)return -1;
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans= q1.front();
        q2.push(ans);
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return ans;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
    
   
   
    TASK 4 
    IMPLEMENT QUEUE USING STACK
    
    stack<int>s1;
    stack<int>s2;
    /** Initialize your data structure here. */
    MyQueue() {
        while(!s1.empty())s1.pop();
        while(!s2.empty())s2.pop();
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(s1.empty())return -1;
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int ans=s2.top();
        s2.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }
    
    /** Get the front element. */
    int peek() {
        if(s1.empty())return -1;
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int ans=s2.top();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }
