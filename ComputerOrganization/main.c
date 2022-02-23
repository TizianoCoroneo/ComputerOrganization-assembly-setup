//
//  main.c
//  ComputerOrganization
//
//  Created by Tiziano Coroneo on 23/02/2022.
//

#include <stdio.h>

// Declare the operations here, with the same name and matching signature as in your assembly file.
int testOperation(int x, int y);

int main() {

    // You can now use them in your program. ⌘B to build, ⌘R to build and run.
    int result = testOperation(12, 24);

    printf("%d\n", result);

}
