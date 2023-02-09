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

float Vvector_float::Vget_item(int index) {
	for (int x = 0; x < vector_.size(); x++) {
		if (x == index) {
			return vector_[x];
		}
	}
	return -1.f;
}

double Vvector_double::Vget_item(int index) {
	for (int x = 0; x < vector_.size(); x++) {
		if (x == index) {
			return vector_[x];
		}
	}
	return -1.d;
}

bool Vvector_bool::Vget_item(int index) {
	for (int x = 0; x < vector_.size(); x++) {
		if (x == index) {
			return vector_[x];
		}
	}
	return 0;
}

string Vvector_string::Vget_item(int index) {
	for (int x = 0; x < vector_.size(); x++) {
		if (x == index) {
			return vector_[x];
		}
	}
	return nullptr;
}

char Vvector_char::Vget_item(int index) {
	for (int x = 0; x < vector_.size(); x++) {
		if (x == index) {
			return vector_[x];
		}
	}
	return NULL;
}