#pragma once
using namespace std;
template<typename T>
void print(T& container) {
	for (int i = 0; i < size(container); i++)
		cout << container[i] << " ";
	cout << endl;
};


template<typename T>
void insertsort(T& container) {
	int i, j, x;
	int first = 0;
	int last = size(container);
	//cout << last;
	for (i = first+1; i < last; i++) {
		x = container[i];
		j = i - 1;
		while (j >= first && x < container[j]) {
			container[j + 1] = container[j];
			j--;
		}
		container[j + 1] = x;
	}
	print(container);
};