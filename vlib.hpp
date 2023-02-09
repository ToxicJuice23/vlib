#include <iostream>
#include <vector>
using namespace std;

class Vvector_int;

class Vvector_int {
public:
	void Vpop(int index); 
	void Vpush(int value, int index); 
	void Vprint_values(string method="cout", string additional_info=""); 
	Vvector_int* Vreverse(); 
	void Vset_vector(vector<int> v); 
	int Vsize();  
	int Vget_item(int index); 
	int Vfind(int item); 
	bool Vnext() {
		if (at_index >= vector_.size() - 1) {
			return false;
		} else {
			at_index++;
			return true;
		}
	}
	int Vat() {
		return vector_[at_index];
	}
	bool Vcompare(Vvector_int* v);
	vector<int> Vget_vector() {
		return vector_;
	}
	
	Vvector_int(vector<int> v={}) {
		vector_ = v;
	}
	~Vvector_int();
private:
	vector<int> vector_;
	int at_index = 0;
};

#include "pop.hpp"
#include "push.hpp"
#include "print_values.hpp"
#include "reverse.hpp"
#include "seperate_str.hpp" //
#include "set_vector.hpp"
#include "size.hpp"
#include "compare.hpp"
#include "get_item.hpp"
#include "find.hpp"
// 2d Vvector