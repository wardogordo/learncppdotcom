//
// Created by wardh on 11/2/2021.
//

#ifndef INC_16_6_CONTAINER_CLASSES_INTARRAY_H
#define INC_16_6_CONTAINER_CLASSES_INTARRAY_H

#include <cassert>

class IntArray
{
private:
    int m_length{};
    int *m_data{};

public:
    IntArray() = default; // Use default keyword to tell compiler to create default constructor, even
    // if we create other constructors for the class. Normally, when we create a constructor, cpp
    // will NOT create the default constructor, so this keyword overrides that behavior.



};

#endif //INC_16_6_CONTAINER_CLASSES_INTARRAY_H
