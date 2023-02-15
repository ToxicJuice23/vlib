# VLib Beta 1.0

## Installation

Step one: Download source code using git clone  
Step two: Add `vlib` folder to your project  
Step three: Add -I/path/to/vlib to your g++ command  
Step four: `#include <vlib.hpp>`  
Step five: Enjoy the library ;)  

## Usage

### Initialization of Vvector object

Any of the standard c++ types (std::string included) are useable for a Vvector object
To initiate a Vvector, simply do
```
Vvector_int* your_vector = new Vvector_int({0, 1, 2, 3});
```
keep in mind that `{0, 1, 2, 3}` int can be changed to any of the following types:
std::string
float
double
bool

2dimentional Vvectors are not available yet, but they will be there in the future.

### Available Vvector methods

Multiple versions are written of the same function for each type available so in the examples, the type will be replaced with `type`
Also, the number: function is used to identify functions in the documentation. You may use these numbers as reference to what they do

1: `void Vvector_type::Vpop(int index);`  
2: `void Vvector_type::Vpush(type value, int index);`  
3: `void Vvector_type::Vprint_values(std::string method="cout", std::string additional_info=""`  
4: `Vvector_type Vvector_type::Vreverse()`  
5: `void Vvector_type::Vset_vector(vector<type> v)`  
6: `int Vvector_type::Vsize()`  
7: `type Vvector_type::Vget_item(int index)`  
8: `vector<type> Vvector_type::Vget_vector()`  
9: `Vvector_type::Vvector_type(vector<type> v={})`  
10: `int VVector_type::Vfind(int item)`  
11: `bool Vvector_type::Vnext()`  
12: `type Vvector_type::Vat()`  
13: `bool Vvector_type::Vcompare(Vvector_type* v)`  
14: `Vvector_type* Vvector_type::Vsort(string method="asc")`  
15: `std::string Vvector_type::Vto_string()`  
16: `Vvector_type* Vlib::Vparse_str_to_type(string str, char separator)`

## What the methods do

1: removes the item of the Vvector at specified index  
2: adds an item in the Vvector at specified index  
3: prints the values of the vector to the terminal either through printf or cout which is specified through the first parameter (defaults to cout)  
4: returns a Vvector_type object equivalent to a reversed version of the current object  
5: set the Vvector to a `std::vector<type>` value  
6: gets the size of the vector  
7: gets the value of the Vvector at a certain index  
8: gets the `std::vector<type>` equivalent of the Vvector  
9: Constructor to the Vvector  
10: get the index of a specific item  
11: increments the current index which can be accessed with at  
12: accesses the value at the current index, incremented with next()  
13: returns true if v is equal to the current Vvector. Only compares up to the length of the current Vvector  
14: returns a Vvector ordered by either ascending or descending values  
15: concatenates the Vvector values of a Vvector_string or Vvector_char  
16: parses a string to return a Vvector of that wanted type  

## Errors coming soon