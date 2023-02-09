#include <iostream>
#include <vector>
using namespace std;

void Vvector_int::Vprint_values(string method, string additional_info) {
	if (method == "cout") {
		cout << "{";
		int index = 0;
		for (int item : vector_) {
			if (index != vector_.size() - 1) {
				cout << additional_info << item << ",";	
			} else {
				cout << additional_info << item;
			}
			index++;
		}
		cout << "}" << endl;
	} else if (method == "printf") {
	
	}
}

void Vvector_float::Vprint_values(string method, string additional_info) {
	if (method == "cout") {
		cout << "{";
		int index = 0;
		for (float item : vector_) {
			if (index != vector_.size() - 1) {
				cout << additional_info << item << ",";	
			} else {
				cout << additional_info << item;
			}
			index++;
		}
		cout << "}" << endl;
	} else if (method == "printf") {
	
	}
}

void Vvector_double::Vprint_values(string method, string additional_info) {
	if (method == "cout") {
		cout << "{";
		int index = 0;
		for (double item : vector_) {
			if (index != vector_.size() - 1) {
				cout << additional_info << item << ",";	
			} else {
				cout << additional_info << item;
			}
			index++;
		}
		cout << "}" << endl;
	} else if (method == "printf") {
	
	}
}

void Vvector_bool::Vprint_values(string method, string additional_info) {
	if (method == "cout") {
		cout << "{";
		int index = 0;
		for (bool item : vector_) {
			if (index != vector_.size() - 1) {
				cout << additional_info << item << ",";	
			} else {
				cout << additional_info << item;
			}
			index++;
		}
		cout << "}" << endl;
	} else if (method == "printf") {
	
	}
}

void Vvector_string::Vprint_values(string method, string additional_info) {
	if (method == "cout") {
		cout << "{";
		int index = 0;
		for (string item : vector_) {
			if (index != vector_.size() - 1) {
				cout << additional_info << item << ",";	
			} else {
				cout << additional_info << item;
			}
			index++;
		}
		cout << "}" << endl;
	} else if (method == "printf") {
	
	}
}

void Vvector_char::Vprint_values(string method, string additional_info) {
	if (method == "cout") {
		cout << "{";
		int index = 0;
		for (char item : vector_) {
			if (index != vector_.size() - 1) {
				cout << additional_info << item << ",";	
			} else {
				cout << additional_info << item;
			}
			index++;
		}
		cout << "}" << endl;
	} else if (method == "printf") {
	
	}
}