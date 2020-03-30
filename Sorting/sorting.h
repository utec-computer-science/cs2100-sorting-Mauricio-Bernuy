#pragma once
#include <algorithm>
using namespace std;

template<typename T>
void print(T& container) {
	for (int i = 0; i < size(container); i++)
		cout << container[i] << " ";
	cout << endl;
};

//insertsort

template<typename T>
void insertsort(T& container) {
	int i, j, x;
	int first = 0;
	int last = size(container);
	//cout << last;
	for (i = first + 1; i < last; i++) {
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

//selectionsort
template<typename T>
void selectionsort(T& container) {
	int i, j, x;
	int first = 0;
	int last = size(container);

	for (i = first; i < last - 1; i++) {
		x = i;
		for (j = i + 1; j < last; j++) {
			if (container[j] < container[x])
				x = j;
		}
		swap(container[x], container[i]);
	}
	print(container);
};

//bubblesort
template<typename T>
void bubblesort(T& container) {
	int i, j, x;
	int first = 0;
	int last = size(container);
	for (i = first; i < last - 1; i++) {
		for (j = last-1; j > i; j--) {
			if (container[j - 1] > container[j]) {
				swap(container[j-1], container[j]);
			}
		}
	}
	print(container);
};

//heapsort
template<typename T>
void heapify(T& A, int floor, int n) {
	int left = 2 * floor + 1;
	int right = 2 * floor + 2;
	int max;

	if (left <= n && A[left] > A[floor]) {
		max = left;
	}
	else {
		max = floor;
	}

	if (right <= n && A[right] > A[max]) {
		max = right;
	}
	if (max != floor) {
		swap(A[floor], A[max]);
		heapify(A, max, n);
	}
};

template<typename T>
void BuildMaxHeap(T& container, int n) {
	for (int floor = (((n + 1) / 2) - 1); floor != -1; floor--) {
		heapify(container, floor, n);
	}
}

template<typename T>
void heapsort(T& container) {
	int n = (size(container) - 1);
	BuildMaxHeap(container, n);
	for (int i = n; n > 0;) {
		swap(container[0], container[n]);
		n--;
		if (((n + 1 / 2) - 1) > -1) {
			heapify(container, 0, n);
		}
		else {
		}
	}
	print(container);
}



#pragma once
