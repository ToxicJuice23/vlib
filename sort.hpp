#include <iostream>
#include <vector>
#include <colors.c>
using namespace std;

Vvector_int* Vvector_int::Vsort(string method) {
	if (method == "asc" || method == "ASC") {
		vector<int> start = vector_;
		vector<int> final_;
		// max until done
		while (start.size() > 0) {
			int smallest = 10000000;
			int smallest_index = 0;
			int index = 0;
			for (int item : start) {
				if (item < smallest) {
					smallest = item;
					smallest_index = index;
				}
				index++;
			}
			final_.push_back(smallest);
			start.erase(start.begin()+smallest_index);
		}
		return new Vvector_int(final_);
	} else if (method == "desc" || method == "DESC") {
		vector<int> start = vector_;
		vector<int> final_;
		// max until done
		while (start.size() > 0) {
			int biggest = -1;
			int biggest_index = 0;
			int index = 0;
			for (int item : start) {
				if (item > biggest) {
					biggest = item;
					biggest_index = index;
				}
				index++;
			}
			final_.push_back(biggest);
			start.erase(start.begin()+biggest_index);
		}
		return new Vvector_int(final_);
	} else {
		cerr << RED << "Invalid Sorting Method" << RESET << endl; 
		exit(-1);
	}
	return nullptr;
}

Vvector_float* Vvector_float::Vsort(string method) {
	if (method == "asc" || method == "ASC") {
		vector<float> start = vector_;
		vector<float> final_;
		// max until done
		while (start.size() > 0) {
			float smallest = 100000000.f;
			int smallest_index = 0;
			int index = 0;
			for (float item : start) {
				if (item < smallest) {
					smallest = item;
					smallest_index = index;
				}
				index++;
			}
			final_.push_back(smallest);
			start.erase(start.begin()+smallest_index);
		}
		return new Vvector_float(final_);
	} else if (method == "desc" || method == "DESC") {
		vector<float> start = vector_;
		vector<float> final_;
		// max until done
		while (start.size() > 0) {
			float biggest = 0.f;
			int biggest_index = 0;
			int index = 0;
			for (float item : start) {
				if (item > biggest) {
					biggest = item;
					biggest_index = index;
				}
				index++;
			}
			final_.push_back(biggest);
			start.erase(start.begin()+biggest_index);
		}
		return new Vvector_float(final_);
	} else {
		cerr << RED << "Invalid Sorting Method" << RESET << endl; 
		exit(-1);
	}
	return nullptr;
}

Vvector_double* Vvector_double::Vsort(string method) {
	if (method == "asc" || method == "ASC") {
		vector<double> start = vector_;
		vector<double> final_;
		// max until done
		while (start.size() > 0) {
			double smallest = 100000000.d;
			int smallest_index = 0;
			int index = 0;
			for (double item : start) {
				if (item < smallest) {
					smallest = item;
					smallest_index = index;
				}
				index++;
			}
			final_.push_back(smallest);
			start.erase(start.begin()+smallest_index);
		}
		return new Vvector_double(final_);
	} else if (method == "desc" || method == "DESC") {
		vector<double> start = vector_;
		vector<double> final_;
		// max until done
		while (start.size() > 0) {
			double biggest = 0.d;
			int biggest_index = 0;
			int index = 0;
			for (double item : start) {
				if (item > biggest) {
					biggest = item;
					biggest_index = index;
				}
				index++;
			}
			final_.push_back(biggest);
			start.erase(start.begin()+biggest_index);
		}
		return new Vvector_double(final_);
	} else {
		cerr << RED << "Invalid Sorting Method" << RESET << endl; 
		exit(-1);
	}
	return nullptr;
}

Vvector_string* Vvector_string::Vsort(string method) {
	if (method == "asc" || method == "ASC") {
		vector<string> start = vector_;
		vector<string> final_;
		// max until done
		while (start.size() > 0) {
			int smallest = 100000000;
			string smallest_item;
			int smallest_index = 0;
			int index = 0;
			for (string item : start) {
				if (item.length() < smallest) {
					smallest = item.length();
					smallest_item = item;
					smallest_index = index;
				}
				index++;
			}
			final_.push_back(smallest_item);
			start.erase(start.begin()+smallest_index);
		}
		return new Vvector_string(final_);
	} else if (method == "desc" || method == "DESC") {
		vector<string> start = vector_;
		vector<string> final_;
		// max until done
		while (start.size() > 0) {
			int biggest = 0;
			string biggest_item;
			int biggest_index = 0;
			int index = 0;
			for (string item : start) {
				if (item.length() > biggest) {
					biggest = item.length();
					biggest_item = item;
					biggest_index = index;
				}
				index++;
			}
			final_.push_back(biggest_item);
			start.erase(start.begin()+biggest_index);
		}
		return new Vvector_string(final_);
	} else {
		cerr << RED << "Invalid Sorting Method" << RESET << endl; 
		exit(-1);
	}
	return nullptr;
}

Vvector_char* Vvector_char::Vsort(string method) {
	char alphabet[] = "abcdefghijklmnopqstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!£$%^&*(){}#:;',./<>?";
	auto get_alphabet_number = [&](char char_) {
		for (int x = 0; x < 84; x++) if (alphabet[x] == char_) return x;;
		return -1;
	};
	
	if (method == "asc" || method == "ASC") {
		vector<char> start = vector_;
		vector<char> final_;
		// max until done
		while (start.size() > 0) {
			int smallest = 100000000;
			char smallest_item;
			int smallest_index = 0;
			int index = 0;
			for (char item : start) {
				if (get_alphabet_number(item) < smallest) {
					smallest = get_alphabet_number(item);
					smallest_item = item;
					smallest_index = index;
				}
				index++;
			}
			final_.push_back(smallest_item);
			start.erase(start.begin()+smallest_index);
		}
		return new Vvector_char(final_);
	} else if (method == "desc" || method == "DESC") {
		vector<char> start = vector_;
		vector<char> final_;
		// max until done
		while (start.size() > 0) {
			int biggest = -1;
			char biggest_item;
			int biggest_index = 0;
			int index = 0;
			for (char item : start) {
				if (get_alphabet_number(item) > biggest) {
					biggest = get_alphabet_number(item);
					biggest_item = item;
					biggest_index = index;
				}
				index++;
			}
			final_.push_back(biggest_item);
			start.erase(start.begin()+biggest_index);
		}
		return new Vvector_char(final_);
	} else {
		cerr << RED << "Invalid Sorting Method" << RESET << endl; 
		exit(-1);
	}
	return nullptr;
}