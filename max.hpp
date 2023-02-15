#include <iostream>
#include <vector>
using namespace std;

int Vvector_int::Vmax() {
	int max_value = 0;
	for (int x = 0; x < vector_.size(); x++) {
		if (vector_[x] > max_value)
			max_value = vector_[x];
	}
	return max_value;
}

float Vvector_float::Vmax() {
	float max_value = 0;
	for (int x = 0; x < vector_.size(); x++) {
		if (vector_[x] > max_value)
			max_value = vector_[x];
	}
	return max_value;
}

double Vvector_double::Vmax() {
	double max_value = 0;
	for (int x = 0; x < vector_.size(); x++) {
		if (vector_[x] > max_value)
			max_value = vector_[x];
	}
	return max_value;
}

string Vvector_string::Vmax() {
	int max_length = 0;
	string max_value;
	for (int x = 0; x < vector_.size(); x++) {
		if (vector_[x].length() > max_length) {
			max_value = vector_[x];
			max_length = vector_[x].length();
		}
	}
	return max_value;
}

char Vvector_char::Vmax() {
	int max_index = 0;
	char alphabet[] = "abcdefghijklmnopqstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!£$%^&*(){}#:;',./<>?";
	for (int x = 0; x < vector_.size(); x++) {
		for (int y = 0; y < 84; y++) {
			if (vector_[x] == alphabet[y] && y > max_index) {
				max_index = y;
			}
		}
	}
	return alphabet[max_index];
}