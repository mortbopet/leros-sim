#include "testmacro.h"

TEST_START{
    int value = ARG << 3;
    TEST_END(value);
}