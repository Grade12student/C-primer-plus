#include<stdio.h>
int main(void)
{
    float water=0.0,n=0.0;
    double m;
    printf("������ˮ�Ŀ�����:\n");
    scanf("%f",&water);
    n=water*950;
    m=n/3.0e-23;
    printf("��ô����Ϊ%.2f�˵�ˮ��ˮ����������:%le\n"
           ,n,m);
    system("pause");
    return 0;
}
