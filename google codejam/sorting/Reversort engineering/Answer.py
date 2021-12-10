def createArray(no):
    arr=[]
    for i in range(1,no+1):
        arr.append(i)
    return arr

def ArrayOpp(no,cost):
    if cost<no-1:
        return []
    arr=[]
    t=0
    c=1 
    for i in range(no-1,0,-1):
        c+=1 
        
        if t+c+i-1>=cost:
            r=cost-t-i+1 
            arr.append(r)
            for k in range(i-1):
                arr.append(1)
            t=cost
            break
        
        t+=c 
        arr.append(c)
    if t<cost:
        return[]
    return arr 

def opp(arr,opArray):
    length=len(opArray)
    for i in range(length):
        t=len(arr)-(i+2)
        sp=t+opArray[i]
        arr=arr[:t]+list(reversed(arr[t:sp])) + arr[sp:]
    return arr

def solution():
    inp=input().split()
    no=int(inp[0])
    cost=int(inp[1])
    arr=createArray(no)
    opArray=ArrayOpp(no,cost)
    arr=opp(arr,opArray)
    result=""
    if opArray:
        for item in arr:
            result += str(item)+" "
    else:
        result="IMPOSSIBLE"
    print("Case #"+str(i+1)+": "+str(result))
    
for i in range(int(input())):
    solution()

#Author: Dharmik Bhadra