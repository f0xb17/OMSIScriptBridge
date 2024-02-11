#include "../include/variables.h"

[[maybe_unused]] Variables::Variables(const std::string &input) {
    try {
        size_t openBracketIndex = input.find('(');
        size_t closeBracketIndex= input.find(')');
        if (openBracketIndex != std::string::npos && closeBracketIndex != std::string::npos) {
            std::string variableValue = input.substr(0, openBracketIndex);
            std::string variableName = input.substr(openBracketIndex + 1, closeBracketIndex - openBracketIndex - 1);

            size_t stringIdentifier = variableName.find("S.$.");
            size_t floatIdentifier = variableName.find("S.L.");

            if (stringIdentifier != std::string::npos) {
                variableName.erase(stringIdentifier, 4);
                stringValue_ = variableValue;
            } else if (floatIdentifier != std::string::npos) {
                variableName.erase(floatIdentifier, 4);
                floatValue_ = std::stof(variableValue);
            }

            variableName_ = variableName;
        }
    } catch (const std::exception& e) {
        printf("Invalid input format, expected OMSI Script, but got %s", e.what());
    }
}

[[nodiscard]] std::tuple<std::string, std::string> Variables::convertToString() const {
    return std::make_tuple(variableName_, stringValue_);
}

[[nodiscard]] std::tuple<std::string, float> Variables::convertToFloat() const {
    return std::make_tuple(variableName_, floatValue_);
}