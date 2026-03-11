#pragma once
#include "BasicClass.h"
#include <iostream>

class Archer :public Player
{
public:
    Archer()
        : Player("Archer",1,50,50,20,5,3,3,100,100,100.0f)
    { }

    void Attack() override;
    void Move() override;
    void ShowInformation() override;

    ~Archer()
    {
        std::cout << "Archer destroyed\n";
    }
};