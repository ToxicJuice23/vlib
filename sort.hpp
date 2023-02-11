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
			int biggest = 0;
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