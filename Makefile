CC = g++
CFLAGS = -O2 -Wall
TARGET = sin_array_sum

# Определяем тип массива, по умолчанию float
ARRAY_TYPE ?= float

ifeq ($(ARRAY_TYPE),double)
    CFLAGS += -DARRAY_TYPE=double
else
    CFLAGS += -DARRAY_TYPE=float
endif

all: $(TARGET)

$(TARGET): main.cpp
	$(CC) $(CFLAGS) -o $(TARGET) main.cpp

clean:
	rm -f $(TARGET)