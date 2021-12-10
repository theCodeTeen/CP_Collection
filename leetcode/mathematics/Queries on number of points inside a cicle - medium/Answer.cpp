vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> answer;
        int count;
        for(long long int i=0;i<queries.size();i++)
        {
            count=0;
            for(long long int j=0;j<points.size();j++)
            {
                //checking if point is inside or not by getting length of line from point to center using pythagoras therorem as comparing it with radius
                if((((points[j][0]-queries[i][0])*(points[j][0]-queries[i][0]))+((points[j][1]-queries[i][1])*(points[j][1]-queries[i][1])))<=(queries[i][2]*queries[i][2]))
                {  count++;}
            }
            answer.push_back(count);
        }
        return answer;
}