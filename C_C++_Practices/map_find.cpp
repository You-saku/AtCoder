#include <map>
#include <iostream>

int main(){
    std::map<std::string, unsigned> dictionary{
        {"John", 1000},
        {"Tom", 1400},
        {"Harry", 800},
        {"hoge",10}
    };

    if (dictionary.count("hoge")==true ) {
        std::cout << "exists" << std::endl;
    } else {
        std::cout << "not exists" << std::endl;
    }
} 