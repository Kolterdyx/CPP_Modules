//
// Created by kolterdyx on 9/10/24.
//

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
#include <stdint.h>

class Serializer {
public:
    static uintptr_t serialize(Data* ptr);

    static Data* deserialize(uintptr_t raw);


    Serializer();
    Serializer(const Serializer &other);
    Serializer &operator=(const Serializer &other);
    virtual ~Serializer();
};



#endif //SERIALIZER_HPP
