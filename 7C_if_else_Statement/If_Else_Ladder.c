//
//  If_Else_Ladder.c
//  C_Learning
//
//  Created by shiji zhao on 12/18/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);
    
    // check if the two integers are equal
    if(number1 == number2) {
        printf("Result: %d = %d\n",number1, number2);
    }
    //checks if number1 is greater than number2.
    else if (number1 > number2) {
        printf("Result: %d > %d\n", number1, number2);
    }
    //checks if both test expressions are false
    else {
        printf("Result: %d < %d\n",number1, number2);
    }
    return 0;
}
