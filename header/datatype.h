
#include<stdio.h>
#include<stdint.h>
#include<math.h>

#include<stdlib.h>

typedef enum{
    NUMBER,
    OPERATOR,
   
}TypeMath;

typedef struct{
    TypeMath key;
    union 
    {
        int number;
        char operator;
    }value;
    
}TypeMaths;


typedef struct {
    int a;
    int b;
    int c;
    
}EquaElement;












