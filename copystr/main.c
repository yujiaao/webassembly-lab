#include <string.h>
#include <stdio.h>

#define WASM_EXPORT __attribute__((visibility("default")))

#define MAX 1024
static char dest[MAX];
WASM_EXPORT
int main(int argv, char** args) {
  if(argv>1){
    int i=0;
    while(i<MAX && args[1][i]!=NULL)
       dest[i] = args[1][i];
       i++;
  }
    
  return dest[0];
}
