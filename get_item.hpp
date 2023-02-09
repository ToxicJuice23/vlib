#include <iostream>
#include <vector>
using namespace std;

int Vvector_int::Vget_item(int index) {
	for (int x = 0; x < vector_.size(); x++) {
		if (x == index) {
			return vector_[x];
		}
	}
	return -1;
}