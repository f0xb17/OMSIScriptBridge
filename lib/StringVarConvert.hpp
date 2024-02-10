#pragma once
#include <iostream>
#include <string>
#include <tuple>
#include <map>

class StringVarConvert {
public:
    [[maybe_unused]] [[maybe_unused]] explicit StringVarConvert(const std::string& input);
    [[nodiscard]] std::tuple<std::string, std::string> ConvertToStringVar() const;

private:
    [[maybe_unused]] std::string variableValue_;
    [[maybe_unused]] std::string variableName_;
};