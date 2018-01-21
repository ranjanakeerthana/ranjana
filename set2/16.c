#include <stdio.h>
int main()
{
    int l, h, i, flag=0;
    while (l < h)
    {
          for(i = 2; i <= l/2; ++i)
        {
            if(l% i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", l);
        ++l;
    }
    return 0;
}
