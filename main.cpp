#include <vlib.hpp>

int main(int argc, char** argv) {
	Vvector_int* v1 = new Vvector_int({1, 3, 4, 2, 5, 2});
	Vvector_float* v2 = new Vvector_float({1.2, 3.1, 4.1});
	Vvector_double* v3 = new Vvector_double({1.22, 3.15, 4.11, 6.12});
	Vvector_bool* v4 = new Vvector_bool({true, false, NULL, 0, 1});
	Vvector_string* v5 = new Vvector_string({"Example index 1", "Example 2", "Index 3"});
	Vvector_char* v6 = new Vvector_char({'a', 'f', '4', ':'});
	return 0;
}