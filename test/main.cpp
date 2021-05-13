#include "unitTest.h"
#include <cassert>

void testFileOpen(){
    assert(true==FileOpen("/home/cuser/Justin/Final_CSVParse/Food_Inspections.csv"));
}

void testIfIDIsInt(){
    assert(true==FirstValueIsANumber());
}

void testFirstRiskIsValid(){
    assert(true ==FirstRiskValueIsTrue());
}

int main(){
    testFileOpen();
    testIfIDIsInt();
    testFirstRiskIsValid();
}