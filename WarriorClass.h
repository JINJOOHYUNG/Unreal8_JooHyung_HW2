#pragma once
#include "BasicClass.h"
#include <iostream>

class Warrior :public Player
{
public:
    Warrior()
        :Player("Warrior", 1, 100, 50, 10, 5, 15, 15, 90, 30, 100.0f)
    {
    }
        
    void Attack() override;
    void Move() override;
    void ShowInformation() override;

    ~Warrior()
    {
        std::cout << "Warrior destroyed\n";
    }
};
