#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

struct Inspection
{
    std::string InspectionID;
            std::string DBA;
            std::string AKA_Name;
            std::string License;
            std::string FacilityType;
            std::string Risk;
            std::string Address;
            std::string city;
            std::string state;
            std::string zip;
            std::string inspectionDate;
            std::string inspectionType;
            std::string results;
            std::string violations;
            std::string latitude;
            std::string longitude;
            std::string location;
};
std::ifstream file;
std::vector<Inspection> data;
inline bool FileOpen(std::string path){
    file.open(path);
    return file.is_open();
}

inline bool FirstValueIsANumber(){
    
    Inspection d;
    while(file.good()){
        std::getline(file, d.InspectionID, ',');
            std::getline(file, d.DBA, ',');
            std::getline(file, d.AKA_Name, ',');
            std::getline(file, d.License, ',');
            std::getline(file, d.FacilityType, ',');
            std::getline(file, d.Risk, ',');
            std::getline(file, d.Address, ',');
            std::getline(file, d.city, ',');
            std::getline(file, d.state, ',');
            std::getline(file, d.zip, ',');
            std::getline(file, d.inspectionDate, ',');
            std::getline(file, d.inspectionType, ',');
            std::getline(file, d.results, ',');
            std::getline(file, d.violations, ',');
            std::getline(file, d.latitude, ',');
            std::getline(file, d.longitude, ',');
            std::getline(file, d.location, '\n');

            data.push_back(d);
    }
    int length = data.at(1).InspectionID.length();
    for(int i =0 ; i < length; i++){
        char c = data.at(1).InspectionID.at(i);
        if(c < '0' || c > '9'){
            return false;
        }
    }
    return true;
}

inline bool FirstRiskValueIsTrue(){
    if(data.at(1).Risk == "Risk 1 (High)"){
        return true;
    }
    else if(data.at(1).Risk == "Risk 2 (Medium)"){
        return true;
    }
    else if(data.at(1).Risk == "Risk 3 (Low)"){
        return true;
    }
    else if (data.at(1).Risk == "All"){
        return true;
    }
    return false;
}
