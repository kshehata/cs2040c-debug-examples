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
	list->insertHead(9)
		->insertHead(17)
		->insertHead(13)
		->insertHead(42)
		->insertHead(-1);
	list->print();
}