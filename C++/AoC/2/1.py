f=open("/home/h3kste12/code/Python/AoC/2/input.txt")
for line in f:
    t=line.split(' ');
    for i in range(0,len(t),2):
        temp1 = t[i]
        temp2=t[i+1]
        temp2=temp2[:-1]
        if(temp2.isnumeric()):
            id=int(temp2)
        
        