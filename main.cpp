#include <iostream>

using namespace std;
#include "ll.h"

int main(int argc, char **argv){
	    LL l;

    int i;  
		for(i=1;i<argc;i+=2) {
			l.insert_node(atoi(argv[i]),argv[i+1]);
        
      }
	 	l.print_all();

}//automatically call destructor
