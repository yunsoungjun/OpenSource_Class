def findmin(a,b,c):
    if a<b:
        small=a
    else:
        small=b
    if c<smallest :
        small=c

    return small

a = int(input("첫 번째 숫자 입력: "))
b = int(input("두 번째 숫자 입력: "))
c = int(input("세 번째 숫자 입력: "))

smallest = findmin(a,b,c)
print(a,b,c, "중 가장 작은 수는", smallest,"입니다.")
