#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

struct tokoSaya{
  string kode;
  string nama;
};

typedef struct elemen *address;

struct elemen{
  tokoSaya info;
  address next;
};

struct single_linked_list{
  address first;
};

void create_list(single_linked_list *l);
address alokasi(string kode, string nama);
void insert_first(single_linked_list *l, address elm);
void view(single_linked_list l);
void delokasi(address elm);
void delete_first(single_linked_list *l);
void insert_last(single_linked_list *l, address elm);
void delete_last(single_linked_list *l);
void insert_after(single_linked_list *l, address elm, int a);
void delete_after(single_linked_list *l, int a);
address search(single_linked_list l, string kode);

#endif
