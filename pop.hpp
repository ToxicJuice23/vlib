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

void Vvector_float::Vpop(int index) {
	vector<float> final_;
	int loop_index = 0;
	for (float item : vector_) {
		if (loop_index != index) {
			final_.push_back(item);
		}
		loop_index++;
	}
	vector_ = final_;
}

void Vvector_double::Vpop(int index) {
	vector<double> final_;
	int loop_index = 0;
	for (double item : vector_) {
		if (loop_index != index) {
			final_.push_back(item);
		}
		loop_index++;
	}
	vector_ = final_;
}

void Vvector_bool::Vpop(int index) {
	vector<bool> final_;
	int loop_index = 0;
	for (bool item : vector_) {
		if (loop_index != index) {
			final_.push_back(item);
		}
		loop_index++;
	}
	vector_ = final_;
}

void Vvector_string::Vpop(int index) {
	vector<string> final_;
	int loop_index = 0;
	for (string item : vector_) {
		if (loop_index != index) {
			final_.push_back(item);
		}
		loop_index++;
	}
	vector_ = final_;
}

void Vvector_char::Vpop(int index) {
	vector<char> final_;
	int loop_index = 0;
	for (char item : vector_) {
		if (loop_index != index) {
			final_.push_back(item);
		}
		loop_index++;
	}
	vector_ = final_;
}