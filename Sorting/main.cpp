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


	return 0;
}
