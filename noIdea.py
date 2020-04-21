def happiness(array,m):
    print("Helloo")
    happiness=0
    for i in range(n):
        for j in range(m):
            if(array[i]==A[j]):
                happiness=happiness+1
    for i in range(n):
        for j in range(m):
            if(array[i]==B[j]):
                happiness=happiness-1
    print(happiness)
            


if __name__=="__main__":
    array=[]
    A=[]
    B=[]
    m,n=map(int,input().split())
    #n,m=input().split()
    #m=int(input(""))
    #print("Taken")
    for i in range(n):
        y=map(int,input().split())
        array.append(y)
    
    for i in range(m):
        y=map(int,input().split())
        A.append(y)
    
    for i in range(m):
        y=map(int,input().split())
        B.append(y)
    print("Hello")
    happiness(array,m)