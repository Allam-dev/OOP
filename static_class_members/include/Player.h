#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;


class Player
{
    public:
        void setName(string n);
        string getName();
        int getNumber();
        Player();
        virtual ~Player();

    protected:

    private:
        string name;
        static int number;
};

#endif // PLAYER_H
