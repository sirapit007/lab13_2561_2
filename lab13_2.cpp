#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main()
{
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double A[N][N])
{
	int j = 0;
	for(int i = 0; i < N; i++)
	{
		cout << "Row :";
		cin >> A[j][i] >> A[j+1][i] >> A[j+2][i] >> A[j+3][i] >> A[j+4][i];
	}
}

void findLocalMax(const double A[N][N], bool B[N][N])
{
	for(int b = 1; b < 4; b++)
	{
		for(int a = 1; a < 4; a++)
		{
			if(A[a][b] >= A[a][b-1] && A[a][b] >= A[a-1][b] && A[a][b] >= A[a+1][b] && A[a][b] >= A[a][b+1])
			{
				B[a][b] = 1;
			}
		}
	}
	B[4][4] = 0;
}

void showMatrix(const bool B[N][N])
{
	for(int y = 0; y < N; y++)
	{
		for(int x = 0; x < N; x++)
		{
			if(B[x][y] > 1) cout << "0";
			else if(B[x][y] < 1) cout << "0";
			else cout << "1";
			cout << " ";
		}
		cout << endl;
	}
}
