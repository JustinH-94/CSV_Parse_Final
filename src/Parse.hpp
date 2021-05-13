#pragma once
#include <string>
#include <vector>
class Parse
{
    public:
        struct fileData{
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

        std::vector<fileData> ReadDataFile();
};

