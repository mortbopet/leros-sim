
#include "testmacro.h"

int main(int argc, char** argv){
    int a0 = ARG(0); 
    int value = a0 << 22;
TEST_RETURN(value);}

