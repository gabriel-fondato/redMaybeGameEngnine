#pragma once



class RMGE {
    public:
        unsigned short int platform = 0; //1 gamecube, 2 wii, 3.... dont know yet
        bool init(unsigned short int platform);
}