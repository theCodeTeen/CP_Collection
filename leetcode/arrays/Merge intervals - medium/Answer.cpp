vector<vector<int>> merge(vector<vector<int>>& intervals) {
       
        
       int start,end,idx=0;
       vector<vector<int> > newIntervals;
       vector<int> xy;
        
       sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int> &b){
            return a.at(0) < b.at(0);
        }); 
       
       while(idx<intervals.size())
       {
           start=intervals[idx][0];
           end=intervals[idx][1];
         
           idx++;
           while(idx<intervals.size()&&end>=intervals[idx][0])
           {
               
               if(intervals[idx][1]>end) end=intervals[idx][1];
               idx++;
           }
         
           xy.push_back(start);
           xy.push_back(end);
           newIntervals.push_back(xy);
           xy.clear();
       }
        
       return newIntervals; 
}