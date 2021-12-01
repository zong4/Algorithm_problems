sum = 0
for i in range(1,2020): # 2019 plus 1
    s = str(i)
    s = set(s)
    if '2' in s or '0' in s or '1' in s or '9' in s:
         sum = sum + i*i
print(sum)
