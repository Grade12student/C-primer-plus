#include <stdio.h>
#define A 3.785 //1 gasoline=3.785 liters
#define B 1.609 //1 mile=1.609 kilometers
int main(void)
{
    double mileage,gasoline,mg;

    printf("�������������(Ӣ��)�����ĵ�������(����):");
    scanf("%f%f",&mileage,&gasoline);

    mileage=(mileage*B);
    gasoline=gasoline*A;
    mg=gasoline/(mileage*100);

    printf("ÿ��������ʻ%.1f����.\n",mg);
    printf("ÿ1������%.1f������.\n",1/mg);

    system("pause");
    return 0;
}
