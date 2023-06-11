//Function to reverse the queue.
void solve(queue<int> &q)
{
    if(q.empty())
    {
     
        return ;
    }
    
    int elem=q.front();
    q.pop();
    solve(q);
    q.push(elem);
}
queue<int> rev(queue<int> q)
{
    //queue<int>ans;
    solve(q);

   
    return q;
}

/*
 queue<int> rev(queue<int> q)
{
    //queue<int>ans;
    int n=q.size();
    stack<int> stk;
    while(!q.empty())
    {
     int element=q.front();
     q.pop();
     stk.push(element);
    }
    while(!stk.empty())
    {
        int element=stk.top();
        q.push(element);
        stk.pop();
    }
    return q;
}
*/