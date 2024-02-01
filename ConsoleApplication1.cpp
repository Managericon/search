//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <vector>        //提供向量头文件
//#include <iomanip>       //C++输出精度控制需要
//#include <fstream>       //提供文件头文件
//#include <algorithm>     // 算法头文件，提供迭代器
//#include <iostream>
//#include <random>
//using namespace std;
//
//// 计算逆序对个数的函数
//int count_inversions(int arr[], int n) {
//	int inv_count = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i - 1] > arr[i])
//		{
//			inv_count++;
//		}
//		//printf("数组内容:%d", arr[i - 1]);
//	}
//	return inv_count;
//}
//
//int getRand(int min, int max) {
//	return (rand() % (max - min + 1)) + min;
//}
//int getCount(int count)
//{
//	switch (count)
//	{
//	case 100:
//		return 100;
//	case 1000:
//		return 1000;
//	default:
//		return 10000;
//		break;
//	}
//}
//int main() {
//	// 生成学号
//	int student_id = 232650196;
//	printf("学号：%d\n", student_id);
//	// 生成3组随机数据
//	int data_sizes[] = { 100, 1000, 10000 };
//	short int a = rand() % 3 ;
//	int* arr = new int[getCount(a)];
//
//	cout << data_sizes[a] << endl;
///*	switch (data_sizes[a])
//	{
//	case*/
//	//if (data_sizes[a] == 100)
//	//{
//	//	int arr[100];
//	//	for (size_t i = 0; i < data_sizes[a]; i++)
//	//	{
//	//		//cin >> arr[i];
//	//		arr[i] = getRand(2, 1000);
//	//		cout << arr[i] << endl;
//	//	}
//	//	// 计算逆序对个数
//	//	clock_t start = clock();
//	//	int inv_count = count_inversions(arr, data_sizes[a]);
//	//	clock_t end = clock();
//	//	double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
//	//	// 输出结果
//	//	printf("数据大小：%d\n\n，逆序对个数：%d，运行时间：%f秒", 100, inv_count, elapsed_time);
//
//	//	free(arr);
//	//}
//	//	//}
//	//	/*break;*/
//	//else if (data_sizes[a] == 1000)
//	//{
//	//	int arr[1000];
//	//	for (size_t i = 0; i < data_sizes[a]; i++)
//	//	{
//	//		//cin >> arr[i];
//	//		arr[i] = getRand(2, 1000);
//	//		cout << arr[i] << endl;
//	//	}
//	//	
//	//	//}
//	//}
//	//	//break;
//	//else
//	//{
//	//	 int arr[10000];
//	//	 
//	//	 // 计算逆序对个数
//	//	 clock_t start = clock();
//	//	 int inv_count = count_inversions(arr, data_sizes[a]);
//	//	 clock_t end = clock();
//	//	 double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
//	//	 // 输出结果
//	//	 printf("数据大小：%d\n\n，逆序对个数：%d，运行时间：%f秒", 100, inv_count, elapsed_time);
//
//	//	 free(arr);
//	//	 //}
//	//	//break;
//	//}
//	cout << a << endl;
//	//for (int i = 0; i < 3; i++) {
//	//int n = data_sizes[0];
//	//int* arr = (int*)malloc(n * sizeof(int));
//	//	srand(time(NULL));
//	//	for (int j = 0; j < n; j++) {
//	//		arr[j] = rand() % 10000;
//	//	}
//	//vector<double> V;
//	//vector<double>::iterator it;
//	//ifstream data("dd.txt");
//	/*ifstream data;
//	data.open("C:/Users/Administrator/Desktop/dd.txt", ios::in);
//	if (!data.is_open())
//	{
//		cout << "读取文件失败" << endl;
//		return 0;
//	}*/
//	//char buf[1024];
//	//while (data >> buf)
//	//{
//	//	cout << buf << endl;//输出读取的文本文件数据
//	//}
//	//while (data >> d)
//	//{ 
//	//	V.push_back(d);//将数据压入堆栈。//
//	//}
//	//data.close();
//	
//	//int i = 0;
//	//for (int i=0; i>1023; i++)
//	//{
//	//	//cout << "V[" << i << "]=" << setprecision(200) << *it << endl;
//	//	arr[i] =buf[i];
//	//	cout<< arr[i]<<endl;
//
//	//}
//	for (size_t i = 0; i < data_sizes[a]; i++)
//	{
//		//cin >> arr[i];
//		arr[i] = getRand(2, 1000);
//		cout << arr[i] << endl;
//	}
//	// 计算逆序对个数
//	clock_t start = clock();
//	int inv_count = count_inversions(arr, data_sizes[a]);
//	clock_t end = clock();
//	double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
//	// 输出结果
//	printf("数据大小：%d\n\n，逆序对个数：%d，运行时间：%f秒", data_sizes[a], inv_count, elapsed_time);
//
//	free(arr);
//
//	
//	return 0;
//
//}
//
////#include <stdio.h>
////#include <stdlib.h>
////#include <time.h>
////
////// 计算逆序对个数的函数
////int count_inversions(int arr[], int n) {
////	int inv_count = 0;
////	for (int i = 0; i < n - 1; i++) {
////		for (int j = i + 1; j < n; j++) {
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>        //提供向量头文件
#include <iomanip>       //C++输出精度控制需要
#include <fstream>       //提供文件头文件
#include <algorithm>     // 算法头文件，提供迭代器
#include <iostream>
#include <string>
#include <mutex>
#include <thread>
using namespace std;
class MyClass
{
public:
	MyClass();
	~MyClass();
	int* addAndSub;
	int* levelValue = new int[16];
	int* allAfterAddValue;
	int* allAfterSubValue;
	int* canAchievePoint;
	int* counts;
	int countsIndex=0;
	short firstline[3];
	bool canBeAchieve;
	std::mutex mtx;
	int currentLevel;
	int canAchievePointIndex = 0;
	int count = 1;
	int level = 1;
	int j = 0;
	int* currentBestSteps;
	int* nextSteps;
	int currentSmallestCounts;
	int currentStepIndex;
	bool isFind;
	bool currentCanBeFind;
	int Start()
	{
		for (short int i = 0; i < 3; i++)
		{
			if (i == 0)
			{
				cout << "请输入总层数,每位数之间别间隔,输入完记得回车！"<<endl;
			}
			if (i == 1)
			{
				cout << "请输入起始层：";
			}
			if (i == 2)
			{
				cout << "请输入终点层：";
			}
			cin >> firstline[i];
			if (i == 0)
			{
				levelValue = new int[firstline[0]];
				canAchievePoint = new int[firstline[0]];
				allAfterAddValue = new int[firstline[0]];
				allAfterSubValue = new int[firstline[0]];
				counts = new int[firstline[0]];
				currentBestSteps = new int[firstline[0]];
				nextSteps = new int[firstline[0]];
				//cout << firstline[0] << endl;
			}
			if (i > 0)
			{

				if (firstline[i] > firstline[0])
				{
					cout << "起始层数或终点层数不能大于总层数，重新输入吧你！" << endl;
					cin >> firstline[i];
				}
				if (i == 2)
				{
					if (firstline[2] == firstline[1])
					{
						cout << "起始层数不能和终点层数相同，重新输入吧你！" << endl;
						cin >> firstline[i];
					}
				}
			}
		}
		for (short int i = 0; i < firstline[0]; i++)
		{
			cout << "请输入第" << i << "层的可改变的层数, 每位数之间别间隔, 输入完记得回车！"<<endl;
			cin >> levelValue[i];
			if (levelValue[i] > firstline[0])
			{
				cout << "傻逼，这才" << firstline[0] << "层，你输入这么多是想上月球啊？！重新输入吧你！" << endl;
				cin >> levelValue[i];
			}
		}
		try
		{
			//int dd = firstline[2];
			jubgeCanBeFind(firstline[2] - 1, count);

		}
		catch (const std::exception&)
		{
			//cout << firstline[2] - 1 << count << endl;
		}
		system("pause");
		return 0;
	}
	bool jubgeCanBeFind(int level = 0, int count = 0,int startLevel=0,int totalLevel=0)
	{
		//遍历所有的数据，以此来搜索到能够找到到达得了的子节点的数据
		for (int currentLevel = 0; currentLevel < firstline[0]; currentLevel++)
		{
			//如果当前节点的数据等于目标数据，说明此节点等于自己，没必要搜索，直接跳过本次循环
			if (currentLevel == level)
			{
				if (currentLevel+1==firstline[0])
				{
					nextSteps[count - 1] = 10;
				}
				continue;
			}
			//当currentlevel==0时，说明当前只能加，不能减,因此直接执行加法运算
			if (currentLevel == 0)
			{
				canBeAchieve = (level == levelValue[currentLevel] + currentLevel);
				if (levelValue[currentLevel] + currentLevel <= firstline[0] - 1)
				{
					allAfterAddValue[currentLevel] = levelValue[currentLevel] + currentLevel + 1;
				}
			}
			//当currentlevel不等于0时，可能存在两种算法，此时就需要都检测一下
			else
			{
				if (levelValue[currentLevel] + currentLevel <= firstline[0] - 1)
				{
					allAfterAddValue[currentLevel] = levelValue[currentLevel] + currentLevel + 1;
				}
				canBeAchieve = (level == levelValue[currentLevel] + currentLevel || canBeAchieve);
				if ((currentLevel + 1) - levelValue[currentLevel] > 0)
				{
					allAfterSubValue[currentLevel] = (currentLevel + 1) - levelValue[currentLevel];
				}
				canBeAchieve = (level == currentLevel - levelValue[currentLevel] || canBeAchieve);

			}
			//如果在此节点能够找到能到达此节点时
			if ((level == levelValue[currentLevel] + currentLevel) || (level == currentLevel - levelValue[currentLevel])||(level==currentLevel))
			{
				if ((level == levelValue[currentLevel] + currentLevel))
				{
					nextSteps[count] = currentLevel;
				}
				else
				{
					nextSteps[count] =(-currentLevel);
				}
				//说明找到了目标节点，输出路径长度,执行判断是否是最短路径，如果是，则存储最短路径以及相关步骤
				if (currentLevel + 1 == firstline[1])
				{
					cout << "找到了：" << count << endl;
					if (count<currentSmallestCounts||currentSmallestCounts==0)
					{
						currentSmallestCounts = count;
						//currentBestSteps = nextSteps;
						for (int i = 1; i <= firstline[0]; i++)
						{
							currentBestSteps[i] = nextSteps[i];
							/*for (int j = (-firstline[0]);; j++)
							{
								if (j == nextSteps[i])
								{
									currentBestSteps[i] = j;
									break;
								}
							}*/
						}
					}
					return true;
				}
				//如果当前节点找到了子节点，但子节点不是目标节点，通过加高深度，进行搜索
				isFind=(jubgeCanBeFind(currentLevel, count + 1,startLevel,totalLevel)||isFind);
			}
			//如果在此节点找不到能到达此节点时
			else
			{
				//当遍历到最后一个索引时，说明前面的已经找完了，如果找到了，那么
				// currentBestSteps已经被赋值了，此次改变不影响结果，且能够清除未找到
				// 子节点却没有目标节点的残余
				if (count>1&&(currentLevel+1==firstline[0]))
				{
					nextSteps[count - 1] = 10;
				}
			} 
		}
		//如果level+1等于到达根节点，且遍历完了，并且找到了，然后输出最短路径的每次步骤
		if (level+1==firstline[2])
		{
			if (isFind)
			{
				for (int i = 1; i<firstline[0] ; i++)
				{
					cout << currentBestSteps[i] << endl;
				}
			}
		}
		//如果level+1等于到达根节点，且遍历完了,输出最短路径
		if (level + 1 == firstline[2] && currentSmallestCounts > 0)
		{
			cout << "最短步骤的长度是：" << currentSmallestCounts << endl;
		}
		//说明遍历完了，但不是根节点，说明该子节点找不到，返回一个false，也就是没找到
		if (level + 1 != firstline[2])
		{
			return false;
		}
		//说明遍历完了，且是根节点，但是没找到。这就说明运行完了，也没找到，也就是根本意义上的没找到,return完就全结束了
		if (level + 1 == firstline[2] && ((!canBeAchieve)||(!isFind)))
		{
			cout << "-1" << endl;
			return false;
		}
	}
private:
	thread t1;
};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

int main()
{
	MyClass *myClass=new MyClass;
	myClass->Start();
}