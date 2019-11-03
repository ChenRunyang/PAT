import string
if __name__ == "__main__":
    src=[]
    for i in range(0,3):
        src.append(list(filter(None,input().split("["))))
    for tmp in range(0,3):
        for index in range(len(src[tmp])):
            src[tmp][index]=src[tmp][index][0:-1]
    s=int(input())
    det=[]
    for j in range(s):
        det.append([int(tmp) for tmp in input().split(" ")])
    for k in range(s):
        if(det[k][0]>len(src[0]) or det[k][4]>len(src[0]) or det[k][1]>len(src[1]) or det[k][3]>len(src[1]) or det[k][2]>len(src[2])):
            print("Are you kidding me? @\/@")
            continue
        print("%s(%s%s%s)%s" %(src[0][det[k][0]-1],src[1][det[k][1]-1],src[2][det[k][2]-1],src[1][det[k][3]-1],src[0][det[k][4]-1]))