#include <iostream>
#include <vector>
using namespace std;

void Vvector_int::Vpush(int value, int index) {
	vector<int> final_;
	int loop_index = 0;
	for (int item : vector_) {
		if (loop_index != index) {
			final_.push_back(item);
		} else {
			final_.push_back(value);
			final_.push_back(item);
		}
		loop_index++;
	}
	vector_ = final_;
}