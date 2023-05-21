#include "9cc.h"
int main(int argc, char **argv) {
    if (argc != 2)
        token = tokenize();
    Node *node = program();
    codegen(node);
    return 0;
}