#include <iostream>
#include <string>
#include <tuple>
#include "include/variables.h"



int main() {
    Variables var("300 (S.L.Number)");
    auto intResult = var.convertToFloat();

    std::cout << "Variable Name: " << std::get<0>(intResult) << std::endl;
    std::cout << "Value: " << std::get<1>(intResult) << std::endl;

    Variables floatVar("0.5 (S.L.FloatNumber)");
    auto floatResult = floatVar.convertToFloat();

    std::cout << "Variable Name: " << std::get<0>(floatResult) << std::endl;
    std::cout << "Value: " << std::get<1>(floatResult) << std::endl;

    Variables stringVar("\"Hello\" (S.$.String)");
    auto stringResult = stringVar.convertToString();

    std::cout << "Variable Name: " << std::get<0>(stringResult) << std::endl;
    std::cout << "Value: " << std::get<1>(stringResult) << std::endl;

}