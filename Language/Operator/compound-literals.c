/*
Declaring a structure or array pointer: (the name of the type){initializer list}
*/

int* i = &(int){ 123 };                              //int, pointer
int* x = (int[]){ 1, 2, 3, 4 };                      //array, pointer
struct data_t* data = &(struct data_t){ .x = 123 };  //struct, pointer
func(123, &(struct data_t){ .x = 123 });             //function parameters, pointer

//If it is static or global variable, then the initializer must be a compile time constant.