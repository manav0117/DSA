#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
  int halfSize=q.size()/2;
  queue<int> newQueue;
  for(int i=0;i<halfSize;i++)
  {
      int val=q.front();
      q.pop();
      newQueue.push(val);
  }
  while(!newQueue.empty())
  {
    int val=newQueue.front();
    newQueue.pop();
    q.push(val);
    val=q.front();
    q.pop();
    q.push(val);
  }

}
// INPUT :  1 2 3 4 5 6
// OUTPUT : 1 4 2 5 3 6


// 4 5 6 1
// 5 6 1 4
// 5 6 1 4 2
// 6 1 4 2 5
// 6 1 4 2 5 3
// 1 4 2 5 3 6