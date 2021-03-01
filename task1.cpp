#include "task1.h"
#include <iostream>
using namespace std;

Counted::Counted() {
    id = uniq;
    uniq++;
}
Counted::~Counted() {
    cout << "delete this id" << endl;
}
