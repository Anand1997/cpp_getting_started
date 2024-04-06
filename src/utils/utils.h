/// -*- utils.h -*-
#pragma once
#include <iostream>
#include <string>


namespace UTILS
{

/**
 * @file utils.h
 * @brief Declaration of the ColorPrinter class.
 *      - The class use to format the output string with given color 
 *      - <TODO> Reformat this with apropriate pattern.
 *
 * @author ag_narawade
*/
class ColorPrinter 
{
public: ///////////////////////////////////////////////////////////////////////
    
    /// Enum for valid colors
    enum class
    ValidColor
    {
        eRED = 91,
        eGREEN = 92,
        eYELLOW = 93,
        eBLUE = 94,
        eMAGENTA = 95,
        eCYAN = 96
    };

    /// Constructor to set the color code
    ColorPrinter(ValidColor eColor);

    /// <NeedFix> Not able to add this in cpp file due to linking error
    template <typename T>  /// using template is the reasone for linking error.
    
    inline ColorPrinter&
    operator<<(const T& sValue) 
    {
        std::cout << color_code_ << sValue << "\033[0m"; // Reset color after printing
        return *this;
    }

private: //////////////////////////////////////////////////////////////////////
    std::string color_code_;
}; /// ColorPrinter ///////////////////////////////////////////////////////////

} /// UTILS ///////////////////////////////////////////////////////////////////