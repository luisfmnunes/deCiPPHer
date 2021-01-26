#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<sys/stat.h>
#include<algorithm>

//String operations
std::vector<std::string> split(std::string input, char delimiter = ' ');
std::string trim(std::string input);
std::string remove_extension(std::string input);

//Checking conditions
bool has_extension(std::string input);
bool is_file(std::string path);
bool is_dir(std::string path);

template<class Numeric> inline bool is_numeric(std::string input){
    Numeric n;
    return((std::istringstream(input) >> n >> std::ws).eof());
};

