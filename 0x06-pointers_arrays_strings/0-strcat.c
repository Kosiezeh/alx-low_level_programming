#include"main.h"

/**
 *strcat-concatenates the string pointed to by @stc to
 * the end of the string pointed to by @dest
 *@dest:string that will be appended 
 *@src:string to be concatenated upon
 * 
 *Return:return pointer to @dest 
 */
 char*_strcat(char*dest,char*src)
 {
     Int index=0,dest_len=0;
              while(dest[index++])
                       dest_len++;
              for(index=0;src[index];index++)
                       dest[dest_len++]=src[index];
                      
                       return(dest);
              
 }
 