
#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top >= MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        stack[++top] = value;
        printf("%d pushed to stack.\n", value);
    }
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow!\n");
        return -1;
    } else {
        int value = stack[top--];
        printf("%d popped from stack.\n", value);
        return value;
    }
}

void display() {
    if (top < 0) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;
    while (1) {
        printf("\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to PUSH: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
