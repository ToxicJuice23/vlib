#include <iostream>
#include <vector>
using namespace std;

int Vvector_int::Vfind(int item) {
	int index = 0;
	for (int item_ : vector_) {
		if (item_ == item) {
			return index;
		}
		index++;
	}
	return -1;
}