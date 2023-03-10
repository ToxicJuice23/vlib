#include <iostream>
#include <vector>
using namespace std;

class Vvector_int;
class Vvector_float;
class Vvector_double;
class Vvector_bool;
class Vvector_string;
class Vvector_char;

class Vvector2d_int;
class Vvector2d_float;
class Vvector2d_double;
class Vvector2d_bool;
class Vvector2d_string;
class Vvector2d_char;


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
	int Vmax();
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
	Vvector_int* Vsort(string method="asc");
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

class Vvector_float {
public:
	void Vpop(int index); 
	void Vpush(float value, int index); 
	void Vprint_values(string method="cout", string additional_info=""); 
	Vvector_float* Vreverse(); 
	void Vset_vector(vector<float> v); 
	int Vsize();  
	float Vget_item(int index); 
	int Vfind(float item); 
	float Vmax();
	bool Vnext() {
		if (at_index >= vector_.size() - 1) {
			return false;
		} else {
			at_index++;
			return true;
		}
	}
	float Vat() {
		return vector_[at_index];
	}
	bool Vcompare(Vvector_float* v);
	Vvector_float* Vsort(string method="asc");
	vector<float> Vget_vector() {
		return vector_;
	}
	
	Vvector_float(vector<float> v={}) {
		vector_ = v;
	}
	~Vvector_float();
private:
	vector<float> vector_;
	int at_index = 0;
};

class Vvector_double {
public:
	void Vpop(int index); 
	void Vpush(double value, int index); 
	void Vprint_values(string method="cout", string additional_info=""); 
	Vvector_double* Vreverse(); 
	void Vset_vector(vector<double> v); 
	int Vsize();  
	double Vget_item(int index); 
	int Vfind(double item); 
	double Vmax();
	bool Vnext() {
		if (at_index >= vector_.size() - 1) {
			return false;
		} else {
			at_index++;
			return true;
		}
	}
	double Vat() {
		return vector_[at_index];
	}
	bool Vcompare(Vvector_double* v);
	Vvector_double* Vsort(string method="asc");
	vector<double> Vget_vector() {
		return vector_;
	}
	
	Vvector_double(vector<double> v={}) {
		vector_ = v;
	}
	~Vvector_double();
private:
	vector<double> vector_;
	int at_index = 0;
};

class Vvector_bool {
public:
	void Vpop(int index); 
	void Vpush(bool value, int index); 
	void Vprint_values(string method="cout", string additional_info=""); 
	Vvector_bool* Vreverse(); 
	void Vset_vector(vector<bool> v); 
	int Vsize();  
	bool Vget_item(int index); 
	int Vfind(bool item); 
	bool Vnext() {
		if (at_index >= vector_.size() - 1) {
			return false;
		} else {
			at_index++;
			return true;
		}
	}
	bool Vat() {
		return vector_[at_index];
	}
	bool Vcompare(Vvector_bool* v);
	vector<bool> Vget_vector() {
		return vector_;
	}
	
	Vvector_bool(vector<bool> v={}) {
		vector_ = v;
	}
	~Vvector_bool();
private:
	vector<bool> vector_;
	int at_index = 0;
};

class Vvector_string {
public:
	void Vpop(int index); 
	void Vpush(string value, int index); 
	void Vprint_values(string method="cout", string additional_info=""); 
	Vvector_string* Vreverse(); 
	void Vset_vector(vector<string> v); 
	int Vsize();  
	string Vget_item(int index); 
	int Vfind(string item); 
	string Vmax(); // longest string
	bool Vnext() {
		if (at_index >= vector_.size() - 1) {
			return false;
		} else {
			at_index++;
			return true;
		}
	}
	string Vat() {
		return vector_[at_index];
	}
	bool Vcompare(Vvector_string* v);
	Vvector_string* Vsort(string method="asc");
	vector<string> Vget_vector() {
		return vector_;
	}
	
	Vvector_string(vector<string> v={}) {
		vector_ = v;
	}
	~Vvector_string();
private:
	vector<string> vector_;
	int at_index = 0;
};

class Vvector_char {
public:
	void Vpop(int index); 
	void Vpush(char value, int index); 
	void Vprint_values(string method="cout", string additional_info=""); 
	Vvector_char* Vreverse(); 
	void Vset_vector(vector<char> v); 
	int Vsize();  
	char Vget_item(int index); 
	int Vfind(char item); 
	string Vto_string() {
		string final_;
		for (char x : vector_) {
			final_ = final_ + x;
		}
		return final_;
	}
	char Vmax();
	bool Vnext() {
		if (at_index >= vector_.size() - 1) {
			return false;
		} else {
			at_index++;
			return true;
		}
	}
	char Vat() {
		return vector_[at_index];
	}
	bool Vcompare(Vvector_char* v);
	Vvector_char* Vsort(string method="asc");
	vector<char> Vget_vector() {
		return vector_;
	}
	
	Vvector_char(vector<char> v={}) {
		vector_ = v;
	}
	~Vvector_char();
private:
	vector<char> vector_;
	int at_index = 0;
};

struct Vlib {
	static Vvector_int* Vparse_str_to_int(string str, char separator);
	static Vvector_float* Vparse_str_to_float(string str, char separator);
	static Vvector_double* Vparse_str_to_double(string str, char separator);
	static Vvector_bool* Vparse_str_to_bool(string str, char separator);
	static Vvector_string* Vparse_str_to_string(string str, char separator);
	static Vvector_char* Vparse_str_to_char(string str, char separator);
};

#include "pop.hpp"
#include "push.hpp"
#include "print_values.hpp"
#include "reverse.hpp"
#include "parse_str.hpp"
#include "set_vector.hpp"
#include "size.hpp"
#include "compare.hpp"
#include "get_item.hpp"
#include "find.hpp"
#include "sort.hpp"
#include "max.hpp"
#include "min.hpp"
#include "average.hpp"
#include "sum.hpp"
// 2d Vvector
// max min mid
// sum
// pushback and pop back