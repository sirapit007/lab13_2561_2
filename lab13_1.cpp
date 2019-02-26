#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y)
{
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N)
{
	int h = 0;
	for(T k = 1; k < N; k++)
	{
		for(T j = 0; j < k; j++) cout << d[j] << " ";
		cout << "[" << d[k] << "] ";
		for(T j = k + 1; j < N; j++) cout << d[j] << " ";
		cout << " =>  ";
		for(T i = 0; i < N - 1; i++)
		{
			if(d[i] < d[i+1] && i >= 0)
			{
				swap(d,i,i+1);
				h = i - 1;
			}
			else{
				break;
			}
		}
		for(int t = 0; t <= h; t++) 
		{
			if(t == h) cout << "[" << d[h] << "] ";
			// cout << d[t] << " ";
		}
		cout << "[" << d[h + 1] << "] ";
		for(int u = h + 2; u < N; u++) cout << d[u] << " ";
		cout << endl;
	}
}

int main()
{
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	insertionSort(a,10);
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
