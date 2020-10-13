#pragma once

#include <iostream>

class MenuManager
{
public:

    MenuManager() {
        defineFucs();
    }

    void defineFucs();
    void renderMenu();
};

inline std::unique_ptr<MenuManager> menuManager;
