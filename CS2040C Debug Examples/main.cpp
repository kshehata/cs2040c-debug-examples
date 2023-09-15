#include <iostream>

#include "LinkedList.h"

using namespace std;
using namespace cs2040c;

int factorial(int n) {
	int result = 1;
	for (int i = 1; i <= n; ++i) {
		result *= i;
	}
	return result;
}

int main() {
	LinkedList<int>* list = new LinkedList<int>();

	// Step 1: Fix LinkedList so the output below is correct.
	list->insertHead(9)
		->insertHead(17)
		->insertHead(13)
		->insertHead(42)
		->insertHead(-1);
	cout << "Should be: -1, 42, 13, 17, 9, " << endl << "     ";
	list->print();

	// Step 2: Fix LinkedList so the output below is correct.
	list->remove(42)->remove(9)->remove(-1);
	cout << "Should be: 13, 17, " << endl << "     ";
	list->print();
}