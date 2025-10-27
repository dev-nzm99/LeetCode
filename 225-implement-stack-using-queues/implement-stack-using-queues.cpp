/*
 Author: Nazmul Islam
 Created: 2025-10-27 14:22
 Complexity: Push in O(n) and Pop() in O(1)
*/

class MyStack {
private:
    queue<int> q1, q2;

public:
    MyStack() {}
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }
    int pop() {
        if (q1.empty())
            return -1;
        int val = q1.front();
        q1.pop();
        return val;
    }
    int top() { return (q1.empty()) ? -1 : q1.front(); }

    bool empty() { return q1.empty(); }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */