t = int(input())
i=1;
while i<=t:
    inp = list(map(int, input().strip().split()))[:3]
    inp.sort()
    print("YES") if inp[0] + inp[1] == inp[2] else print("NO")
    i+=1