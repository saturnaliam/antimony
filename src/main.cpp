#include <iostream>
#include <fstream>
#include <direct.h>
#include "include\filepaths.h"

int main() {
    if(mkdir("E:\\FDSAD\\sdfsd") == -1) {
        std::cerr << "Error: " << strerror(errno) << std::endl;
    }
    std::ofstream MainFile("src\\d.cpp");

    MainFile << "dsfa";

    MainFile.close();
}