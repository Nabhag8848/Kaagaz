#include <stdio.h>

int main(void)
{
    float array[4];
    int j;
    for (j = 0; j < 4; j++)
    {
        printf("\n Enter %d input :", j + 1);
        scanf("%f", &array[j]);
    }

    int length = 4;
    float big, small;

    big = small = array[0];
    for (int i = 0; i < length; i++)
    {
        if (array[i] > big)
        {
            big = array[i];
        }

        if (array[i] < small)
        {
            small = array[i];
        }
    }

    printf("The biggest Number is:\t%f\n", big);
    printf("The smallest Number is:\t%f\n", small);

    float sub;
    sub = big - small;
    printf("\n The difference between the Numbers is:\t%f\n", sub);
    printf("\n Id : 20DCE88");
    return 0;
}
