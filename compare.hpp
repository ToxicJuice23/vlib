#include <iostream>
#include <vector>
using namespace std;

bool Vvector_int::Vcompare(Vvector_int* v) {
	int index = 0;
	for (int x : vector_) {
		if (x != v->Vget_item(index)) {
			return false;
		}
		index++;
	}
	return true;
}