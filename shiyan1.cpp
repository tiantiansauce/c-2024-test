/*
���乫˾���û������˷ѡ�
·��(s)ԽԶ��ÿ��ÿ�����˷�Խ�͡���׼���£�
s<250km��û���ۿ�250��s<500km��2%�ۿ�
500��s<1000km��5%�ۿ�
1000��s<2000km��8%�ۿ�
2000��s<3000km��10%�ۿ�
3000km��s��15%�ۿ�


��ÿ����ÿ�ֻ���Ļ����˷�Ϊ p��������Ϊ w������Ϊ s���ۿ�Ϊ d�������˷� f
�ļ��㹫ʽΪ��
f��p*w*s*(1��d)��
��ʹ�� if ���� switch �����ʵ�����˷ѵĳ���

*/
#include<iostream>
using namespace std;
double  calculatefreight(double  p, double  w,double  s){
    int a;//a��case������
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
    cout << "�����˷�p��Ԫ����";
    cin >> p;
    cout << "������w���֣���";
    cin >> w;
    cout << "����Ϊs�����";
    cin >> s;
    double freight =calculatefreight(p,w,s);
    cout << freight << endl;
    return 0;
}