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
        if (*pt)    //��鵱ǰԪ���Ƿ��ѱ�ɸ��
        {
            for (int i = base; i < SIZE; i++)
            {
                if (!num[i - 1])      //ͬ���ڽ���ɸѡ�Ĺ����У������ѱ�ɸ���Ķ���
                    continue;
                if ((i + 1) % base == 0)
                    num[i - 1] = FALSE;
            }
        }

        base++;
        pt++;

    }
    int count = 0;                    // ͳ�������ĸ���
    for (int i = 0; i < SIZE; i++)     //��ӡ����Ԫ����ΪTRUE��Ԫ�ص��±꣬����Ƿ�Ϊ������
        if (num[i] == TRUE)
        {
            printf("%d ", i + 2);����������������count++;
        }
    printf("\n ��%d ������\n", count);

    return 0;
}