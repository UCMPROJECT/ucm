void createRandomArray(int V[], int n) {
}

void copyArray(int V[], int W[], int n) {
}

bool checkArrayEquality(int V[], int W[], int n) {
	bool equals;
	if (!checkSameLength(V, W)) {
		equals = false;
	} else {
		int i = 0;
		while(V[i] == W[i] && i < n) {

			i++;
		}

		if(i == n - 1) {
			equals = true;
		} else {
			equals = false;
		}
	}


	return equals;


}

bool checkIsOrdered(int V[], int n) {
}
/*
 * aux.cpp
 *
 *  Created on: 14/12/2012
 *      Author: repli
 */

bool checkSameLength(int V[], int W[]) {
	int vElements = sizeof(V) / sizeof(int);
	int wElements = sizeof(W) / sizeof(int);

	return vElements == wElements;
}



