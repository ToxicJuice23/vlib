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

int Vvector_float::Vfind(float item) {
	int index = 0;
	for (float item_ : vector_) {
		if (item_ == item) {
			return index;
		}
		index++;
	}
	return -1;
}

int Vvector_double::Vfind(double item) {
	int index = 0;
	for (double item_ : vector_) {
		if (item_ == item) {
			return index;
		}
		index++;
	}
	return -1;
}

int Vvector_bool::Vfind(bool item) {
	int index = 0;
	for (bool item_ : vector_) {
		if (item_ == item) {
			return index;
		}
		index++;
	}
	return -1;
}

int Vvector_string::Vfind(string item) {
	int index = 0;
	for (string item_ : vector_) {
		if (item_ == item) {
			return index;
		}
		index++;
	}
	return -1;
}

int Vvector_char::Vfind(char item) {
	int index = 0;
	for (char item_ : vector_) {
		if (item_ == item) {
			return index;
		}
		index++;
	}
	return -1;
}