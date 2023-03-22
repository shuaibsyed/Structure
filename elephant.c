
#include "elephant.h"
#include <stdio.h>

Elephant new_elephant(enum type which_type, unsigned int id,
                      unsigned short weight, float trunk_length) {
    Elephant elephant;
    elephant.elephant_type = which_type;
    elephant.id = id;
    elephant.weight = weight;
    elephant.trunk_length = trunk_length;
    return elephant;
}

unsigned short init_elephant(Elephant *const el_ptr, enum type which_type,
                             unsigned int id, unsigned short weight,
                             float trunk_length) {
    if(el_ptr == NULL) {
        return 0;
    }

    el_ptr->elephant_type = which_type;
    el_ptr->id = id;
    el_ptr->trunk_length = trunk_length;
    el_ptr->weight = weight;
    return 1;
}

enum type get_type(Elephant el) {
    return el.elephant_type;
}

unsigned int get_id(Elephant el) {
    return el.id;
}

unsigned short get_weight(Elephant el) {
    return el.weight;
}

float get_trunk_length(Elephant el) {
    return el.trunk_length;
}

unsigned short change_id(Elephant *const el_ptr, unsigned int new_id) {
    if(el_ptr == NULL) {
        return 0;
    }

    el_ptr->id = new_id;
    return 1;
}

unsigned short compare(Elephant e1, Elephant e2) {
    if(e1.elephant_type == e2.elephant_type && e1.id == e2.id && 
    e1.trunk_length == e2.trunk_length && e1.weight == e2.weight) {
        return 1;
    }
    return 0;
}

void print_elephant(Elephant el) {
    if(el.elephant_type == AFRICAN) {
        printf("AFRICAN ");
    } else {
        printf("ASIAN ");
    }
    printf("%d %d %g\n", el.id, el.weight, el.trunk_length);
}

unsigned short copy(Elephant *const el_ptr1, const Elephant *const el_ptr2) {
    

    if(el_ptr1 == NULL || el_ptr2 == NULL) {
        return 0;
    }

    el_ptr1->elephant_type = el_ptr2->elephant_type;
    el_ptr1->id = el_ptr2->id;
    el_ptr1->weight = el_ptr2->weight;
    el_ptr1->trunk_length = el_ptr2->trunk_length;
    return 1;
}