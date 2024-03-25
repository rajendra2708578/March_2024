




//this is functional code neither header files nor main are included in it.
 stack<int> insertAtBottom(stack<int> st,int x){
        
        stack<int>st1;
        while(!st.empty())
        {
            st1.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!st1.empty())
        {
            st.push(st1.top());
            st1.pop();
        }
        return st;
    }