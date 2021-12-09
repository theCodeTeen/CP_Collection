bool areRotations(string s1,string s2)
{
        if(s1.length()!=s2.length()) return false;
        
        
        for(long long int i=0;i<s2.length();i++)
        {
            long long int j=0,tempi=i;
            if(s1[j]==s2[i])
            {
                while(s1[j]==s2[tempi]&&tempi<s2.length()){
                    tempi++;
                    j++;
                }
                if(tempi==s2.length())
                {
                    tempi=0;
                    while(s1[j]==s2[tempi]&&j<s1.length()){
                        tempi++;
                        j++;
                    }
                    if(j==s1.length()) return true;
                }
            }
        }
        return false;
}