import math
if __name__ == "__main__":
    src=[float(tmp) for tmp in input().split()]
    src2=[src[0]*src[2],src[1]+src[3]]
    print("%.2f"% (src2[0]*math.cos(src2[1])),end="")
    demo=src2[0]*math.sin(src2[1])
    if demo>=0:
        print("+%.2fi"% demo)
    else:
        print("%.2fi"% demo)
