var lengthOfLongestSubstring = function(s) {
    let tempStr="",no,max=0;
    for(let i=0;i<s.length;i++)
    {
        no=tempStr.indexOf(s[i]);
        if(!(no==-1))
        {
            tempStr=tempStr.slice(no+1);
        }
        tempStr+=s[i];
        if(tempStr.length>max)
            max=tempStr.length;
        console.log(tempStr);
    }
    return max;
};