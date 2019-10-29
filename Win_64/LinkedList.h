/*
    utest example : Unit test examples.
    Copyright (C) <2018>  <Mauricio Davila>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __LINKEDLIST
#define __LINKEDLIST
struct Node
{
    void* pElement;
    struct Node* pNextNode;
}typedef Node;

struct LinkedList
{
    Node* pFirstNode;
    int size;
}typedef LinkedList;
#endif



//Publicas
LinkedList* ll_newLinkedList(void);//nueva lista

int ll_len(LinkedList* this);//tamaño

Node* test_getNode(LinkedList* this, int nodeIndex);
int test_addNode(LinkedList* this, int nodeIndex,void* pElement);//testeos

int ll_add(LinkedList* this, void* pElement);//agregar cualquier tipo de dato

void* ll_get(LinkedList* this, int index);//buscar por indice

int ll_set(LinkedList* this, int index,void* pElement);//poner un elemento arriba de otro o reemplazar

int ll_remove(LinkedList* this,int index);//saca un elemento de la lista

int ll_clear(LinkedList* this);//borra los elementos de la lista

int ll_deleteLinkedList(LinkedList* this);//borra la lista con todos los elementos

int ll_indexOf(LinkedList* this, void* pElement);//paso un elemento y me dice en que indice esta

int ll_isEmpty(LinkedList* this);//dice si hay algo ne la lista o no

int ll_push(LinkedList* this, int index, void* pElement);//agrega un indice a la lista sin pisar al anterior

void* ll_pop(LinkedList* this,int index);//elimina pero antes de borrarlo lo guarda y lo devuelve

int ll_contains(LinkedList* this, void* pElement);//paso el elemento y me dice si esta el elemento en la lista

int ll_containsAll(LinkedList* this,LinkedList* this2);//sub lista si todos los elementos de la primer lista estan en la segunda

LinkedList* ll_subList(LinkedList* this,int from,int to);//crea una sub lista hasta donde quieras

LinkedList* ll_clone(LinkedList* this);//crea una copia identica de la lista

int ll_sort(LinkedList* this, int (*pFunc)(void* ,void*), int order);//ordena
