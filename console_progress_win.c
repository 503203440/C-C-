#include <stdio.h>
#include <windows.h>

int main()
{

	printf("Releasing a virus file...\n");



	//�ܹ����CharCount��#ͼ�꣬��Ϊ���ȵ�����
	int CharCount=50;

	//����������
	int i=1;

	while(i<100)
	{


/*
	������һ�ε�˵�����ܹ���Ҫ���CharCount���ַ�
	���հٷֱ��㣬��Ҫ���ci��#��CharCount-ci���ո��Ա�֤����#�źͿո�����֮��Ϊ��Ҫ������
 */

///////////////////////////////////////////////////////////////////////////////////////////////////////
		//����i�Ĵ�С�ж��ܹ���Ҫ������ٸ�#
		int ci=CharCount*i/100;
		int item=0;
		while(item<ci)
		{
			printf("#");
			item++;
		}

		//Ȼ��ѭ�������λ�Ŀո�ͼ��
		int nullCharCount=CharCount-ci;
		int nullCharItem=0;
		while(nullCharItem<nullCharCount)
		{
			printf(" ");
			nullCharItem++;
		}
///////////////////////////////////////////////////////////////////////////////////////////////////////

///
///		����������ȣ��Ͱٷֺţ�Ȼ���������ٺ��뻻��
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
