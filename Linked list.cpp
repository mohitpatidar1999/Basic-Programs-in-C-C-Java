#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

struct node {
    int data;
    node *link;
};

class linkedlist {
    node *start;
public:
    linkedlist();
    void add(int);
    void append(int);
    void insert(int, int);
    void display();
    int count();
    void deletenodebyindex(int);
    void deletenodebyvalue(int);
};

linkedlist::linkedlist() {
    start = NULL;
}

void linkedlist::add(int v) {
    node *temp = new node;
    temp->data = v;
    printf("%d\n", temp->data);
    if (start == NULL) {
        start = temp;
        start->link = NULL;
    } else {
        temp->link = start;
        start = temp;
    }
}

void linkedlist::display() {
    node* temp = start;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->link;
    }
}

int linkedlist::count() {
    int c = 0;
    node *temp = start;
    while (temp != NULL) {
        c++;
        temp = temp->link;
    }
    return c;
}

void linkedlist::append(int v) {
    node* t = new node;
    t->data = v;
    t->link = NULL;
    if (start == NULL) {
        start = t;
    } else {
        node* temp = start;
        while (temp->link != NULL)
            temp = temp->link;
        temp->link = t;
    }
}

void linkedlist::insert(int location, int value) {
    int c = this->count();
    if (location <= c) {
        node *temp = new node;
        temp->data = value;
        if (location == 0) {
            temp->link = start;
            start = temp;
        } else {
            node *t = start;
            for (int i = 0; i < (location - 1); i++) {
                t = t->link;
            }
            temp->link = t->link;
            t->link = temp;
        }
    } else {
        printf("Invalid location\n");
        return;
    }
}

void linkedlist::deletenodebyindex(int i) {
    int ct = this->count();
    if (i < ct) {
        node *temp = start;
        if (i == 0) {
            start = start->link;
            delete temp;
        } else {
            node *old;
            for (int j = 0; j < i; j++) {
                old = temp;
                temp = temp->link;
            }
            old->link = temp->link;
            delete temp;
        }
    }
}

void linkedlist::deletenodebyvalue(int num) {
    node *temp, *old;
    temp = start;
    while (temp != NULL) {
        if (temp->data == num) {
            if (temp == start) {
                start = start->link;
            } else {
                old->link = temp->link;
            }
            delete temp;
            return;  // Exit after deletion
        } else {
            old = temp;
            temp = temp->link;
        }
    }
    cout << "Value not found\n";
}

int main() {
    linkedlist l;
    l.add(1);
    l.add(2);
    l.add(3);
    l.insert(0, 0); // Insert 0 at the beginning
    l.insert(4, 4); // Insert 4 at the end
    l.display();
    
    l.deletenodebyindex(2);  // Delete node at index 2
    l.display();
    
    l.deletenodebyvalue(3);  // Delete node with value 3
    l.display();
    
    return 0;
}
