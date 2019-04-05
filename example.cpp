#include <iostream>
#include <string>
#include "strtool.h"
#include <vector>
void ln(){
	std::cout << "\n\n\n";
}
int main(){	
	std::string original = " \"Python--and--\" is fast--and--\"C++\" is powerfull--and--\"C\" is great--and--\"Assembly\" is the soul ";
	std::string backup = original;
	std::cout << "original string: " << original;
	ln();

	//find a string position in original string
	std::string tofind = "C++ is powerfull";
	int pos = find_str(original, tofind);
	std::cout << "the position is : "  << pos << "\n";
	ln();

	//sub string without affect the original string
	std::string python = sub_str(original, 2, 8);
	std::cout << "sub string without affect the original string : "  << python << "\n";	
	ln();

	//sub string with affect the original string
	python = sub_str(original, 2, 8, 1);
	std::cout << "sub string with affect the original string : "  << python << "\n";	
	std::cout << "now the original string become : "  << original << "\n";	
	ln();

	//restore original string
	original = backup;
	std::cout << "restoring the original string...\n";
	ln();

	//split the string
	std::string splitter = "--and--";
	std::cout << "split the string with " << splitter << "\n";
	vstr result = split_str(original, splitter);
	for (std::string i:result){
		std::cout << i << "\n";
	}
	ln();

	//split the string with string surround
	std::cout << "split the string surround with " << splitter << "\n";
	result = split_str_s(original, splitter, '"');
	for (std::string i:result){
		std::cout << i << "\n";
	}	
	ln();

	//count char
	char tocount = '-';
	int count = count_chr(original, tocount);
	std::cout << "count '" << tocount << "' in original: " << count << "\n";
	ln();

	return 0;
}