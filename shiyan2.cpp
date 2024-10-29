/*找出 1000~2000 间的全部素数｡ 分析：
如何判断一个数 m 是否为素数？

令 k= √𝑚 , 如果 m 不能被 2～k 之中任何一个整数整除，则 m 是素数，否则不是素数。
*/
#include <iostream>
#include <cmath>
int function(int m) {
    int k = static_cast<int>(sqrt(m));//求m的平方根
    if(m<=1) return 0;//素数是大于1的，1不是素数
    for(int i=2;i<=k;i++) {//循环判断是否是素数.如果 m 不能被 2～k 之中任何一个整数整除，则 m 是素数，否则不是素数
        if(m%i==0) return 0;
    }
    return  m;
}

int main() {
    for(int m=1000;m<=2000;m++) {
        int a=function(m);
        if(a!=0)
        std::cout<<a<<" ";
    }
    return 0;
}