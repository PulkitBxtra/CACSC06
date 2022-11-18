//Aim: to implement Bucket Sort
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Function to sort arr[] of
// size n using bucket sort
void bucketSort(float arr[], int n)
{
	
	//Create n empty Bucket
	vector<float> Bucket[n];

	// Put array elements in different Bucket
	for (int i = 0; i < n; i++) {
		int Bucketi = n * arr[i]; // Index in Bucketucket
		Bucket[Bucketi].push_back(arr[i]);
	}

	// Sort individual Bucket
	for (int i = 0; i < n; i++)
		sort(Bucket[i].begin(), Bucket[i].end());

	// Concatenate all Bucket into arr[]
	int index = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < Bucket[i].size(); j++)
			arr[index++] = Bucket[i][j];
}

/* Driver program to test above function */
int main()
{
	float arr[]
		= { 0.797,  0.657, 0.1334, 0.632,0.512, 0.1434 };
	int n=6;

    cout << "Orignal array is \n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

    cout<<endl;
    
	bucketSort(arr, n);

	cout << "Sorted array is \n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}
