#include<stdio.h>
#include<stdlib.h>
#define N 5
int main()
{
	/*����*/
	//�����е�����Ԫ���������ͱ���һ��
	//����Ĵ�С�ǹ̶���
	//��̬¼��
	/*
	double score[N];
	int i; //ѭ������
	//ʹ��ѭ�����������ʱ��Ҫע�⣺һ��ѭ������ֻ��һ����
	for (i = 0; i < N; i++)
	{
		printf("�������%dλͬѧ�ĳɼ���", i + 1);
		scanf_s("%lf", &score[i]);
		}
	//�����ѭ��������ӡ����
	for (i = 0; i < N; i++)
	{
		printf("��%dλ��ͬѧ�ĳɼ��ǣ�%.2lf\n", i + 1, score[i]);
	}
	return 0;
	*/


	/*��һ�����У�8��4��2��1��23��344��12
		1��ѭ��������е�ֵ
		2����������������ֵ�ĺͼ�ƽ��ֵ
		3��������Ϸ���Ӽ�������������һ�����ݣ��ж��������Ƿ��������*/
	//1���������飬����ʼ��

	int nums[] = { 8,4,2,1,23,344,12 };
	int i;
	int sum = 0;//���
	double avg;	//��ƽ��ֵ
	int searchnumber;	//��������
	int max = 0;	//�����ֵ
	int min = 0;	//����Сֵ
	int jishugeshu = 0;
	int oushugeshu = 0;
	int index = -1;
	//2��ѭ�����
	printf("�������Ԫ�أ�\n");
	for (i = 0; i < 7; i++)
	{
		printf("%d\t", nums[i]);
	}
	printf("\n*******************************\n");
	//3����ͼ�ƽ��ֵ
	for (i = 0; i < 7; i++)
	{
		sum += nums[i];//�����ۼ�
	}
	avg = sum / 7.0;
	//4����������
	//for (;;)
	//{
		printf("������Ҫ���ҵ����֣�");
		scanf_s("%d", &searchnumber);
		for (i = 0; i < 7; i++)
		{
			//һ��һ��Ԫ�ؽ��жԱ�
			if (searchnumber == nums[i])
			{
				//�ҵ���
				printf("Ե�ְ����ҵ�����ͬ��Ԫ�أ�\n");
				//�ҵ��󣬼ǵ�����ѭ��
				break;
			}
		}
		//ѭ���������������֪���Ƿ��ҵ����أ�
		//ͨ���۲죬ѭ�������˳�ʱ��i��ֵӦ��Ϊ7
		if (i == 7)
		{
			printf("û���ҵ���\n");
		}
	//}
	//5���������е����ֵ����Сֵ
		min = nums[1];
		for (i = 0; i < 7; i++)
		{
			if (nums[i] > max)
			{
				max = nums[i];
			}
			if (nums[i] < min)
			{
				min = nums[i];
			}
		}
		printf("max=%d\n", max);
		printf("min=%d\n", min);
	//6���������е�����������ż������
		for (i = 0; i < 7; i++)
		{
			if (nums[i] % 2 == 0)
			{
				oushugeshu++;
			}
			else
			{
				jishugeshu++;
			}
		}
		printf("����������%d\n", jishugeshu);
		printf("ż��������%d\n", oushugeshu);

	//7����������������������е��±꣬û���ҵ����±�Ϊ-1
		for (i = 0; i < 7; i++)
		{
			if (searchnumber == nums[i])
			{
				index = i;
			}
		}
		printf("��Ҫ���ҵ����ֵ��±��ǣ�%d", index);


	/*
	ѭ��¼��5���������֣����н������к�������
	16 25 9 90 23
	ð������
	ð���������ԭ�������ͽ���
	��һ��ѭ����
	ĳ������С�ں�������֣���ô�ͽ���
	1	25 16 9 90 23
	2	25 16 9 90 23
	3	25 16 90 9 23
	4	25 16 90 9 23
	1����Ҫ�Ƚ϶���-{���鳤��-1����
	2��ÿһ�ֱȽϵĴ�������һ��-1�Σ����鳤��-1)-��ǰ������
	*/
/*
	int nums[N] = { 16,25,9,90,23 };
	int i, j;	//ѭ������
	int temp = 0;
	//���ѭ����������
	for (i = 0; i < N - 1; i++)
	{
		//�ڲ�ѭ������ÿ�ֵıȽϴ���
		for (j = 0; j < N - i - 1; j++)
		{
			//�����ǰֵС�ں���һ��ֵ���ͽ���
			if (nums[j] > nums[j + 1])
			{
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}
	printf("�����Ľ���ǣ�\n");
	for (i = 0; i < N; i++)
	{
		printf("%d\t", nums[i]);
	}
	*/


	/*
	ɾ�����߼�
	12	34	23	67	9
	12	34	67	9	9
	1������Ҫɾ�������ֵ��±�
	2�����±꿪ʼ������һ�����ָ���ǰ��һ������
	3��������ܳ���-1
	*/
/*
	int count = 5;	//��ʾ����Ԫ�صĸ���
	double powers[] = { 345,333,222,555.88,444 };
	double deletepower;	//�û�Ҫɾ����ս��ֵ
	int deleteindex = -1;	//Ҫɾ��ս��ֵ���±꣬��һ�������ܵĳ�ֵ
	double insertpower;		//Ҫ�����ս��ֵ
	int i;	//ѭ������
	int j;	//ѭ������
	double temp = 0;	//ð��������м����
	printf("������Ҫɾ���ĵ�ս��ֵ��");
	scanf_s("%lf", &deletepower);
	for (i = 0; i < count; i++)
	{
		if (deletepower == powers[i])
		{
			//��¼�µ�ǰ���±�
			deleteindex = i;
			break;	//�ҵ���Ҫɾ����ս��ֵ��ֱ������ѭ��������Ч��
		}
	}
	//�����жϣ��Ƿ��ҵ�����ִ�к����Ĳ���
	if (-1 == deleteindex)
	{
		printf("���ź���û���ҵ�Ҫɾ����ս��ֵ��\n");
	}
	else
	{
		//���±꿪ʼ������һ������ǰ��һ������
		for (i = deleteindex; i < count - 1; i++)
		{
			powers[i] = powers[i + 1];
		}
		//ɾ����Ϻ�һ��Ҫ�ǵ�������ܳ���-1,���۷�Ҫ������
		count--;
	}
	printf("ɾ����Ľ��Ϊ��\n");
	for (i = 0; i < count; i++)
	{
		printf("%.2lf\t",powers[i]);
	}
	//ɾ��֮����в���
	printf("\n������Ҫ�����ս��ֵ��");
	scanf_s("%lf", &insertpower);
	powers[count] = insertpower;	//ע��������
	//���������Ϻ󣬼ǵ������ܳ���+1
	count++;
	printf("�����Ľ��Ϊ��\n");
	for (i = 0; i < count; i++)
	{
		printf("%.2lf\t", powers[i]);
	}
	//�������ս��ֵ��������ֱ��ʹ��ð�����򼴿�
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - 1 - i; j++)
		{
			if (powers[j] < powers[j + 1])
			{
				temp = powers[j];
				powers[j] = powers[j + 1];
				powers[j + 1] = temp;
			}
		}
	}
	printf("\n�����Ľ��Ϊ��\n");
	for (i = 0; i < count; i++)
	{
		printf("% .2lf\t", powers[i]);
	}
*/
}