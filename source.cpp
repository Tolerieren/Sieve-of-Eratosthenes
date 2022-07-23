# include <stdio.h>

# define  SIZE 100
# define TRUE 1
# define FALSE 0

int main()
{
    int num[100];
    int* pt = &num[0];


    for (int i = 0; i < SIZE; i++)
        num[i] = TRUE;

    int base = 2;
    while (pt < &num[SIZE])             
    {
        if (*pt)    //检查当前元素是否已被筛除
        {
            for (int i = base; i < SIZE; i++)
            {
                if (!num[i - 1])      //同理，在进行筛选的过程中，跳过已被筛除的对象
                    continue;
                if ((i + 1) % base == 0)
                    num[i - 1] = FALSE;
            }
        }

        base++;
        pt++;

    }

    int count = 0;                    // 统计质数的个数
    for (int i = 0; i < SIZE; i++)     //打印数组元素中为TRUE的元素的下标，检查是否为质数。
        if (num[i] == TRUE)
        {
            printf("%d ", i + 2);　　　　　　　　
            count++;
        }
    printf("\n 有%d 个素数\n", count);

    return 0;
}
