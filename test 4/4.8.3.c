#include <stdio.h>

int main(void)
{
    double a=0;
    printf("����һ��С��:");
    scanf("%lf",&a);
    printf("a.����%.1lf��%.1e\n",a,a);
    printf("b.����%+.3lf��%.3E\n",a,a);
    system("pause");
    return 0;
}
