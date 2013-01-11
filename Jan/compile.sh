#!/bin/sh

g++ -c *.cpp -I ../SFML/include
g++ *.o -o game -L ../SFML/lib -lsfml-graphics -lsfml-window -lsfml-system
rm -f main.o
