def sos(mini,arr,sub,n,subsize,total,node):
    if(total==mini):
        for i in range(subsize):
            print(sub[i],end=' ')
        print()
    if total > mini:
        return
    else:
        for i in range(node,n):
            sub[subsize]=arr[i]
            sos(mini,arr,sub,n,subsize+1,total+arr[i],i+1)

arr=[2,3,5,6,4]
sub=[0]*5
sos(10,arr,sub,5,0,0,0)
