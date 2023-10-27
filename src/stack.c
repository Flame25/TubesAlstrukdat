#include <stdio.h>
#include "stack.h"

void  CreateEmpty(Stack *S){
  Top(*S) =  Nil;
}

boolean IsEmpty(Stack S){
  return (Top(S) == Nil);
}

void Push(Stack *S, infotype X){
  Top(*S) ++;
  InfoTop(*S) = X;
}
void Pop(Stack *S, infotype *X){
  *X = InfoTop(*S);
  Top(*S) -- ;
}

boolean IsFull(Stack S){
  return Top(S) + 1== MaxEl;
}
