#include <iostream>
#include <vector>
using namespace std;

bool Vvector_int::Vcompare(Vvector_int* v) {
	int index = 0;
	for (int x : vector_) {
		if (x != v->Vget_item(index)) {
			return false;
		}
		index++;
	}
	return true;
}

bool Vvector_float::Vcompare(Vvector_float* v) {
	int index = 0;
	for (float x : vector_) {
		if (x != v->Vget_item(index)) {
			return false;
		}
		index++;
	}
	return true;
}

bool Vvector_double::Vcompare(Vvector_double* v) {
	int index = 0;
	for (double x : vector_) {
		if (x != v->Vget_item(index)) {
			return false;
		}
		index++;
	}
	return true;
}

bool Vvector_bool::Vcompare(Vvector_bool* v) {
	int index = 0;
	for (bool x : vector_) {
		if (x != v->Vget_item(index)) {
			return false;
		}
		index++;
	}
	return true;
}

bool Vvector_string::Vcompare(Vvector_string* v) {
	int index = 0;
	for (string x : vector_) {
		if (x != v->Vget_item(index)) {
			return false;
		}
		index++;
	}
	return true;
}

bool Vvector_char::Vcompare(Vvector_char* v) {
	int index = 0;
	for (char x : vector_) {
		if (x != v->Vget_item(index)) {
			return false;
		}
		index++;
	}
	return true;
}