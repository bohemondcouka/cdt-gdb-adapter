extern int other(void);
static int staticfunc1(void) {
    return 2;
}
static int staticfunc2(void) {
    return 2;
}

int sub(void) {
    return 0;
}

int main(void) {
    staticfunc1();
    staticfunc2();
    sub();
    other();
    return 0;
}
