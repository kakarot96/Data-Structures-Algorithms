'''
            Problem Statement:
            
            There are N frustrated coders standing in a circle with a gun in their hands. Each coder has a skill value S[ i ] and he can only kill those coders 
            have strictly less skill than him. One more thing, all the guns have only 1 bullet. This roulette can take place in any random order. Fortunately, 
            you have the time stone (haaan wo harre wala) and you can see all possible outcomes of this scenario. Find the outcome where the total sum of the 
            remaining coder's skill is minimum. Print this sum.
            
'''


from collections import deque
n = int(input())
list1 = []
inp = input().split()
for x in range(n):
    list1.append(int(inp[x]))

list1.sort()
list2 = list1.copy()
list2.pop()
sum=0
for x in reversed(list1):
    
    
    for y in reversed(list2):
        if x>y:
            
            list2.pop()
            
            break
            
        else:
            
            sum=sum+y
            list2.pop()
    
        
print(sum+list1.pop())
