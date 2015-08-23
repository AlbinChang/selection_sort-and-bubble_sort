#include <iostream>
using namespace std;


//选择排序和冒泡排序基本思想都是一样的：每次都是把剩余未排序的最小（大）元素 放到 排好序的最后（前）位置。
//区别在于操作方法上不同：
//冒泡排序：是通过逐次比较，逐次交换，把未排好序的最（小）大元素移到排好序部分的最后（前）位置。（史上最慢的排序算法，老师第一次问的时候，我想到的就是这个，哈哈哈）
//选择排序：是通过逐次比较，不逐次交换，选择出未排好序的最（小）大元素直接放到排好序部分的最后（前）位置。
//由于选择排序，少了逐次交换的过程，所以选择排序是更有效的算法。

//冒泡排序的实现
void bubble_sort(int* a, int length)
{
	//我习惯找最大值，嘻嘻
	for (int i = 0; i < length - 1; i++)
		for (int j = 0; j < length - 1 - i; j++)
		{
			if (a[j + 1] < a[j])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
}

void selection_sort(int* a, int length)
{
	//我习惯找最大值，嘻嘻
	for (int i = length-1; i >=1; i--)
	{
		int max = a[i];
		int position = i;
		//找到最大值及其位置
		for (int j = 0; j < i;j++){
			if (a[j] > max)
			{
				max = a[j];
				position = j;
			}
		}
		//交换
		a[position] = a[i];
		a[i] = max;
	}
}

int main()
{
	int a[] = {
		1,23,56565,5,65,6,46,560,-464,46,4,46,4,6,
		0,565,-55,-899889,-4421,13132144,2323,47,0
	};
	int b[] = {
		1, 23, 56565, 5, 65, 6, 46, 560, -464, 46, 4, 46, 4, 6,
		0, 565, -55, -899889, -4421, 13132144, 2323, 47, 0
	};

	int length = sizeof(a) / sizeof(int);

	cout << "冒泡排序的结果：" << endl;
	bubble_sort(a, length);
	for (int i = 0; i < length; i++)
		cout << a[i] << " ";
	cout << endl;

	cout << "选择排序的结果：" << endl;
	selection_sort(b, length);
	for (int i = 0; i < length; i++)
		cout << b[i] << " ";
	cout << endl;
	system("pause");
}