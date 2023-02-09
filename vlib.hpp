#include <iostream>
#include <vector>
using namespace std;

class Vvector_int;
class Vvector_float;
class Vvector_double;
class Vvector_bool;
class Vvector_string;
class Vvector_char;

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