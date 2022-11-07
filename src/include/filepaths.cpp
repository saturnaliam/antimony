#include "filepaths.h"

Filepath::Filepath(std::string new_name, std::vector<Filepath> new_subpaths) : name(new_name), subpaths(new_subpaths) {}