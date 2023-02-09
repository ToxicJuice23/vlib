#include <iostream>
#include <vector>
using namespace std;

Vvector_int* Vvector_int::Vreverse() {
	vector<int> result;
	for (int x = vector_.size() - 1; x >= 0; x -= 1) {
		result.push_back(vector_[x]);
	}
	return new Vvector_int(result);
}