#include <vlib.hpp>

int main(int argc, char** argv) {
	Vvector_int* v = new Vvector_int({5, 4, 3, 2, 1});
	v->Vpop(1);
	v->Vpush(5, 1);
	vector<int> result = v->Vget_vector();
	int r1 = v->Vfind(2);
	for (int x : result) {
		cout << x << endl;
	}
	
	cout << "2 is at index: " << r1 << endl;
	v->Vprint_values("cout", "");
	v->Vreverse()->Vprint_values();
	return 0;
}