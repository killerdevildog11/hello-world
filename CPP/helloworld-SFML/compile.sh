#!/bin/sh

ls

sudo apt install g++ build-essential libsfml-dev

g++ *.cpp -o main -lsfml-graphics -lsfml-window -lsfml-system
