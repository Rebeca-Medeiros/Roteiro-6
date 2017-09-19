#ifndef TELEVISAO_H
#define TELEVISAO_H

class Televisao{
    private:
        int volume;
        int canal;
    public:
        Televisao(int volume, int canal);

        void setVolume(int v);
        int getVolume();

        void setCanal(int c);
        int getCanal();

        void alteraVolume(int volume);
        void alteraCanal(int canal);

};



#endif // TELEVISAO_H
