#!/bin/sh

g++ -c main.cpp -I ../SFML/include
g++ main.o -o game -L ../SFML/lib -lsfml-graphics -lsfml-window -lsfml-system
rm -f main.o
