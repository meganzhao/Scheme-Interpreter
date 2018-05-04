#include <stdlib.h>
#include "value.h"
#include "linkedlist.h"
#include "talloc.h"

#ifndef TOKENIZER_H
#define TOKENIZER_H

/* The tokenize function should read stdin (the standard input 
 * stream in C) in its entirety and return a linked list consisting 
 * of all tokens found.
 */
Value *tokenize();

/* 
 * The displayTokens function takes a linked list of tokens as 
 * input, and displays those tokens, one per line, with each 
 * token's type.
 */
void displayTokens(Value *list);

#endif