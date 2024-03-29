#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "aux.h"

/***********************************************************************************/
/*                           SIMPLE ASCCI TABLE                                    */
/* This ASCCI table can be useful for software development, for remember the code  */
/* of characters (oct / dec / hex code). Saved on the computer, it can be used in  */
/* terminal directly.                                                              */
/*                                                                                 */
/* OBS: the code has repeated chuncks of code to be simple. It needs refactoring.  */
/***********************************************************************************/

int main( int argc, char** argv ) {

    const unsigned char shift = 16; // shift for table alignment
    unsigned char c;                // command-line arguments
    bool flag_o = true;             // oct codes are visible
    bool flag_d = true;             // dec codes are visible
    bool flag_x = true;             // hex codes are visible

    // much more args: error
    if ( argc>2 ) {
        printf( "ERROR: many arguments. Enter -h for HELP\n" );
        exit( EXIT_FAILURE );
    }

    // just 2 args: analize (need refactoring)
    if ( argc==2 ) {
        if ( !strcmp(argv[1], "-h") ) {
            help();
            exit( EXIT_SUCCESS );
        } else if ( !strcmp(argv[1], "-v") ) {
            version();
            exit( EXIT_SUCCESS );
        } else if ( !strcmp(argv[1], "-o") ) {
            flag_o = true;
            flag_d = false;
            flag_x = false;
        } else if ( !strcmp(argv[1], "-d") ) {
            flag_o = false;
            flag_d = true;
            flag_x = false;
        } else if ( !strcmp(argv[1], "-x") ) {
            flag_o = false;
            flag_d = false;
            flag_x = true;
        }
    }

    printf( "\n" );
    printf( "======================================================================\n" );
    printf( "                        SIMPLE ASCII TABLE                            \n" );
    printf( "======================================================================\n" );
    printf( "\n" );

    // program loop
    for ( unsigned char s=2; s<=7; s++ ) {
	// characters (always visible)
        printf( "| Ch |" );
        for ( unsigned char c=s*shift; c<(s+1)*shift; c++ ) {
            printf( "  %c ", c );  
        }
        printf( "\n" );

	// octal (visible only under command of user)
        if ( flag_o ) {
            printf( "| Oc |");
            for ( unsigned char c=s*shift; c<(s+1)*shift; c++ ) {
                printf( " %03o", c );  
            }
        }
        printf( "\n" );

	// decimal (visible only under command of user)
        if ( flag_d ) {
            printf( "| Dc |" );
            for ( unsigned char c=s*shift; c<(s+1)*shift; c++ ) {
                printf( " %03d", c );  
            }
        }
        printf( "\n" );

	// hexa (visible only under command of user)
        if ( flag_x ) {
            printf( "| Hx |" );
            for ( unsigned char c=s*shift; c<(s+1)*shift; c++ ) {
                printf( "  %x", c );
            }
        }
        printf( "\n\n\n" );
    }

    // the end: show program version and finishes
    printf( "======================================================================\n" );
    printf( "  Version 1.0.1 - by Hamilton Gonçalves Jr. This is a free software.  \n" );
    printf( "======================================================================\n\n" );
    return EXIT_SUCCESS;
}
