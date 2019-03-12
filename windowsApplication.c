#include <windows.h>
#include <stdlib.h>
#include <string.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,PSTR szCmdLine, int iCmdShow)
{
    int sum=0,i;
    char str1[40]="1-100自然书数的和是：",str2[10];
    for(i=1;i<=100;i++)
    {
        sum=sum+i;
    }
    itoa(sum,str2,10); /*将整型变量sum的运算结果转化字符串str2，以方便显示*/
    strcat(str1,str2); /*将str1的值(1-100自然书数的和是：)与str2连接，以方便显示*/
    
    MessageBox(NULL,str1,"第二个Win32程序",MB_OK);
    return 0;
}