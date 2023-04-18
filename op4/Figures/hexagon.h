//
// Created by Nikita Roman on 18.04.2023.
//

#ifndef OP4_HEXAGON_H
#define OP4_HEXAGON_H

#include "../Interface/IGeoFig.h"
#include "../Interface/BaseCObject.h"
#include "../Interface/Vector2D.h"
#include "../Interface/IPrintable.h"
#include "../Interface/IPhisObject.h"

namespace figure {
    class hexagon : public IGeoFig, IPhysObject, IPrintable, BaseCObject {
        Vector2D a, b, c, d, e, f;
        float m;
    public:
        explicit hexagon(float a_x, float a_y, float b_x, float b_y);

        float mass() override;

        Vector2D position() override;

        float square() override;

        float perimeter() override;

        void draw() override;

        bool operator==(IPhysObject &ob) const override;

        bool operator<(IPhysObject &ob) const override;

        const char *classname() override;

        unsigned int size() override;
    };
}

#endif //OP4_HEXAGON_H
