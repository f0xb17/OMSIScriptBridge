#pragma once
#include <iostream>
#include <tuple>
#include <string>

class Variables {
public:
    [[maybe_unused]] explicit Variables(const std::string& input);
    [[nodiscard]] std::tuple<std::string, std::string> convertToString() const;
    [[nodiscard]] std::tuple<std::string, float> convertToFloat() const;
private:
    [[maybe_unused]] std::string variableName_;
    [[maybe_unused]] std::string stringValue_;
    [[maybe_unused]] float floatValue_;
};