#include "VarConvert.hpp"

[[maybe_unused]] VarConvert::VarConvert(const std::string& input) {
    try {
        size_t openBracketIndex = input.find('(');
        size_t closeBracketIndex = input.find(')');
        if (openBracketIndex != std::string::npos && closeBracketIndex != std::string::npos) {
            std::string variableValue = input.substr(0, openBracketIndex);
            std::string variableName = input.substr(openBracketIndex + 1, closeBracketIndex - openBracketIndex - 1);

            size_t scriptIdentifier = variableName.find("S.L.");
            if (scriptIdentifier != std::string::npos) {
                variableName.erase(scriptIdentifier, 4);
            }

            variableValue_ = std::stoi(variableValue);
            variableName_ = variableName;
        }
    } catch (const std::exception& e) {
        std::cerr << "Invalid input format. Expected '300 (S.L.Number)' but got: " << e.what() << std::endl;
    }
}

[[nodiscard]] std::tuple<int, std::string> VarConvert::ConvertToVariable() const {
    return std::make_tuple(variableValue_, variableName_);
}