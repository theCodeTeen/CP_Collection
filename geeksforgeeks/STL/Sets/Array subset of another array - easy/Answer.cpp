string isSubset(int a1[], int a2[], int n, int m) {
    unordered_set<int> unset;
    for(int i=0;i<m;i++)
        unset.insert(a2[i]);
    for(int i=0;i<n;i++)
    {
        unordered_set<int>::iterator ptr=unset.find(a1[i]);
        if(ptr!=unset.end()) unset.erase(ptr);
    }
    if(unset.empty()) return "Yes";
    return "No";
}