#include <iostream>
#include <vector>
using namespace std;

class Vvector_int;

class Vvector_int {
public:
	void Vpop(int index); // defined
	void Vpush(int value, int index); // defined
	void Vprint_values(string method="cout", string additional_info=""); // defined
	Vvector_int* Vreverse();
	void Vset_vector(vector<int> v);
	int Vsize();
	int Vget_item(int index);
	int Vfind(int item); // defined
	vector<int> Vget_vector() {
		return vector_;
	}
	
	Vvector_int(vector<int> v={}) {
		vector_ = v;
	}
	~Vvector_int();
private:
	vector<int> vector_;
};

#include "pop.hpp"
#include "push.hpp"
#include "print_values.hpp"
#include "reverse.hpp"
#include "seperate_str.hpp" //
#include "set_vector.hpp"
#include "size.hpp"
#include "find.hpp"

// add ->next() and ->at()
// 2d Vvector