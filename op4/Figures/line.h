#ifndef OP4_LINE_H
#define OP4_LINE_H


#include "../Interface/IGeoFig.h"
#include "../Interface/BaseCObject.h"
#include "../Interface/Vector2D.h"
#include "../Interface/IPrintable.h"
#include "../Interface/IPhisObject.h"

namespace figure {
    class line : public IGeoFig, IPhysObject, IPrintable, BaseCObject {
        Vector2D a, b;
        float m;
    public:
        explicit line(float a_x, float a_y, float b_x, float b_y);

        float mass() override;

        Vector2D position() override;

        float square() override;

        float perimeter() override;

        void draw() override;

        bool operator==(IPhysObject &ob) const override;

        bool operator<(IPhysObject &ob) const override;

        unsigned int size() override;

        const char *classname() override;
    };
}

#endif //OP4_LINE_H
