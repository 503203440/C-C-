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

		//linux中usleep在头文件unistd.h中，usleep的参数为百万分之一秒
		//
		//linux的sleep函数的参数为秒，而Windows中的sleep函数的参数为毫秒
		//
		usleep(100000);
		printf("\r");

		// fflush(stdout)//强制刷新缓存，输出显示，以保证进度条的实时性
		fflush(stdout);
	}


	printf("\nDeployment is complete!\n");

	sleep(1);

	return 0;
}
