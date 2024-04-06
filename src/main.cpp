////////////////////////////////////////////////////////////////////////////////
// [[ C++ std librarys ]]
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

////////////////////////////////////////////////////////////////////////////////
// [[ Utils ]]
// - Code to help properly represent the content. 
// - This code can be <<IGNORE>> .
///////////////////////////////////////////////////////////////////////////////

#include "utils.h"
using namespace UTILS;

///////////////////////////////////////////////////////////////////////////////

int 
main() 
{
    /// Example usage
    ColorPrinter red(ColorPrinter::ValidColor::eRED);
    ColorPrinter green(ColorPrinter::ValidColor::eGREEN);
    ColorPrinter yellow(ColorPrinter::ValidColor::eYELLOW);

    red << "Error: ";
    std::cout << "Something went wrong." << std::endl;

    green << "Success: ";
    std::cout << "Operation completed successfully." << std::endl;

    yellow << "Warning: ";
    std::cout << "Proceed with caution." << std::endl;

    return 0;
}