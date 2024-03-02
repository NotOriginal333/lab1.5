#pragma once
class Pair
{
private:
    int first;
    int second;

public:
    int getFirst() const { return first; }
    void setFirst(int f) { first = f; }

    int getSecond() const { return second; }
    void setSecond(int s) { second = s; }

    Pair add(const Pair& other) const;
};

