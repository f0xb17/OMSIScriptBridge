#include <iostream>
#include <string>
#include <tuple>
#include "lib/VarConvert.hpp"
#include "lib/StringVarConvert.hpp"

int main() {
    // Example usage
    VarConvert converter("300 (S.L.Number)");
    auto result = converter.ConvertToVariable();
    std::cout << "Numeric value: " << std::get<0>(result) << std::endl;
    std::cout << "Variable name: " << std::get<1>(result) << std::endl;

    StringVarConvert stringConverter("\"Hello\" (S.$.String)");
    auto stringResult = stringConverter.ConvertToStringVar();
    std::cout << "String value: " << std::get<0>(stringResult) << std::endl;
    std::cout << "Variable name: " << std::get<1>(stringResult) << std::endl;

    return 0;
}