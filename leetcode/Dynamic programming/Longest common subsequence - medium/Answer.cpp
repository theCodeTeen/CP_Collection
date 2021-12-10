 unordered_set<string> getSubsequence(string inp,string out,unordered_set<string> &txtsub){
        if(inp.length()==0)
        {
            txtsub.insert(out);
            return txtsub;
        }
        getSubsequence(inp.substr(1),out+inp[0],txtsub);
        getSubsequence(inp.substr(1),out,txtsub);
        return txtsub;
}