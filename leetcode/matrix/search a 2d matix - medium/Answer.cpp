bool binarySearch(int left,int right,vector<int> &v,int target)
    {
      if(left<=right){
        int mid=(left+right)/2;
        if(v[mid]==target) return true;
        if(v[mid]<target) return binarySearch(mid+1,right,v,target);
        else return binarySearch(left,mid-1,v,target);
      }
      return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
          if(matrix[i][0]>target) break;
          if(binarySearch(0,matrix[i].size()-1, matrix[i],target)) return true;
        }
      return false;
}