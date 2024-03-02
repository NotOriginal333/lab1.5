#include "Long.h"
#include <iostream>
#include <string>

using namespace std;

void Long::Init(const Pair& num) {
    number = num;
}

void Long::Read() {
    int f, s;
    cout << "Enter the first part of the number: ";
    cin >> f;
    cout << "Enter the second part of the number: ";
    cin >> s;
    number.setFirst(f);
    number.setSecond(s);
}

void Long::Display() const {
    cout << "Number: (" << number.getFirst() << ", " << number.getSecond() << ")" << endl;
}

Long Long::add(const Long& other) const {
    Long result;
    result.Init(number.add(other.number));
    return result;
}

Long Long::multiply(const Long& other) const {
    Long result;
    int firstPart = number.getFirst() * other.number.getFirst();
    int secondPart = number.getSecond() * other.number.getSecond();
    Pair pairResult;
    pairResult.setFirst(firstPart);
    pairResult.setSecond(secondPart);
    result.Init(pairResult);
    return result;
}

Long Long::subtract(const Long& other) const {
    Long result;
    Pair pairResult;
    pairResult.setFirst(number.getFirst() - other.number.getFirst());
    pairResult.setSecond(number.getSecond() - other.number.getSecond());
    result.Init(pairResult);
    return result;
}
