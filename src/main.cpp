#include <iostream>
#include <vector>


class File{
    std::vector<int> numVec;
public:
    File(std::initializer_list<int> _numVec) {
        numVec = _numVec;
    }
    std::vector<int> getVec() {
        return numVec;
    }
};

int main() {
    File file{1, 2, 3, 4, 5};

    for(auto& current : file.getVec()) {
        std::cout << current << std::endl;
    }


    return 0;
}