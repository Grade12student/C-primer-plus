#include<stdio.h>
int main(void)
{
    int ages;
    double seconds;
    printf("������:");
    scanf("%d",&ages);
    seconds=ages*3.156e7;
    printf("��������Ӧ��������:%e��.",seconds);
    system("pause");
    return 0;
}
