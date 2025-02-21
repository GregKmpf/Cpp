#include <iostream>
#include <cassert>

#include "listaduplencadea.cpp"

using namespace std;

int main(){

    UPF::list t;

  t.push_front("aa");
  assert(t.size() == 1);
  assert(t.first != nullptr);
  assert(t.first == t.last);
  assert(t.first->previous == nullptr);
  assert(t.first->next == nullptr);
  assert(t.first->value == "aa");


    return 0;
}