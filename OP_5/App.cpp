#include <iostream>
#include "App.h"

int App::start() {
    Queue<int> queue();
    try {
        queue().pop();
    }
    catch (QueueExceptions &e) {
        std::cerr << e.what() << std::endl;
    }
    queue().push(10);
    queue().push(20);
    queue().push(40);
    queue().sizeOf();
}