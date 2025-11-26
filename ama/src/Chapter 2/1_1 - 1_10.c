// 1. - No Errors

#include <stdio.h> // DIRECTIVE

int main()
{
    printf("Hello, World\n");
    return 0;
}

/**************************************************************/
/**************************************************************/
/**************************************************************/

// 2.
// (a)
int main2(void)
{
    printf("Parkinson's Law:\nWork expands so as to "); // STATEMENT
    printf("fill the time\n");                          // STATEMENT
    printf("available for its completion.\n");          // STATEMENT
    return 0;                                           // STATEMENT
}
// (b)
// OUTPUT:
// Parkinsons's Law:
// Word expands so as to fill the tim
// available for its completion.

/**************************************************************/
/**************************************************************/
/**************************************************************/

// 3. / 10.

int main3 ()
{
    int height = 8, length = 12, width = 10;                            // (1)  // essential
    int volume = height * length * width;                                       // essential

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);  // (2)

    return 0;                                                                   // essential
}

/**************************************************************/
/**************************************************************/
/**************************************************************/

// 4.

int main4()
{
    float A, B, C;
    int a, b, c;

    printf("%d | %d | %d\n", a, b, c);
    printf("%.2f | %.2f | %.2f", A, B, C);

    return 0;
}

/**************************************************************/
/**************************************************************/
/**************************************************************/

// 5.
// (a) && (b) are not legal

// 6.
// Makes the code hard to read

// 7.
// all except (b) are keywords in C

// 8.
// 3 tokens, 
// (1) [answer] 
// (2) [=]  
// (3) [(2*q-p*q)/3] 

// 9. 
// answer = (3 * q - p * q) / 3;
