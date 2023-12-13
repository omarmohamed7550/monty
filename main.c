#include "monty.h"

int main() {
    Stack stack;
    stack.top = -1; // Initialize an empty stack

    // Example usage:
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    // Output the stack using pall
    pall(&stack);

    return 0;
}
