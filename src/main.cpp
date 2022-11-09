#include <cstring>
#include <iostream>
#include <string>
#include <fstream>
#include <direct.h>

void output_error(const std::string &message) {
    //std::cerr << "Error: " << message << std::endl;
}

// fuck DRY
void create_folders() {
    if (mkdir("src") == -1) {
        output_error(strerror(errno));
    }

    if (mkdir("src\\include") == -1) {
        output_error(strerror(errno));
    }

    if (mkdir("src\\lib") == -1) {
        output_error(strerror(errno));
    }

    if (mkdir("bin") == -1) {
        output_error(strerror(errno));
    }

    if (mkdir("bin\\debug") == -1) {
        output_error(strerror(errno));
    }

    if (mkdir("bin\\target") == -1) {
        output_error(strerror(errno));
    }
}

int main() {
    create_folders();
    std::ofstream MainFile("src\\main.cpp");

    MainFile << "#include <iostream>" << std::endl << std::endl << "int main() {" << std::endl << "    std::cout << \"Hello, World!\";" << std::endl << "}";

    MainFile.close();

    std::ofstream Makefile("Makefile");

    Makefile << "make:" << std::endl << "  g++ -c src\\main.cpp" << std::endl << "  g++ -o bin\\debug\\main main.o" << std::endl << "  del /f main.o" << std::endl << "  .\\bin\\debug\\main";

    Makefile.close();
}