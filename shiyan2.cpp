/*�ҳ� 1000~2000 ���ȫ�������1�7 ������
����ж�һ���� m �Ƿ�Ϊ������

�� k= �̔3�2 , ��� m ���ܱ� 2��k ֮���κ�һ�������������� m ��������������������
*/
#include <iostream>
#include <cmath>
int function(int m) {
    int k = static_cast<int>(sqrt(m));//��m��ƽ����
    if(m<=1) return 0;//�����Ǵ���1�ģ�1��������
    for(int i=2;i<=k;i++) {//ѭ���ж��Ƿ�������.��� m ���ܱ� 2��k ֮���κ�һ�������������� m ������������������
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