arr=[]
t=[]
t1=[]
t2=[]
n=int(input('no of elements? \n'))
for x in range(0,n):
	num=int(input())
	arr.append(num)
for x in arr:
	if x not in t:
		t.append(x)
	else:
		t1.append(x)
for x in t:
	if x not in t1:
		t2.append(x)
print (t2)
