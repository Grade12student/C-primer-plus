#include <stdio.h>

int main(void)
{
    float size,time,speed;
    printf("�������ļ���С(MB)�ʹ���(Mb/s):");
    scanf("%f%f",&size,&speed);
    time=size*8.0/speed;
    printf("At %.2f megabits per second,a file of %.2f"
           " megabytes\ndownloads in %.2f seconds.\n"
           ,speed,size,time);
    system("pause");
    return 0;
}
