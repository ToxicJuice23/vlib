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

void Vvector_float::Vpush(float value, int index) {
	vector<float> final_;
	int loop_index = 0;
	for (float item : vector_) {
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

void Vvector_double::Vpush(double value, int index) {
	vector<double> final_;
	int loop_index = 0;
	for (double item : vector_) {
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

void Vvector_bool::Vpush(bool value, int index) {
	vector<bool> final_;
	int loop_index = 0;
	for (bool item : vector_) {
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

void Vvector_string::Vpush(string value, int index) {
	vector<string> final_;
	int loop_index = 0;
	for (string item : vector_) {
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

void Vvector_char::Vpush(char value, int index) {
	vector<char> final_;
	int loop_index = 0;
	for (char item : vector_) {
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