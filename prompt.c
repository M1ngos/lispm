#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <editline/readline.h>
//#include <editline/history.h>

/*Buffer for user input*/
//static char input[2048];

int main() {

    puts("lispm version 0.1");
    puts("Press Ctrl+c to Exit\n");

   while(true) {
       
        
       char* input = readline("lispy> ");

       add_history(input);
        
       printf("Return %s\n",input);

       free(input);       

       /*
       fputs("lispm> ",stdout);
       fgets(input, 2048,stdin);
       */
    }

   return 0;
}

