/// -*- utils.h -*-

/**
 * @file utils.cpp
 * @brief Implementation of the ColorPrinter class.
 *      - The class use to format the output string with given color
 *      - <TODO> Refactor this with apropriate pattern.
 * 
 * @author ag_narawade
*/

#include "utils.h"
using namespace UTILS;

ColorPrinter::ColorPrinter(ValidColor color)
    : color_code_("\033[" + std::to_string(static_cast<int>(color)) + "m") {}