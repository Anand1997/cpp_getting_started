////////////////////////////////////////////////////////////////////////////////
// [[ C++ std librarys ]]
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

////////////////////////////////////////////////////////////////////////////////
// [[ Utils and other helpers ]]
// - Code to help properly represent the content. 
// - This code can be <<IGNORE>> .
///////////////////////////////////////////////////////////////////////////////

#include "utils.h"
using namespace UTILS;
using namespace std;

ColorPrinter gobj_coutRed(ColorPrinter::ValidColor::eRED);
ColorPrinter gobj_coutGreen(ColorPrinter::ValidColor::eGREEN);
ColorPrinter gobj_coutBlue(ColorPrinter::ValidColor::eBLUE);

///////////////////////////////////////////////////////////////////////////////

#include "complex.h"

int 
main() 
{
    gobj_coutGreen
        << " ====== CH 3 C++ Abstraction Machanisms ====== \n"
        << " - 3.2 Classes \n"
        << " - 3.2.1 Concrete Type : \n"
        << "   - Works \" just like built-in type .\"\n"
        << "   - Its representation is part of its defination \n"
        << "   - To increase flexibility, a concrete type can \n"
        << "     keep major parts of its representation \n"
        << "     on the free storage.\n"
        << " ============================================= \n\n";
    
     
    CH3::complex C1(1.0, 2.3);
    CH3::complex C2(2.1, 1.3);

    C1 += C2;


    return 0;
}