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
	LinkedList<int> list;
	list.insertHead(9);
	list.insertHead(17);
	list.print();
}