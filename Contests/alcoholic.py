bottle
alcohol
n = input()
x = input()

sum = 0.0

for i in range(int(n)):
    bottle= input()
    alcohol = input()
    tmp = int(bottle)*int(alcohol)/100.0
    sum+=tmp
    if sum>x:
        print(i+1)
        return 0

print(-1)
