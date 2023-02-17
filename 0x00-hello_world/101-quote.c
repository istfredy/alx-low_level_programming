#include <unistd.h>  
/**  
 * main - Entry point  
 *  
 * Description: Prints the message "and that piece of art is useful" - Dora Korpar, 2015-10-19  
 *          to the standard error  
 * Return: 1 (Error code)  
 */ 
int main(void) 
{
  const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
     
  write(2, message, 59);  
  return (1); 
}
