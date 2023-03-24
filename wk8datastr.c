// question no 1
#include <stdio.h>

int *biggest_of_two(int *a, int *b) {
    return (*a > *b) ? a : b;
}


int *biggest_of_three(int *a, int *b, int *c) {
    int *temp = biggest_of_two(a, b);
    return biggest_of_two(temp, c);
}

int main() {
    int a = 10, b = 20, c = 30;

    int *largest_of_two = biggest_of_two(&a, &b);
    int *largest_of_three = biggest_of_three(&a, &b, &c);

    printf("Largest of two: %d\n", *largest_of_two);
    printf("Largest of three: %d\n", *largest_of_three);

    return 0;
}
//question no 2
#include <stdio.h>

void div_rem(int a, int b, int *quotient, int *remainder) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return;
    }
    *quotient = a / b;
    *remainder = a % b;
}

int main() {
    int a = 42, b = 5;
    int quotient, remainder;
    div_rem(a, b, &quotient, &remainder);
    printf("%d divided by %d is %d with remainder %d\n", a, b, quotient, remainder);
    return 0;
}

//question no 3
#include <stdio.h>
#include <stdlib.h> // for malloc, free
 
int main() {
    char *str;
    int len = 0;
 
    printf("Enter the string: ");
    scanf("%m[^\n]", &str); // dynamically allocate memory for the string
 
    char *ptr = str;
    while (*ptr != '\0') { // iterate over the string until null character is encountered
        len++;
        ptr++;
    }
 
    printf("The length of the given string %s is: %d\n", str, len);
 
    free(str); // free dynamically allocated memory
 
    return 0;
}
// que no 4
#include <stdio.h>

void reverse(char *p){
    char c;
    char* q = p;
    while (*q) q++;
    q--; // point to the end
    while (p < q){
        c = *p;
        *p++ = *q;
        *q-- = c;
    }
}

int main(){
    char s[100];
    printf("string : ");
    scanf("%s", s);
    reverse(s);
    printf("Reverse of the string is : %s\n", s);
    return 0;
}
// question no 5
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    int words = 0;
    int count = 0;
    int i;

    printf("Enter a sentence: ");
    fgets(sentence, 1000, stdin);

    // count the number of words
    for (i = 0; i < strlen(sentence); i++) {
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\t') {
            printf("%d ", count);
            count = 0;
            words++;
        } else {
            count++;
        }
    }

    // handle the last word in the sentence
    if (count > 0) {
        printf("number of character for each:""%d", count);
        words++;
    }

    printf("\nTotal number of words: %d\n", words);
    return 0;
}

// question no 6
#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100], newSentence[100];
    int i, j;

    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    // Delete all white spaces
    for(i=0, j=0; sentence[i]!='\0'; i++)
    {
        if(sentence[i] != ' ')
        {
            newSentence[j] = sentence[i];
            j++;
        }
    }
    newSentence[j] = '\0';

    // Replace all "." by ":"
    for(i=0; newSentence[i]!='\0'; i++)
    {
        if(newSentence[i] == '.')
        {
            newSentence[i] = ':';
        }
    }

    printf("New sentence: %s\n", newSentence);

    return 0;
}
