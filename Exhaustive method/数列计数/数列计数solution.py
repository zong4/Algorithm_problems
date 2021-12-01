# However the num which used most frequently is 0 or 1, so just take count of them two
cnt0 = 0
cnt1 = 0
for i in range(1, 20210):
    s = str(i)
    cnt0 = cnt0 + s.count('0')
    cnt1 = cnt1 + s.count('1')
    if cnt0 == 2021 or cnt1 == 2021:
        print(i)
        break
