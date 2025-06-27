"""
www -> wbw : +1
bww -> bbw : 0
wwb -> wbb : 0
bwb -> bbb : -1
bbb -> bwb : +1
bbw -> bww : 0
wbb -> wwb : 0
wbw -> www : -1

両端は選ばれない
"""

N, Q = map(int, input().split())
A = list(map(int, input().split()))
L = [False for _ in range(N+2)]
cnt = 0
for i in range(Q):
    a = A[i]
    a -= 1
    if L[a]:
        L[a] = False # xbx -> xwx
        if L[a-1] == L[a+1] == True:
            cnt += 1
        elif L[a-1] == L[a+1] == False:
            cnt -= 1
    else:
        L[a] = True # xwx -> xbx
        if L[a-1] == L[a+1] == False:
            cnt += 1
        elif L[a-1] == L[a+1] == True:
            cnt -= 1
    print(cnt)