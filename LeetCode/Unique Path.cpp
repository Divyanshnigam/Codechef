//

class Solution {
public:
    int path(int m,int n,int i,int j)
    {
        int a[1000][1000]={0};
        if(i>=m or j>=n)
        {
            return 0;
        }
        if(i==m-1 and j==n-1)
        {
            return 1;
        }
        return path(m,n,i+1,j) + path(m,n,i,j+1);
    }
    int uniquePaths(int m, int n) 
    {
       int k=path(m,n,0,0);
        return k;
    }
};

// better aproach
class Solution {
public:
    int uniquePaths(int m, int n) {
        int path[m][n];   

    for (int i = 0; i < m; i++) 
        path[i][0] = 1; 
  
 
    for (int j = 0; j < n; j++) 
        path[0][j] = 1; 
  
  
    for (int i = 1; i < m; i++) { 
        for (int j = 1; j < n; j++) 
  
          
            path[i][j] = path[i - 1][j] + path[i][j - 1]; 
    } 
    return path[m - 1][n - 1]; 
    }
    
};
