#include <iostream>
#include <algorithm>


int
main ()
{
	std::string s("Yahoo Google");

	transform (s.begin(), s.end(), s.begin(), toupper);
	std::cout << s << std::endl;
	transform (s.begin(), s.end(), s.begin(), tolower);
	std::cout << s << std::endl;


    std::cout << s[0] << std::endl;
    return 0;
	//::exit (EXIT_SUCCESS);
}