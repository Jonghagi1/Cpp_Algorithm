#include<iostream>
#include<string>
#include<vector>

int main()
{
	std::string my_string("my string");
	//const char *my_string = "my string";
	std::string second_string(my_string, 3);
	std::string third_string(my_string, 3, 2);
	std::string fourth_string(10, 'A');

	std::cout << my_string << std::endl;	 // my string
	std::cout << second_string << std::endl; // string
	std::cout << third_string << std::endl;	 // st
	std::cout << fourth_string << std::endl; // AAAAAAAAAA

	std::vector<char> vec;
	for (auto e : "Today is a good day")
	{
		vec.push_back(e);
	}

	std::string fifth_string(vec.begin(), vec.end());
	std::cout << fifth_string << std::endl;	// Today is a good day

	std::string sixth_string(vec.begin(), std::find(vec.begin(), vec.end(), 'a')); // Tod
	std::cout << sixth_string << std::endl; // Tod

	std::string num_string(std::to_string(1004)); // 숫자를 string
	std::cout << num_string << std::endl; // 1004

	num_string += std::to_string(1000);
	std::cout << num_string << std::endl; //10041000

	return 0;
}