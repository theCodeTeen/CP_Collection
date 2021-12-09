class Solution:

	def valueEqualToIndex(self,arr, n):
		# code here
		ansarr=[]
                for i in range(n):
                   if arr[i]==i+1:
                      ansarr.append(i+1)
                return ansarr

