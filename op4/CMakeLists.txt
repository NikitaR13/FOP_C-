cmake_minimum_required(VERSION 3.23)
project(op4)

set(CMAKE_CXX_STANDARD 14)

add_executable(op4 main.cpp Interface/BaseCObject.h Interface/Vector2D.h
        Interface/IPrintable.h Interface/IPhisObject.h Interface/IGeoFig.h Interface/IDialogInitiable.h
        App/app.h Figures/hexagon.cpp Figures/hexagon.h Figures/line.cpp Figures/line.h
        App/app.h App/app.cpp)
