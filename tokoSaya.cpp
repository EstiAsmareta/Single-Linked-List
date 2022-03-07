#include "tokoSaya.h"

void create_list(single_linked_list *l){
  l->first = NULL;
}
address alokasi(string kode, string nama){
  address p = new elemen;
  p->info.kode = kode;
  p->info.nama = nama;
  p->next = NULL;

  return p;
}
void insert_first(single_linked_list *l, address elm){
  elm->next = l->first;
  l->first = elm;

  elm = NULL;
}
void view(single_linked_list l){
  if(l.first != NULL){
    address p = l.first;
    while(p != NULL){
      cout << "kode : " << p->info.kode <<", nama : " <<p->info.nama << endl;
      p = p->next;
    }
  }
}
void dealokasi(address elm){
  delete elm;
}
void delete_first(single_linked_list *l){
  if(l->first != NULL){
    address p = l->first;
    l->first = p->next;

    p->next = NULL;

    dealokasi(p);
  }else{
    cout << "list sudah kosong"<<endl;
  }
}
void insert_last(single_linked_list *l, address elm){
  if(l->first != NULL){
    address p = l->first;
    while(p->next != NULL){
      p = p->next;
    }

    p->next = elm;
    elm = NULL;
  }else {
    insert_first(l, elm);
  }
}
void delete_last(single_linked_list *l){
  if(l->first != NULL){
    address p = l->first;
    if(p->next == NULL){
    delete_last(l);
    }else{
      address q = p;
      p = q ->next;
      while (p->next != NULL){
        q = p;
        p = q->next;
      }
    q->next = NULL;

    dealokasi(p);
    }
  }else{
    cout <<"list telah kosong" << endl;
  } 
}
void insert_after(single_linked_list *l, address elm, int a){
  if(l->first != NULL){
    address p = l->first;
    int i = 1;
    while (p != l->first){
      p = p->next;
      i++;
    }

    if(p!=NULL){
      elm->next = p->next;
      p->next = elm;
    }else{
      cout <<"elemen tidak sampai " << a <<" buah";
    }
  }else{
    insert_first(l, elm);
  }
}
void delete_after(single_linked_list *l, int a){
  if(l->first != NULL){
    address p = l->first;
    int i = 1;
    while (p != NULL && i < a){
      p = p->next;
      i++;
    }

    if(p!= NULL){
      if(p->next == NULL){
        delete_last(l);
      }else{
        address q = p->next;
        p->next = q->next;
        q->next = NULL;
        dealokasi(q);
      }
    }else{
      cout <<"elemen tidak sampai " << a <<" buah";
    }
  } else{
    cout << "list telah kosong"<< endl;
  }
}
address search(single_linked_list l, string kode){
  if(l.first != NULL){
    address p = l.first;
    while (p != NULL && p->info.kode != kode){
      p = p->next;
    }

    if(p!=NULL){
      cout<< "kode : " << kode << " ditemukan"<< endl;
        return p;
    } else{
      return NULL;
    }
  }else {
    return NULL;
  }
}
