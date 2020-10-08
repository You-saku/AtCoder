#include<iostream>
#include<algorithm>
#include<vector>

int main(){

    std::string moji;
    std::string copy;
    
    
    std::cin >> moji;

    std::cout << "Initial" << std::endl;
    std::cout << moji << std::endl;

    copy.resize(moji.size());

    transform (moji.begin(), moji.end(), copy.begin(), toupper);
    std::cout << "Transform" << std::endl;
	std::cout << copy << std::endl;

    return 0;
}