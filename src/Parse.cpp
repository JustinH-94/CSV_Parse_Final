#include "Parse.hpp"
#include <fstream>
#include <iostream>

std::vector<Parse::fileData> Parse::ReadDataFile(){
    std::vector<Parse::fileData> data;
    std::ifstream foodInspectionFile;

    foodInspectionFile.open("/home/cuser/Justin/Final_CSVParse/Food_Inspections.csv");

    if(!foodInspectionFile.is_open())
    {
        std::cout<< "Error Opening File" << std::endl;
    }
        Parse::fileData d;
        while(foodInspectionFile.good()){
            std::getline(foodInspectionFile, d.InspectionID, ',');
            std::getline(foodInspectionFile, d.DBA, ',');
            std::getline(foodInspectionFile, d.AKA_Name, ',');
            std::getline(foodInspectionFile, d.License, ',');
            std::getline(foodInspectionFile, d.FacilityType, ',');
            std::getline(foodInspectionFile, d.Risk, ',');
            std::getline(foodInspectionFile, d.Address, ',');
            std::getline(foodInspectionFile, d.city, ',');
            std::getline(foodInspectionFile, d.state, ',');
            std::getline(foodInspectionFile, d.zip, ',');
            std::getline(foodInspectionFile, d.inspectionDate, ',');
            std::getline(foodInspectionFile, d.inspectionType, ',');
            std::getline(foodInspectionFile, d.results, ',');
            std::getline(foodInspectionFile, d.violations, ',');
            std::getline(foodInspectionFile, d.latitude, ',');
            std::getline(foodInspectionFile, d.longitude, ',');
            std::getline(foodInspectionFile, d.location, '\n');

            data.push_back(d);
        }
        foodInspectionFile.close();
        return data;
}