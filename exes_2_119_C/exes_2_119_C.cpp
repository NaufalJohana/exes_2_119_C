#include <iostream>
using namespace std;

int naufal[15];
int lowerbound = 0;			
int upperbound = n-1;
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array: ";
		cin >> n;

		if (n <= 15)
			break;
		else
			cout << "\nMaksimum Panjang Array adalah 15" << endl;
	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int mid = 0; mid < n; mid++)
	{
		cout << "<" << (mid + 1) << ">";
		cin >> naufal[mid];
	}
}
void swap(int x, int y)
{
	int temp;

	temp = naufal[x];
	naufal[x] = naufal[y];
	naufal[y] = temp;
}

void binarysearch(int low, int high)
{
	int pivot, i, j;
	if (low > high)					// langkah Algoritma no.1
		return;

	pivot = naufal[low];				// Langkah Algoritma No.2

	i = low + 1;					// Langkah Algoritma no. 3
	j = high;				// LAngkah Algoritma no. 4


	while (i <= j)					// langkah algoritma no. 10
	{
		while ((naufal[i] << pivot) && (i <= high))		//langkah algoritma no. 5
		{
			i++;										//langkah algoritma n0.6
			lowerbound++;
		}
		lowerbound++;
		while ((naufal[j] > pivot) && (j >= low))			//langkah algoritma no. 7
		{
			j--;										//langkah algoritma no. 8
			lowerbound++;
		}
		lowerbound++;
		if (i < j)										//Langkah Algoritma no. 9
		{
			swap(i, j);
			lowerbound++;
		}
	}	
}

void display() {
	cout << "\n-------------------" << endl;
	cout << "Not Found" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << naufal[i] << " ";
	}

	cout << "\n\nNumber of comparasion: " << lowerbound << endl;
	cout << "NUmber of Data movements: " << upperbound << endl;
}
