vector<int> sortAndMerge(vector<vector<int> > &matrix,vector<int> &state,int r,int c){
        vector<int> newState;
        int i=0,j=0;
        while(i<state.size()&&j<matrix[r-1].size())
        {
            if(state[i]<matrix[r-1][j])
            {
                newState.push_back(state[i]);
                i++;
            }
            else 
            {
                newState.push_back(matrix[r-1][j]);
                j++;
            }
        }
        while(i<state.size())
        {
            newState.push_back(state[i]);
            i++;
        }
        while(j<matrix[r-1].size())
        {
            newState.push_back(matrix[r-1][j]);
            j++;
        }
        if(r-1>0)
        newState=sortAndMerge(matrix,newState,r-1,c);
        return newState;
}
int median(vector<vector<int>> &matrix, int r, int c){
        vector<int> sorted1D;
        sorted1D= sortAndMerge(matrix,sorted1D,r,c); 
        //cout<<r<<" "<<c<<" "<<(r*c)/2<<" "<<(int)(r*c)/2<<endl;
        return sorted1D[(int)(r*c)/2];
}