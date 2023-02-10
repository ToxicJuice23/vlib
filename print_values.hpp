#include <iostream>
#include <stdio.h>
#include <vector>
#include <colors.c>
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
		printf("{");
		int index = 0;
		for (int item : vector_) {
			if (index != vector_.size() - 1) {
				printf("%s%d,", additional_info.c_str(), item);	
			} else {
				printf("%s%d", additional_info.c_str(), item);	
			}
			index++;
		}
		printf("}%c", char(0xa));
	} else {
		cerr <<  RED << "Output method not valid. Options are 'printf' and 'cout'" << RESET << endl;
		exit(-1);
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
		printf("{");
		int index = 0;
		for (float item : vector_) {
			if (index != vector_.size() - 1) {
				printf("%s%f,", additional_info.c_str(), item);	
			} else {
				printf("%s%f", additional_info.c_str(), item);	
			}
			index++;
		}
		printf("}%c", char(0xa));
	} else {
		cerr <<  RED << "Output method not valid. Options are 'printf' and 'cout'" << RESET << endl;
		exit(-1);
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
		printf("{");
		int index = 0;
		for (double item : vector_) {
			if (index != vector_.size() - 1) {
				printf("%s%f,", additional_info.c_str(), item);	
			} else {
				printf("%s%f", additional_info.c_str(), item);	
			}
			index++;
		}
		printf("}%c", char(0xa));
	} else {
		cerr <<  RED << "Output method not valid. Options are 'printf' and 'cout'" << RESET << endl;
		exit(-1);
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
		printf("{");
		int index = 0;
		for (bool item : vector_) {
			if (index != vector_.size() - 1) {
				printf("%s%s,", additional_info.c_str(), item ? "true" : "false");	
			} else {
				printf("%s%s", additional_info.c_str(), item ? "true" : "false");	
			}
			index++;
		}
		printf("}%c", char(0xa));
	} else {
		cerr <<  RED << "Output method not valid. Options are 'printf' and 'cout'" << RESET << endl;
		exit(-1);
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
		printf("{");
		int index = 0;
		for (string item : vector_) {
			if (index != vector_.size() - 1) {
				printf("%s%s,", additional_info.c_str(), item.c_str());	
			} else {
				printf("%s%s", additional_info.c_str(), item.c_str());	
			}
			index++;
		}
		printf("}%c", char(0xa));
	} else {
		cerr <<  RED << "Output method not valid. Options are 'printf' and 'cout'" << RESET << endl;
		exit(-1);
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
		printf("{");
		int index = 0;
		for (char item : vector_) {
			if (index != vector_.size() - 1) {
				printf("%s%c,", additional_info.c_str(), item);	
			} else {
				printf("%s%c", additional_info.c_str(), item);	
			}
			index++;
		}
		printf("}%c", char(0xa));
	} else {
		cerr <<  RED << "Output method not valid. Options are 'printf' and 'cout'" << RESET << endl;
		exit(-1);
	}
}