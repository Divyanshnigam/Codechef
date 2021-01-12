class Solution {
public:
    
bool isvalid(vector<vector<char>>&board ,int x,int y,int val)
{
		for(int j=0;j<9;j++)
		{
			if(board[x][j]-'0'==val)
			{
				return false;
			}
		}
		for(int i=0;i<9;i++)
		{
			if(board[i][y]-'0'==val)
			{
				return false;
			}
		}
		int smi=x/3*3;
		int smj=y/3*3;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(board[smi+i][smj+j]-'0'==val)
				{
					return false;
				}
			}
		}
		return true;
}
    
    bool solve(vector<vector<char>>&board ,int i,int j)
    {
       // int n=board.size();
        if(i==9)
        {
            return 1;
        }
        
        if(j==9)
        {
            return solve(board,i+1,0);
        }
        
        if(board[i][j]!='.')
        {
            return solve(board,i,j+1);
        }
        else
        {
            for(int po=1;po<10;++po)
            {
                if(isvalid(board,i,j,po)==true)
                {
                    board[i][j] = po+'0';
                    if(solve(board,i,j+1))
                    {
                        return 1;
                    }
                    board[i][j] = '.';
                }
            }
        }
        return 0;
    }
    void solveSudoku(vector<vector<char>>& board) 
    {
        solve(board,0,0);
    }
};
