#include <iostream>
using namespace std;


//ѡ�������ð���������˼�붼��һ���ģ�ÿ�ζ��ǰ�ʣ��δ�������С����Ԫ�� �ŵ� �ź�������ǰ��λ�á�
//�������ڲ��������ϲ�ͬ��
//ð��������ͨ����αȽϣ���ν�������δ�ź�����С����Ԫ���Ƶ��ź��򲿷ֵ����ǰ��λ�á���ʷ�������������㷨����ʦ��һ���ʵ�ʱ�����뵽�ľ����������������
//ѡ��������ͨ����αȽϣ�����ν�����ѡ���δ�ź�����С����Ԫ��ֱ�ӷŵ��ź��򲿷ֵ����ǰ��λ�á�
//����ѡ������������ν����Ĺ��̣�����ѡ�������Ǹ���Ч���㷨��

//ð�������ʵ��
void bubble_sort(int* a, int length)
{
	//��ϰ�������ֵ������
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
	//��ϰ�������ֵ������
	for (int i = length-1; i >=1; i--)
	{
		int max = a[i];
		int position = i;
		//�ҵ����ֵ����λ��
		for (int j = 0; j < i;j++){
			if (a[j] > max)
			{
				max = a[j];
				position = j;
			}
		}
		//����
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

	cout << "ð������Ľ����" << endl;
	bubble_sort(a, length);
	for (int i = 0; i < length; i++)
		cout << a[i] << " ";
	cout << endl;

	cout << "ѡ������Ľ����" << endl;
	selection_sort(b, length);
	for (int i = 0; i < length; i++)
		cout << b[i] << " ";
	cout << endl;
	system("pause");
}