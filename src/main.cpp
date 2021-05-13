#include <iostream>
#include <string>
#include <vector>
#include "Parse.hpp"

std::vector<std::string> risk1;
std::vector<std::string> risk2;
std::vector<std::string> risk3;
std::vector<std::string> all;
void CountNumOfUniqueRisks(Parse::fileData i){
    if(i.Risk == "Risk 1 (High)"){
        risk1.push_back(i.Risk);
    }
    if(i.Risk == "Risk 2 (Medium)"){
        risk2.push_back(i.Risk);
    }
    if(i.Risk == "Risk 3 (Low)"){
        risk3.push_back(i.Risk);
    }
    if(i.Risk == "All"){
        all.push_back(i.Risk);
    }
}

int main(){
    Parse parse = Parse();
    std::vector<Parse::fileData> data = parse.ReadDataFile();
    for(int i = 0; (unsigned)i < data.size(); i++){
        CountNumOfUniqueRisks(data.at(i));
    }
    std::cout << data.at(1).Risk;
    std::cout << "Risk 1 Count: " << risk1.size() << std::endl;
    std::cout << "Risk 2 Count: " << risk2.size() << std::endl;
    std::cout << "Risk 3 Count: " << risk3.size() << std::endl;
}