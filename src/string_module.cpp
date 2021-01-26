#include "../include/string_module.h"

std::vector<std::string> split(std::string input, char delimiter){
    std::vector<std::string> output;
    while(input.find(delimiter)!=std::string::npos){
        std::string::size_type pos = input.find(delimiter);
        output.push_back(input.substr(0,pos));
        input.erase(pos);
    }

    return output.empty() ? std::vector<std::string>() : output;
}

static std::string rtrim(std::string input){
    input.erase(std::find_if(input.rbegin(),input.rend(), [](unsigned char ch){
            return !std::isspace(ch);
        }).base(), input.end());
}
static std::string ltrim(std::string input){
    input.erase(input.begin(), std::find_if(input.begin(),input.end(),[](unsigned char ch){
        return !std::isspace(ch);
    }));
}

std::string trim(std::string input){
    input = rtrim(input);
    input = ltrim(input);
    return input;
}