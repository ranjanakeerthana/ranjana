#include <stdio.h>
#include <math.h>

int main()
{
    int l, h, i, t1, t2, r, n = 0, result = 0;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &l, &h);
    printf("Armstrong numbers between %d an %d are: ", l, h);

    for(i = l + 1; i < h; ++i)
    {
        t2 = i;
        t1 = i;

            while (t1 != 0)
        {
            t1 /= 10;
            ++n;
        }

    
        while (t2 != 0)
        {
            r = t2 % 10;
            result += pow(r, n);
            t2 /= 10;
        }

        // checks if number i is equal to the sum of nth power of its digits
        if (result == i) {
            printf("%d ", i);
        }

        // resetting the values to check Armstrong number for next iteration
        n = 0;
        result = 0;

    }
    return 0;
}
