#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    FILE* fp = fopen("test.txt", "w+");
    // hare wi testing the file there is a variase file tipy 
    // r = for read file, w = to write the file and a = used to appent the file 
    
    if(!fp)
    // hare we put the condition if file pointer dosent exit the say 
    // file opentning error 
    {
        perror("File opening failed");
        return EXIT_FAILURE;
    }
 
    int c; 
    
    // hare create the c variable to write in the file 
    // note: int, not char, required to handle EOF
    
    while ((c = fgetc(fp)) != EOF) { 
    
    // standard C I/O file reading loop hare you cane make the 
    // writing loop also 
       putchar(c);
    }
 
    if (ferror(fp))
        puts("I/O error when reading");
    else if (feof(fp))
        puts("End of file reached successfully");
 // hare we say the ending result if we succusesfully read 
 //the file then every thing gose good 
    fclose(fp);
    // hare we we close the file pointer 
}
