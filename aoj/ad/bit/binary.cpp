#include<iostream>
#include<bitset>
#include<string>

int main(){
	int value = 5;
	std::string str(std::bitset<4>(value).to_string<char,std::char_traits<char>, std::allocator<char> >());
	std::cout << str << std::endl;
	return 0;
}
