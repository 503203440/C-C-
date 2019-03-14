#include <stdio.h>
#include <windows.h>

//¿¿¿¿¿¿¿¿¿¿¿¿¿¿¿#¿¿¿

void main()
{

    printf("[ÕýÔÚ°²×°]################################\t");

    int i=0;

    while(i<100)
    {
        i++;
        printf("%d%%",i);
        Sleep(100);
        if(i>=10)
        {
            printf("\b\b\b");
        }
        else
        {
            printf("\b\b");
        }

    }



    Sleep(3000);
}
