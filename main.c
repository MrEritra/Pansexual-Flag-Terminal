#include <stdio.h>
void yellowBack() {
    printf("\e[48;2;255;217;0m\e[38;2;255;217;0m");
}

void magentaBack() {
    printf("\e[48;2;255;27;141m\e[38;2;255;27;141m");
}

void blueBack() {
    printf("\e[48;2;27;179;255m\e[38;2;27;179;255m");
}

void yellowFront() {
    printf("\e[38;2;255;217;0m");
}

void magentaFront() {
    printf("\e[38;2;255;27;141m");
}

void blueFront() {
    printf("\e[38;2;27;179;255m");
}

void reset() {
    printf("\033[0m");
}

int main(void) {
    printf("\n");
    printf("    ");
    magentaBack();
    printf("Hello World!\n");
    reset();
    printf("    ");
    yellowBack();
    printf("Hello World!\n");
    reset();
    printf("    ");
    blueBack();
    printf("Hello World!\n");
    reset();
    printf("\n   ");
    magentaFront();
    printf("You ");
    reset();
    yellowFront();
    printf("are ");
    reset();
    blueFront();
    printf("valid!\n");
    reset();
    printf("\n");
    return 0;
}