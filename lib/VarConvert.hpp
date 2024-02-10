#pragma once
#include <iostream>
#include <string>
#include <tuple>
#include <map>

class VarConvert {
public:
    [[maybe_unused]] [[maybe_unused]] explicit VarConvert(const std::string& input);
    [[nodiscard]] std::tuple<int, std::string> ConvertToVariable() const;

private:
    [[maybe_unused]] int variableValue_;
    [[maybe_unused]] std::string variableName_;
};