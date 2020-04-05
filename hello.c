
#include <stdio.h>

void assign(char *char_ptr) 
{
    // prompt the user to enter a character that will be stored
    // at the address given by char_ptr
    printf("Enter a character asshole: ");
    scanf("%c", char_ptr);

    printf("You entered: %c\n", *char_ptr);

    // Set the value pointed to by *char_ptr to by the character 'Y'
    if (*char_ptr == 'A' || *char_ptr == 'a') {
        *char_ptr = 'B';
    }
}

int main()
{
    // A pointer to a character, but not pointing to anything currently. 
    char *char_ptr;
    
    // An array of characters of length 1
    char char_array[1];

    // Set char_ptr to point to the address given by char_array 
    char_ptr = char_array;

    // Invoke the assign() function passing the address of char_array,
    // which is what char_ptr points to
    assign(char_array);

    printf("character value pointed to by char_ptr: %c\n", *char_ptr);

    return (0);
}
