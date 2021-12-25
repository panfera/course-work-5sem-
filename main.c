__attribute__((noreturn))
void main(void)
{
    volatile unsigned int* ptr = (void*)(0x000A0000);
    while (1) {
        for (unsigned long i = 0; i < 0x0000FFFF; ++i) {
            ++ptr[i];
        }
    }
}

__attribute__((section(".entry")))
__attribute__((noreturn))
void _entry(void)
{
    main();
    for (;;);
}