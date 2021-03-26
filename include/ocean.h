// Copyright 2021 Bogomazov
#ifndef _OCEAN_H_
#define _OCEAN_H_

#include <list>
#include "../include/common.h"
#include "../include/cell.h"

class Cell;
class Ocean {
 private:
    Cell **cells;
    std::list<Object*> stuff;
    std::list<Object*> ListOfTheDead;
    int M, N;
    int number_objects;

 public:
    Ocean(int M, int N,  int number_objects);
    ~Ocean();
    void print() const;
    void addObjects(int number_objects);
    void run();

    Cell* seachEmptyPlace(Pair coordinate);
    void addObject(Object* object__);
    void AddListOfTheDead(Object* object__);
    void ClearListOfTheDead();
    Cell* hunt(Pair coordinate);
};
#endif