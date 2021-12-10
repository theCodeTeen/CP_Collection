unordered_map<string,bool> memo;
bool isMatch(string s, string p) {
        
        if(memo.find(s+"+"+p)!=memo.end()) return memo[s+"+"+p];
        if(s==""&&p=="") return true;
        
        if(s!=""&&p=="") return false;
        
        bool b=false;
        if(p[1]=='*'){
            
            for(int i=0;i<=s.length();i++)
            {
                
                b=b||isMatch(s.substr(i),p.substr(2));
                
                if(s[i]!=p[0]&&p[0]!='.')
                   break;
            }
            memo[s+"+"+p]=b;
            return b;
        }
        else if(p[0]=='.'||p[0]==s[0]){
            if(s.length()==0)
                return false;
            b=isMatch(s.substr(1),p.substr(1));
            memo[s+"+"+p]=b;
            return b;
        }
        memo[s+"+"+p]=false;
        return false;
}