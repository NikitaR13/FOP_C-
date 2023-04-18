//
// Created by Nikita Roman on 18.04.2023.
//

#include "app.h"
#include "../Figures/line.h"
#include "../Figures/hexagon.h"

#define lin 1

int app::start() {
    std::cout << "input number of figures:\n";
    int number;
    std::cin >> number;
    for (int i = 0; i < number; i++) {
        initFromDialog();
    }
    return 0;
}

void app::add(IGeoFig *figure) {
    arr.push_back(figure);
}

void app::initFromDialog() {
    int input;
    float mass[4]{};
    std::cout << "input coordinates:\na_x=";
    std::cin >> mass[0];
    std::cout << "\na_y=";
    std::cin >> mass[1];
    std::cout << "\nb_x=";
    std::cin >> mass[2];
    std::cout << "\nb_y=";
    std::cin >> mass[3];
    std::cout << "choose figure:\n1.line\n2.hexagon\n";
    std::cin >> input;
    if (input == lin) {
        arr.push_back(new figure::line(mass[0], mass[1], mass[2], mass[3]));
    } else {
        arr.push_back(new figure::hexagon(mass[0], mass[1], mass[2], mass[3]));
    }
}
