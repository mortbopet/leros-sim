#include "testmacro.h"

int main(int argc, char** argv){
    int a0 = ARG(0);
    int a1 = ARG(1);
	char res = a0 >= a1;
	TEST_RETURN(res);
}
