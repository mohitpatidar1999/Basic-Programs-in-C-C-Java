#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

class dqueue {
    int f, r;
    int dq[5];  // Deque with a fixed size of 5

public:
    dqueue() {
        f = r = -1;
        for (int i = 0; i < 5; i++)
            dq[i] = -1;  // Initialize the deque with -1
    }

    void addff(int);  // Add an element at the front
    void addfr(int);  // Add an element at the rear
    int remove();     // Remove an element from the front
};

void dqueue::addff(int v) {
    if (r == 4) {
        printf("Queue is full\n");
        return;
    }

    if (f == -1) {
        f = r = 0;
        dq[f] = v;
        printf("Added %d to the front (f = %d, r = %d)\n", dq[f], f, r);
    } else {
        // Shift elements to the right to make space at the front
        for (int i = r; i >= f; i--) {
            dq[i + 1] = dq[i];
        }
        dq[f] = v;  // Insert the new element at the front
        r++;         // Increase the rear index
        printf("Added %d to the front (f = %d, r = %d)\n", dq[f], f, r);
    }
}

void dqueue::addfr(int v) {
    if (r == 4) {
        printf("Queue is full\n");
        return;
    } else {
        if (f == -1) {
            f = 0;
        }
        r++;
        dq[r] = v;
        printf("Added %d to the rear (f = %d, r = %d)\n", dq[r], f, r);
    }
}

int dqueue::remove() {
    if (f == -1) {
        printf("Queue is empty\n");
        return -1;  // Queue is empty
    } else {
        int t = dq[f];
        printf("Removed %d from the front\n", t);
        dq[f] = -1;  // Remove the element from the front
        if (f == r) {
            f = r = -1;  // If the deque is empty, reset both front and rear
        } else {
            f++;  // Move the front pointer to the next element
        }
        return t;
    }
}

int main() {
    dqueue d;
    d.addff(1);  // Add to the front
    d.addff(2);  // Add to the front
    d.addff(3);  // Add to the front
    d.addfr(4);  // Add to the rear
    d.addfr(5);  // Add to the rear
    d.addff(6);  // Add to the front
    d.remove();  // Remove from the front
    d.remove();  // Remove from the front

    getch();  // Wait for a key press (for older compilers)
    return 0;
}
