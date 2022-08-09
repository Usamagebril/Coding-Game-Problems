import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(input())
hourses = [] 
for i in range(n):
    pi = int(input())
    hourses.append(pi)
hourses.sort()
answer = abs(hourses[1]-hourses[0])
for i in range(len(hourses)-2):
    if abs(hourses[i+1]-hourses[i+2]) < answer:
        answer =  abs(hourses[i+1]-hourses[i+2])

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

print(answer)
