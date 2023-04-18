//
// Created by Nikita Roman on 18.04.2023.
//

#ifndef OP4_APP_H
#define OP4_APP_H

//#include "line.h"
#include <vector>
#include <iostream>
#include "../Interface/IDialogInitiable.h"
#include "../Interface/IGeoFig.h"

class app : public IDialogInitiable {
private:
    std::vector<IGeoFig *> arr;
public:
    void initFromDialog() override;

    void add(IGeoFig *figure);

    int start();
};


#endif //OP4_APP_H
