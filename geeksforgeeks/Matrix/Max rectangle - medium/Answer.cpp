int maxArea(int M[MAX][MAX], int n, int m) {
        vector<vector<int> > sumOfRow(n,vector<int>(m,0));
        int temp,max=0;
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        if(j==0) 
        sumOfRow[i][j]=M[i][j];
        else
        sumOfRow[i][j]=sumOfRow[i][j-1]+M[i][j];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int left,right,top,bottom;
                if(M[i][j]==1)
                {
                    left=j;
                    while(M[i][j]==1)
                    if(j==m) break;
                    else j++;
                    right=j-1;
                    temp=right;
                    //cout<<left<<" "<<right<<endl;
                    top=i;
                    
                    while(right>=left&&i<n)
                    {
                    while(sumOfRow[i][right]-sumOfRow[i][left]+M[i][left]==right-left+1)
                    if(i==n-1){i++; break;}
                    else i++;
                    bottom=i-1;
                    //cout<<top<<" "<<bottom<<endl;
                    
                    if(max<(right-left+1)*(bottom-top+1)) max=(right-left+1)*(bottom-top+1);
                    right--;
                    //cout<<"m="<<max<<endl;
                    }
                    i=top;
                    j=left;
                }
            }
        }
        return max;
}