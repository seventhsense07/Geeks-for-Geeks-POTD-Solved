class Solution
{
    public:
    int n,m;
    vector<pair<int,int>> dir={
        {1,0},{-1,0},{0,1},{0,-1}
    };
    
    struct node
    {
        int i,j,lev;
        node(int i,int j,int lev)
        {
            this->i=i;
            this->j=j;
            this->lev=lev;
        }
    };
    
    bool isValid(int i,int j)
    {
        return !(i<0||i>=n||j<0||j>=m);
    }
   
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    queue<node> q;
	    n=grid.size();
	    m=grid[0].size();
	    vector<vector<int>> vis(n+1,vector<int>(m+1,0));
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(grid[i][j])
	            {
	                node obj(i,j,0);
	                q.push(obj);
	                vis[i][j]=1;
	                grid[i][j]=0;
	            }
	        }
	    }
	    
	    while(!q.empty())
	    {
	        node obj=q.front();
	        q.pop();
	        for(auto &d: dir)
	        {
	            int x1=obj.i+d.first,y1=obj.j+d.second,k=obj.lev+1;
	            if(isValid(x1,y1)&& !vis[x1][y1])
	            {
	                grid[x1][y1]=k;
	                node new_obj(x1,y1,k);
	                q.push(new_obj);
	                vis[x1][y1]=1;
	            }
	        }
	    }
	    return grid;
	}
};
