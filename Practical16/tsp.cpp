#include<iostream>
#include<vector>
using namespace std;
#define V 4


int tsp(int graph[][V], int s){

	vector<int> vertex;
	for (int i = 0; i < V; i++)
		if (i != s)
			vertex.push_back(i);

	
	int min_path = INT_MAX;
	do {

		// storee current Path weeight
		int curr_pathweight = 0;

		// compute current path weight
		int k = s;
		for (int i = 0; i < vertex.size(); i++) {
			curr_pathweight += graph[k][vertex[i]];
			k = vertex[i];
		}
		curr_pathweight += graph[k][s];

		// update minimum
		min_path = min(min_path, curr_pathweight);

	} while (
		next_permutation(vertex.begin(), vertex.end()));

	return min_path;
}


int main()
{
	int graph[][V] = { { 0, 5, 13, 15 },
					{ 5, 0, 34, 26 },
					{ 13, 34, 0, 30 },
					{ 15, 26, 30, 0 } };
	int s = 0;
	cout << tsp(graph, s) << endl;
	return 0;
}
