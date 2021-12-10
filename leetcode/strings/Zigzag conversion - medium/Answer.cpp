string convert(string s, int numRows) {
        
        if(numRows==1) return s;
        
        string newStr="";
        int cache;
        for(int i=0;i<numRows;i++)
        {
            if(i>=s.length()) break;
            int temp=i;
            cache=temp;
            newStr+=s[i];
            
            while(temp<s.length())
            {
                temp+=(((numRows*2)-2)-i*2);
                if(temp>=s.length()) break;
                if(cache!=temp){
                    cache=temp;
                    newStr+=s[temp];
                }
                
                
                
                temp+=(i*2);
                if(temp>=s.length()) break;
                if(cache!=temp){
                    cache=temp;
                    newStr+=s[temp];
                }
                
            }
        }
        return newStr;
}