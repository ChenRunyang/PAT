#include <iostream>
using namespace std;
int m,x,y;
void print(double t){//最好不要写int，因为ｋ是double型 
    if (m==t) cout << " Ping";
    if (m<t) cout << " Cong";
    if (m>t) cout << " Gai"; 
}
int main()
{
    cin >> m >> x >> y;
    int i;
    for (i=99;i>=10;i--){//99到-10循环可以保证情况不唯一时，以甲的最大解 
        int j = i%10*10+i/10;
        double k = abs(i-j)*1.0/x;//　不要忘记1.0 ,测试点4
        if (j==k*y){
            cout << i;
            print(i);print(j);print(k);
            return 0;
        }
    }
    cout << "No Solution"; 
    return 0;
}