import sys
t = int(sys.stdin.readline())
for _ in range(t):
    n = int(sys.stdin.readline())
    if(n==1):
        print("{0}".format(1))
        print("{0} {0}".format(1,1))
    else:
        y = (int)(n/2)
        print(y)
        if(n%2)==0:
            a = n
            b = n - 1
        else:
            a = n - 1
            b = n - 2
        y = y - 1;
        for j in range(0,y):
            print("2 {} {}".format(b,a))
            a=a-2
            b=b-2
        if(n%2)==0:
            print("2 2 1")
        else:
            print("3 2 {} 1".format(n))
        
        
