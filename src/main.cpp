#include <cstring>
#include <iostream>
#include <fstream>
#include <direct.h>
#include <vector>
#include "include\filepaths.h"

void create_paths(std::vector<Filepath> paths) {
    for(Filepath path : paths) {
        // Stores the path's name.
        char* path_name = &path.name[0];

        // Generates the subpath.
        if (mkdir('\\' + path_name) == -1) {
            std::cerr << "Error: " << strerror(errno) << std::endl;
        }

        for(Filepath subpath : path.subpaths) {
            char* subpath_name = &subpath.name[0];

            if (mkdir('\\' + subpath_name) == -1) {
                std::cerr << "Errorr: " << strerror(errno) << std::endl;
            }
        }
    }
}

int main() {
    if(mkdir("\\FDSAD") == -1) {
        std::cerr << "Error: " << strerror(errno) << std::endl;
    }
    std::ofstream MainFile("src\\d.cpp");

    MainFile << "dsfa";

    MainFile.close();
}