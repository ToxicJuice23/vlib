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

Vvector_float* Vvector_float::Vreverse() {
	vector<float> result;
	for (int x = vector_.size() - 1; x >= 0; x -= 1) {
		result.push_back(vector_[x]);
	}
	return new Vvector_float(result);
}

Vvector_double* Vvector_double::Vreverse() {
	vector<double> result;
	for (int x = vector_.size() - 1; x >= 0; x -= 1) {
		result.push_back(vector_[x]);
	}
	return new Vvector_double(result);
}

Vvector_bool* Vvector_bool::Vreverse() {
	vector<bool> result;
	for (int x = vector_.size() - 1; x >= 0; x -= 1) {
		result.push_back(vector_[x]);
	}
	return new Vvector_bool(result);
}

Vvector_string* Vvector_string::Vreverse() {
	vector<string> result;
	for (int x = vector_.size() - 1; x >= 0; x -= 1) {
		result.push_back(vector_[x]);
	}
	return new Vvector_string(result);
}

Vvector_char* Vvector_char::Vreverse() {
	vector<char> result;
	for (int x = vector_.size() - 1; x >= 0; x -= 1) {
		result.push_back(vector_[x]);
	}
	return new Vvector_char(result);
}