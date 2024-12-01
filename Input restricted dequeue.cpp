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
        for (int i = 0; i < 5; i++) {
            dq[i] = -1;  // Initialize the deque with -1
        }
    }

    void add(int);     // Add an element at the rear
    int rff();         // Remove from the front
    int rfr();         // Remove from the rear
};

void dqueue::add(int v) {
    if (r == 4) {
        printf("Queue is full\n");
        return;
    } else {
        r++;
        dq[r] = v;  // Add element at the rear
        printf("Added %d to the queue\n", dq[r]);
        if (f == -1) {
            f = 0;  // Set the front to 0 if it's the first element
        }
    }
}

int dqueue::rff() {
    if (f == -1) {
        printf("Queue is empty\n");
        return -1;  // Queue is empty
    } else {
        int t = dq[f];
        printf("Removed %d from front\n", t);
        dq[f] = -1;  // Remove element from the front
        if (f == r) {
            f = r = -1;  // If only one element was in the queue, reset the queue
        } else {
            f++;  // Move front pointer to the next element
        }
        return t;
    }
}

int dqueue::rfr() {
    if (f == -1) {
        printf("Queue is empty\n");
        return -1;  // Queue is empty
    } else {
        int t = dq[r];
        printf("Removed %d from rear\n", t);
        dq[r] = -1;  // Remove element from the rear
        if (f == r) {
            f = r = -1;  // If only one element was in the queue, reset the queue
        } else {
            r--;  // Move rear pointer to the previous element
        }
        return t;
    }
}

int main() {
    dqueue c1;
    c1.add(1);  // Add element to the rear
    c1.add(2);  // Add element to the rear
    c1.add(3);  // Add element to the rear
    c1.add(4);  // Add element to the rear
    c1.add(5);  // Add element to the rear

    c1.rff();  // Remove from the front
    c1.rff();  // Remove from the front
    c1.rfr();  // Remove from the rear
    c1.rfr();  // Remove from the rear
    c1.rff();  // Remove from the front

    c1.add(6);  // Add another element to check
    getch();    // Wait for a key press (for older compilers)
    return 0;
}
