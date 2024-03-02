#include "Pair.h"

Pair Pair::add(const Pair& other) const {
    Pair result;
    result.setFirst(first + other.getFirst());
    result.setSecond(second + other.getSecond());
    return result;
}
