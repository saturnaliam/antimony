#include <string>
#include <vector>

class Filepath {
    public:
        std::string name;
        std::vector<Filepath> subpaths;
        Filepath(std::string new_name, std::vector<Filepath> new_subpaths);
}