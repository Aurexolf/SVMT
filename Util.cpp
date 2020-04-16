//
// Created by jacke on 16/04/2020.
//

#include "Util.h"
#include <cstdlib>


int Util::openURL(std::string url) {
#ifdef _WIN64
    std::string command = "start " + url;
#endif
#ifdef __unix__
    std::string command = "open " + url;
#endif

    return std::system(command.c_str());
}
