#所以相邻两个数的时候一定一奇一偶？那么多数任选一个喽？
# l, r = [int(x) for x in input().split()]
# if r == l:
#     print(l)
# else:
#     print(2)

l, r = [int(x) for x in input().split()]
if r-l >= 2:
    print(2)
else:
    print(l)
