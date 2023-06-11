    #include<bits/stdc++.h>
    using namespace std;
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> ans;
        int top=0;
        int down=r-1;
        int left=0;
        int right=c-1;
        int dir=0;
        while(top<=down && left<=right)
        {
            if(dir==0)
            {
                // left to right 
                for(int i=left;i<=right;i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                top++;
                dir=1;
            }
            else if(dir==1)
            {
                // top to bottom
                for(int i=top;i<=down;i++)
                {
                    ans.push_back(matrix[i][right]);
                }
                right--;
                dir=2;
            }
            else if(dir==2)
            {
                // right to left
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(matrix[down][i]);
                }
                dir=3;
                down--;
                
            }
            else{
                // bottom to top
                for(int i=down;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
                dir=0;
            }
        }
        return ans;
    }