#include "computing.h"
#include <stdio.h>
#include <string.h>


int main()               // main
{                        //
    int count_words = 0; // init var for count words in the text
    print();             // void print start text
    printf("Enter number of words in text ==> "); //
    scanf("%d", &count_words); // enter count words in the text
    count_words++;             // for E0F string
    stringing(count_words);       // void function
}
