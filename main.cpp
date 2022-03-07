#include <iostream>
#include "mahasiswa.h"

using namespace std;

int main()
{
  single_linked_list L;

  creat_list(&L);

  address p = alokasi("1234567", "Budiman");

  insert_first(&L, p);

  view(L);

  return 0;
}
