#include<stdio.h>
int main(void)
{
    float p=0.0,b=0.0,a=0.0,d=0.0,c=0.0;
    printf("�����뱭��:");
    scanf("%f",&b);
    p=b/2;
    a=b*8;
    d=a*2;
    c=d*3;
    printf("��Ʒ�ѡ���˾�������ס�����Ϊ��λ��ʾ�����ֱ���%.3f,%.3f,%.3f,%.3f.\n"
           ,p,a,d,c);
    system("pause");
    return 0;
}
