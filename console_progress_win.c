#include <stdio.h>
#include <windows.h>

int main()
{

	printf("Releasing a virus file...\n");



	//总共输出CharCount个#图标，作为进度的总数
	int CharCount=50;

	//遍历的索引
	int i=1;

	while(i<100)
	{


/*
	下面这一段的说明：总共需要输出CharCount个字符
	按照百分比算，需要输出ci个#和CharCount-ci个空格，以保证总数#号和空格数量之和为需要的总数
 */

///////////////////////////////////////////////////////////////////////////////////////////////////////
		//根据i的大小判断总共需要输出多少个#
		int ci=CharCount*i/100;
		int item=0;
		while(item<ci)
		{
			printf("#");
			item++;
		}

		//然后循环输出补位的空格图标
		int nullCharCount=CharCount-ci;
		int nullCharItem=0;
		while(nullCharItem<nullCharCount)
		{
			printf(" ");
			nullCharItem++;
		}
///////////////////////////////////////////////////////////////////////////////////////////////////////

///
///		下面输出进度，和百分号，然后休眠两百毫秒换行
///
		i++;
		printf("\t%d%%",i );
		Sleep(200);
		printf("\r");
	}


	printf("\nDeployment is complete!\n");

	Sleep(1000);

	return 0;
}
