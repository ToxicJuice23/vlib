#include <iostream>
#include <vector>
using namespace std;

Vvector_int* Vlib::Vparse_str_to_int(string str, char separator) {
	vector<int> s;
	for (int index = 0; index < str.length(); index++) {
		if (str[index] == separator) s.push_back(index);
	}
	Vvector_int* separators = new Vvector_int(s);
	vector<vector<char>> char_vector = {{}};
	
	int index2 = 0;
	for (int index = 0; index < str.length(); index++) {
		if (separators->Vfind(index) != -1) {
			index2++;
			char_vector.push_back({});
		} else {
			char_vector[index2].push_back(str[index]);		
		}
	}
	
	vector<int> result;
	for (vector<char> v : char_vector) {
		Vvector_char* v2 = new Vvector_char(v);
		int int_value = stoi(v2->Vto_string());
		result.push_back(int_value);
	}
	return new Vvector_int(result);
}

Vvector_float* Vlib::Vparse_str_to_float(string str, char separator) {
	vector<int> s;
	for (int index = 0; index < str.length(); index++) {
		if (str[index] == separator) s.push_back(index);
	}
	Vvector_int* separators = new Vvector_int(s);
	vector<vector<char>> char_vector = {{}};
	
	int index2 = 0;
	for (int index = 0; index < str.length(); index++) {
		if (separators->Vfind(index) != -1) {
			index2++;
			char_vector.push_back({});
		} else {
			char_vector[index2].push_back(str[index]);		
		}
	}
	
	vector<float> result;
	for (vector<char> v : char_vector) {
		Vvector_char* v2 = new Vvector_char(v);
		float float_value = stof(v2->Vto_string());
		result.push_back(float_value);
	}
	return new Vvector_float(result);
}

Vvector_double* Vlib::Vparse_str_to_double(string str, char separator) {
	vector<int> s;
	for (int index = 0; index < str.length(); index++) {
		if (str[index] == separator) s.push_back(index);
	}
	Vvector_int* separators = new Vvector_int(s);
	vector<vector<char>> char_vector = {{}};
	
	int index2 = 0;
	for (int index = 0; index < str.length(); index++) {
		if (separators->Vfind(index) != -1) {
			index2++;
			char_vector.push_back({});
		} else {
			char_vector[index2].push_back(str[index]);		
		}
	}
	
	vector<double> result;
	for (vector<char> v : char_vector) {
		Vvector_char* v2 = new Vvector_char(v);
		double double_value = stod(v2->Vto_string());
		result.push_back(double_value);
	}
	return new Vvector_double(result);
}

Vvector_bool* Vlib::Vparse_str_to_bool(string str, char separator) {
	vector<int> s;
	for (int index = 0; index < str.length(); index++) {
		if (str[index] == separator) s.push_back(index);
	}
	Vvector_int* separators = new Vvector_int(s);
	vector<vector<char>> char_vector = {{}};
	
	int index2 = 0;
	for (int index = 0; index < str.length(); index++) {
		if (separators->Vfind(index) != -1) {
			index2++;
			char_vector.push_back({});
		} else {
			char_vector[index2].push_back(str[index]);		
		}
	}
	
	vector<bool> result;
	for (vector<char> v : char_vector) {
		Vvector_char* v2 = new Vvector_char(v);
		string str_value = v2->Vto_string();
		bool bool_value;
		if (str_value == "true" || str_value == "TRUE") {
			bool_value = true;	
		} else {
			bool_value = false;
		}
		result.push_back(bool_value);
	}
	return new Vvector_bool(result);
}

Vvector_string* Vlib::Vparse_str_to_string(string str, char separator) {
	vector<int> s;
	for (int index = 0; index < str.length(); index++) {
		if (str[index] == separator) s.push_back(index);
	}
	Vvector_int* separators = new Vvector_int(s);
	vector<vector<char>> char_vector = {{}};
	
	int index2 = 0;
	for (int index = 0; index < str.length(); index++) {
		if (separators->Vfind(index) != -1) {
			index2++;
			char_vector.push_back({});
		} else {
			char_vector[index2].push_back(str[index]);		
		}
	}
	
	vector<string> result;
	for (vector<char> v : char_vector) {
		Vvector_char* v2 = new Vvector_char(v);
		string str_value = v2->Vto_string();
		result.push_back(str_value);
	}
	return new Vvector_string(result);
}

Vvector_char* Vlib::Vparse_str_to_char(string str, char separator) {
	vector<int> s;
	for (int index = 0; index < str.length(); index++) {
		if (str[index] == separator) s.push_back(index);
	}
	Vvector_int* separators = new Vvector_int(s);
	vector<vector<char>> char_vector = {{}};
	
	int index2 = 0;
	for (int index = 0; index < str.length(); index++) {
		if (separators->Vfind(index) != -1) {
			index2++;
			char_vector.push_back({});
		} else {
			char_vector[index2].push_back(str[index]);		
		}
	}
	//loop
	vector<char> result;
	for (vector<char> v : char_vector) {
		for (char c : v) {
			result.push_back(c);
		}
	}
	return new Vvector_char(result);
}