//
//  ASCII Value.c
//  C_Learning
//
//  Created by shiji zhao on 12/17/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    char chr;
    printf("Enter a character: ");
    scanf("%c", &chr);
    
    // When %c is used, a character is displayed
    printf("You entered %c.\n", chr);
    
    // When %d is used, ASCII value is displayed
    printf("ASCII value is %d.\n", chr);
    return 0;
}
