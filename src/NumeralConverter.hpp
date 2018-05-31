#ifndef NUMERALCONVERTER_HPP
#define NUMERALCONVERTER_HPP

#include <string>
#include <cmath>

class NumeralConverter
{
    public:
        enum NumSystem { BIN, OCT, DEC, HEX };

        NumeralConverter(NumSystem system, std::string value);
        bool valueGood();
        std::string ConvertValue(NumSystem target);

    private:
        std::string inputValue;
        NumSystem valueSystem;

        std::string binToDec();
        std::string decToBin();
};

#endif