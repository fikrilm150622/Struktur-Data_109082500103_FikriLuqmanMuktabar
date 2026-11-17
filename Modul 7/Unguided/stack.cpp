#include "stack.h"
#include <iostream>

using namespace std;

void createStack(Stack &S) {
    S.Top = 0;
}

bool isEmpty(Stack S) {
    return S.Top == 0;
}

void push(Stack &S, infotype x) {
    S.Top = S.Top + 1;
    S.info[S.Top] = x;
}

infotype pop(Stack &S) {
    infotype x = S.info[S.Top];
    S.Top = S.Top - 1;
    return x;
}

void printInfo(Stack S) {
    cout << "[TOP]";
    for (int i = S.Top; i >= 1; i--) {
        cout << " " << S.info[i];
    }
    cout << endl;
}

void balikStack(Stack &S) {
    Stack T;
    createStack(T);
    while (!isEmpty(S)) {
        push(T, pop(S));
    }
    S = T;
}

void pushAscending(Stack &S, infotype x) {
    Stack T;
    createStack(T);
    while (!isEmpty(S) && S.info[S.Top] > x) {
        push(T, pop(S));
    }
    push(S, x);
    while (!isEmpty(T)) {
        push(S, pop(T));
    }
}

void getInputStream(Stack &S) {
    char c = cin.get();
    while (c != '\n') {
        push(S, c - '0');
        c = cin.get();
    }
}