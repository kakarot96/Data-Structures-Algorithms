from collections import deque
n = int(input())

with open('input.txt', 'r') as fp:
    inp = (fp.readline()).split()


print(len(inp))
list1 = [int(x) for x in inp]
print(len(list1))
list1.sort(reverse=True)
list2 = list1.copy()
list2.pop()


for x in reversed(list1):
    
    for y in reversed(list2):
        if x<y:
            list1.pop()
            list2.pop()
            break
        else:
            list2.pop()
            
print(sum(list1))
