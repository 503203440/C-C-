#include <windows.h>
#include <stdlib.h>
#include <string.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,PSTR szCmdLine, int iCmdShow)
{
    int sum=0,i;
    char str1[40]="1-100��Ȼ�����ĺ��ǣ�",str2[10];
    for(i=1;i<=100;i++)
    {
        sum=sum+i;
    }
    itoa(sum,str2,10); /*�����ͱ���sum��������ת���ַ���str2���Է�����ʾ*/
    strcat(str1,str2); /*��str1��ֵ(1-100��Ȼ�����ĺ��ǣ�)��str2���ӣ��Է�����ʾ*/
    
    MessageBox(NULL,str1,"�ڶ���Win32����",MB_OK);
    return 0;
}