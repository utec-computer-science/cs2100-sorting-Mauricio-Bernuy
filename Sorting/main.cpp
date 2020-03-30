#include <iostream>
#include <vector>
#include "insertsort.h"

using namespace std;

template<typename T>
void print(T& container) {
	for (int i = 0; i < size(container); i++)
		cout << container[i] << " ";
	cout << endl;
};

int main() {
	//insert demonstration
	vector<int> insert = {12,11,31,2};
	print(insert);
	insertsort(insert);
	print(insert);


	return 0;
}
