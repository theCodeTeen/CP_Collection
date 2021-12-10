var Solution = function(nums) {
    this.nums=nums;
};
Solution.prototype.pick = function(target) {
    let arr=[...this.nums];
    arr=arr.reduce((acc,el,i)=>el===target?[...acc,i]:acc,[]);
    let randIdx = Math.round((Math.random()*100))%arr.length;
    return arr[randIdx];
};