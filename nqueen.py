x=[-1]*8
sf=False
def display(x, n):
    for i in range(n):
        for j in range(n):
            if x[i] == j:
                print('Q ', end='')
            else:
                print('* ', end='')
        print()
    print()
def place(x, k, n):
    for i in range(k):
        if x[i] == n or abs(x[i] - n) == abs(i - k):
            return False
    return True

def nqueen(n,k=0):
    global sf
    if sf:
        return
    if(k==n):
        print(x)
        display(x,n)
        sf=True
        return ;
    for i in range(n):
        if(place(x,k,i)):
            x[k]=i
            nqueen(n,k+1)
            if(sf):
                return
            x[k]=-1
        
nqueen(8)
