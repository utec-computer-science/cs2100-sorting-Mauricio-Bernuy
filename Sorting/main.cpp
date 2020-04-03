#include <iostream>
#include <vector>
#include "sorting.h"

using namespace std;

int main() {
	//insert test
	vector<int> insert = {12,11,31,2};
	print(insert);
	insertsort(insert);

	//selection test
	vector<int> selection = { 12,11,31,2 };
	print(selection);
	selectionsort(selection);

	//bubble test
	vector<int> bubble = { 12,11,31,2 };
	print(bubble);
	bubblesort(bubble);

	//heap test
	vector<int> heap = { 12,11,31,2 };
	print(heap);
	heapsort(heap);

	//merge test
	vector<int> merge = { 12,11,31,2 };
	print(merge);
	mergesort(merge);
	
	
	return 0;
}
