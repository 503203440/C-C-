#include <stdio.h>
#include <unistd.h>

int main()
{

	printf("Releasing a virus file...\n");


	int CharCount=100;

	int i=1;

	while(i<100)
	{
///////////////////////////////////////////////////////////////////////////////////////////////////////
		int ci=CharCount*i/100;
		int item=0;
		while(item<ci)
		{
			printf("#");
			item++;
		}
//////////////////////////////////////////////////////////////////////////////////////////////////////
		int nullCharCount=CharCount-ci;
		int nullCharItem=0;
		while(nullCharItem<nullCharCount)
		{
			printf(" ");
			nullCharItem++;
		}
///////////////////////////////////////////////////////////////////////////////////////////////////////
		i++;
		printf("\t%d%%",i );

		//linux��usleep��ͷ�ļ�unistd.h�У�usleep�Ĳ���Ϊ�����֮һ��
		//
		//linux��sleep�����Ĳ���Ϊ�룬��Windows�е�sleep�����Ĳ���Ϊ����
		//
		usleep(100000);
		printf("\r");

		// fflush(stdout)//ǿ��ˢ�»��棬�����ʾ���Ա�֤��������ʵʱ��
		fflush(stdout);
	}


	printf("\nDeployment is complete!\n");

	sleep(1);

	return 0;
}
