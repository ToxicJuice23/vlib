#include <iostream>
#include <vector>
using namespace std;

void Vvector_int::Vpop(int index) {
	vector<int> final_;
	int loop_index = 0;
	for (int item : vector_) {
		if (loop_index != index) {
			final_.push_back(item);
		}
		loop_index++;
	}
	vector_ = final_;
}