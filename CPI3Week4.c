#include <stdio.h>
int main() {
char aj;
printf("the character is: ");
scanf("%c" ,&aj);

if((aj<='j'&&aj>='a')||aj<='J'){
++aj;
printf("%c", aj);
++aj;
printf("%c", aj);
++aj;
printf("%c", aj);
++aj;
printf("%c", aj);
++aj;
printf("%c", aj);
++aj;
printf("%c\n", aj); 
}
else{
printf("Invalid input");
}
return 0;
}
