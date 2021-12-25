CC      = gcc
CFLAGS  = -Wall -Wextra -Wdisabled-optimization -Wdiv-by-zero -Werror \
          -Wfloat-equal -Wint-to-pointer-cast \
          -Wmissing-include-dirs -Wnested-externs \
          -Wno-main -Woverflow -Wparentheses -Wpointer-arith \
          -Wpointer-to-int-cast -Wredundant-decls -Wshadow \
          -Wstrict-prototypes -Wtrigraphs -Wundef -Wunused-parameter \
          -Wvariadic-macros -Wvla -Wwrite-strings -fpie \
          -fno-asynchronous-unwind-tables -fno-unwind-tables \
          -fno-stack-protector -fno-builtin -nostdinc -nostdlib \
          -fno-strict-aliasing -Wl,--build-id=none -std=c11 -pedantic \
          -c -s -O0

LD      = ld
LDFLAGS = -s -T linker_script.ld --nmagic

TARGET = code.elf
SOURCES=main.c
OBJ_FILES=$(SOURCES:.c=.o)

$(TARGET): $(OBJ_FILES)
	$(LD) $(LDFLAGS) -o $(TARGET) $(OBJ_FILES)

$(.)/%.o: $(.)/%.c
	$(CC) $(CFLAGS) -o $@ $^