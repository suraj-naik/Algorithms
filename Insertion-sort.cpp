#include<iostream>
using namespace std;
void inssort(int *a,int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = a[i];
		int j = i - 1;
		while (j > -1 && key < a[j])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}
int main()
{
	int n;
	cout << "Enter the number of elements" << endl;
	cin >> n;
	int *a = new int[n];
	cout << "Enter the elements" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "The sorted array :" << endl;
	inssort(a,n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}
