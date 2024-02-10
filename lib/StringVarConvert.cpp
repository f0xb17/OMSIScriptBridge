#import "StringVarConvert.hpp"

[[maybe_unused]] StringVarConvert::StringVarConvert(const std::string& input) {
    try {
        size_t openBracketIndex = input.find('(');
        size_t closeBracketIndex = input.find(')');
        if (openBracketIndex != std::string::npos && closeBracketIndex != std::string::npos) {
            std::string variableValue = input.substr(0, openBracketIndex);
            std::string variableName = input.substr(openBracketIndex + 1, closeBracketIndex - openBracketIndex - 1);

            size_t scriptIdentifier = variableName.find("S.$.");
            if (scriptIdentifier != std::string::npos) {
                variableName.erase(scriptIdentifier, 4);
            }

            variableValue_ = variableValue;
            variableName_ = variableName;
        }
    } catch (const std::exception& e) {
        std::cerr << "Invalid input format. Expected '\"Test\" (S.$.String)' but got: " << e.what() << std::endl;
    }
}

[[nodiscard]] std::tuple<std::string, std::string> StringVarConvert::ConvertToStringVar() const {
    return std::make_tuple(variableValue_, variableName_);
}