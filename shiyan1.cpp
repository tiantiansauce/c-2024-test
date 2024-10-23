/*
运输公司对用户计算运费。
路程(s)越远，每吨每公里运费越低。标准如下：
s<250km，没有折扣250≤s<500km，2%折扣
500≤s<1000km，5%折扣
1000≤s<2000km，8%折扣
2000≤s<3000km，10%折扣
3000km≤s，15%折扣


设每公里每吨货物的基本运费为 p，货物重为 w，距离为 s，折扣为 d，则总运费 f
的计算公式为：
f＝p*w*s*(1－d)。
请使用 if 语句和 switch 语句来实现求运费的程序

*/
#include<iostream>
using namespace std;
double  calculatefreight(double  p, double  w,double  s){
    int a;//a是case的条件
    if(s<250) a=1;
    else if(250<=s&&s<500) a=2;
    else if(1000<=s&&s<2000) a=3;
    else if(2000<=s&&s<3000) a=4;
    else if(s>=3000) a=5;
    double d=0.0;
    switch (a) {
        case 1: d=0;
            break;
        case 2: d=0.02;
            break;
        case 3: d=0.08;
            break;
        case 4: d=0.1;
            break;
        case 5: d=0.15;
            break;
    }
    double f = p*w*s*(1-d);
    return(f);
}

int main (){
    int p,w,s;
    cout << "基本运费p（元）：";
    cin >> p;
    cout << "货物重w（吨）：";
    cin >> w;
    cout << "距离为s（公里）";
    cin >> s;
    double freight =calculatefreight(p,w,s);
    cout << freight << endl;
    return 0;
}