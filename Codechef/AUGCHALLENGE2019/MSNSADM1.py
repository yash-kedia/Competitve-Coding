//link https://www.codechef.com/AUG19B/problems/MSNSADM1


for _ in range (int(input())):
	z=int(input())
	a=list(map(int,input().split()))
	b=list(map(int,input().split()))
	temp=0
	for i in range(z):
		s=int(a[i]*20-b[i]*10)
		if(s<0):
                    s=0
		if(s>temp):
			temp=s
	print(temp)


