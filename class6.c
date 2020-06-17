#include<stdio.h>
#include<stdlib.h>
#define N 5
int main()
{
	/*数组*/
	//数组中的所有元素数据类型必须一样
	//数组的大小是固定的
	//动态录入
	/*
	double score[N];
	int i; //循环变量
	//使用循环操作数组的时候，要注意：一个循环尽量只做一件事
	for (i = 0; i < N; i++)
	{
		printf("请输入第%d位同学的成绩：", i + 1);
		scanf_s("%lf", &score[i]);
		}
	//下面的循环用来打印数组
	for (i = 0; i < N; i++)
	{
		printf("第%d位的同学的成绩是：%.2lf\n", i + 1, score[i]);
	}
	return 0;
	*/


	/*有一个数列：8，4，2，1，23，344，12
		1、循环输出数列的值
		2、求数列中所有数值的和及平均值
		3、猜数游戏：从键盘中任意输入一个数据，判断数列中是否包含此数*/
	//1、定义数组，并初始化

	int nums[] = { 8,4,2,1,23,344,12 };
	int i;
	int sum = 0;//求和
	double avg;	//求平均值
	int searchnumber;	//查找数字
	int max = 0;	//求最大值
	int min = 0;	//求最小值
	int jishugeshu = 0;
	int oushugeshu = 0;
	int index = -1;
	//2、循环输出
	printf("输出数组元素：\n");
	for (i = 0; i < 7; i++)
	{
		printf("%d\t", nums[i]);
	}
	printf("\n*******************************\n");
	//3、求和及平均值
	for (i = 0; i < 7; i++)
	{
		sum += nums[i];//经典累加
	}
	avg = sum / 7.0;
	//4、查找数字
	//for (;;)
	//{
		printf("请输入要查找的数字：");
		scanf_s("%d", &searchnumber);
		for (i = 0; i < 7; i++)
		{
			//一个一个元素进行对比
			if (searchnumber == nums[i])
			{
				//找到了
				printf("缘分啊，找到了相同的元素！\n");
				//找到后，记得跳出循环
				break;
			}
		}
		//循环节术后，我们如何知道是否找到了呢？
		//通过观察，循环正常退出时，i的值应该为7
		if (i == 7)
		{
			printf("没有找到！\n");
		}
	//}
	//5、求数组中的最大值和最小值
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
	//6、求数组中的奇数个数和偶数个数
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
		printf("奇数个数：%d\n", jishugeshu);
		printf("偶数个数：%d\n", oushugeshu);

	//7、查找输入的数字在数组中的下标，没有找到的下标为-1
		for (i = 0; i < 7; i++)
		{
			if (searchnumber == nums[i])
			{
				index = i;
			}
		}
		printf("您要查找的数字的下标是：%d", index);


	/*
	循环录入5个整型数字，进行降序排列后输出结果
	16 25 9 90 23
	冒泡排序
	冒泡排序基础原理：遍历和交换
	第一轮循环：
	某个数字小于后面的数字，那么就交换
	1	25 16 9 90 23
	2	25 16 9 90 23
	3	25 16 90 9 23
	4	25 16 90 9 23
	1、需要比较多轮-{数组长度-1｝轮
	2、每一轮比较的次数比上一轮-1次（数组长度-1)-当前的轮数
	*/
/*
	int nums[N] = { 16,25,9,90,23 };
	int i, j;	//循环变量
	int temp = 0;
	//外层循环控制轮数
	for (i = 0; i < N - 1; i++)
	{
		//内层循环控制每轮的比较次数
		for (j = 0; j < N - i - 1; j++)
		{
			//如果当前值小于后面一个值，就交换
			if (nums[j] > nums[j + 1])
			{
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}
	printf("排序后的结果是：\n");
	for (i = 0; i < N; i++)
	{
		printf("%d\t", nums[i]);
	}
	*/


	/*
	删除的逻辑
	12	34	23	67	9
	12	34	67	9	9
	1、查找要删除的数字的下标
	2、从下标开始，后面一个数字覆盖前面一个数字
	3、数组的总长度-1
	*/
/*
	int count = 5;	//表示数组元素的个数
	double powers[] = { 345,333,222,555.88,444 };
	double deletepower;	//用户要删除的战力值
	int deleteindex = -1;	//要删除战力值的下标，给一个不可能的初值
	double insertpower;		//要插入的战力值
	int i;	//循环变量
	int j;	//循环变量
	double temp = 0;	//冒泡排序的中间变量
	printf("请输入要删除的的战力值：");
	scanf_s("%lf", &deletepower);
	for (i = 0; i < count; i++)
	{
		if (deletepower == powers[i])
		{
			//记录下当前的下标
			deleteindex = i;
			break;	//找到了要删除的战力值，直接跳出循环，提升效率
		}
	}
	//根据判断（是否找到），执行后续的操作
	if (-1 == deleteindex)
	{
		printf("很遗憾，没有找到要删除的战力值！\n");
	}
	else
	{
		//从下标开始，后面一个覆盖前面一个数字
		for (i = deleteindex; i < count - 1; i++)
		{
			powers[i] = powers[i + 1];
		}
		//删除完毕后，一定要记得数组的总长度-1,障眼法要做到底
		count--;
	}
	printf("删除后的结果为：\n");
	for (i = 0; i < count; i++)
	{
		printf("%.2lf\t",powers[i]);
	}
	//删除之后进行插入
	printf("\n请输入要插入的战力值：");
	scanf_s("%lf", &insertpower);
	powers[count] = insertpower;	//注意进行理解
	//插入操作完毕后，记得数组总长度+1
	count++;
	printf("插入后的结果为：\n");
	for (i = 0; i < count; i++)
	{
		printf("%.2lf\t", powers[i]);
	}
	//如果想让战力值数组有序，直接使用冒泡排序即可
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
	printf("\n排序后的结果为：\n");
	for (i = 0; i < count; i++)
	{
		printf("% .2lf\t", powers[i]);
	}
*/
}