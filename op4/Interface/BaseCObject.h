//
// Created by Nikita Roman on 18.04.2023.
//

#ifndef OP4_BASECOBJECT_H
#define OP4_BASECOBJECT_H

class BaseCObject {
public:
    virtual const char *classname() = 0;

    virtual unsigned int size() = 0;
};

#endif //OP4_BASECOBJECT_H
