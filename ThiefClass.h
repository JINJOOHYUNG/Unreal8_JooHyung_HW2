#pragma once
#include "BasicClass.h"
#include <iostream>

class Thief :public Player
{
public:
    Thief()
        :Player("Thief", 1, 80, 60, 7, 7, 8, 5, 100, 70, 120.0f)
    {
    }

    void Attack() override;
    void Move() override;
    void ShowInformation() override;

    ~Thief()
    {
        std::cout << "Thief destroyed\n";
    }
};
