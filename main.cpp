#include <iostream>
#include "Tokosaya.h"

using namespace std;

int main()
{
  single_linked_list L;

  create_list(&L);

  address p = alokasi("202103", "Oreo Greentea");
  insert_first(&L, p);

  p = alokasi("202104", "Yogurt Chimori");
  insert_first(&L, p);

  delete_first(&L);

  p = alokasi("202105", "Indomie Kari Ayam");
  insert_last(&L, p);

  p = alokasi("202105", "Indomi Kari Ayam");
  insert_last(&L, p);

  delete_last(&L);

  p = alokasi("202106", "Indome Soto");
  insert_after(&L, p, 1);

  delete_after(&L, 1);

  p = search(L, "202103");

  view(L);

  return 0;
}
