first, second, third = 1, 1, 1
for i in range(4, 20190325):
    present = (first + second + third)%10000 # four bits
    first = second
    second = third
    third = present
print(present)
