#include "prvizad.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {

	int elements = 5;
	vector<int> a(elements);
	inputVectorElements(a, elements);
	print(a);

	int start = 10;
	int end = 100;
	vector<int> b;

	inputVector(b, start, end);
	print(b);

}
