#include <vlib.hpp>

int main(int argc, char** argv) {
	Vvector_int* v = new Vvector_int({5, 4, 3, 2, 1});
	v->Vreverse()->Vprint_values();
	return 0;
}