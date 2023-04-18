//
// Created by Nikita Roman on 18.04.2023.
//

#ifndef OP4_IPHISOBJECT_H
#define OP4_IPHISOBJECT_H

#include "Vector2D.h"

class IPhysObject {
public:
    virtual float mass() = 0;

    virtual Vector2D position() = 0;

    virtual bool operator==(IPhysObject &ob) const = 0;

    virtual bool operator<(IPhysObject &ob) const = 0;
};

#endif //OP4_IPHISOBJECT_H
