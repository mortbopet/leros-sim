
#include "testmacro.h"

int main(int argc, char** argv){
    int a0 = ARG(0); 
    int value = a0 << 11;
TEST_RETURN(value);}

