#ifndef _data_h
#define _data_h

#include <vector>

class Joint {
public:
    std::vector<float> position;
    std::vector<float> rotation;
};

class Player {
public:
    std::vector<Joint> joints;
};

class Data {
public:
    int width;
    int height;
    std::vector<Player> players;
    Data();
    ~Data();
};

#endif
