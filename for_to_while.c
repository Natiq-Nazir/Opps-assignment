 #include <stdio.h>
        int main(){
            int i;
           
            printf("For loop: ");
            for(i = 0; i < 5; i++){
                printf("%d ", i);
            }
            printf("\n");

            
            printf("While loop equivalent: ");
            i = 0;                  
            while(i < 5){           
                printf("%d ", i);
                i++;                 
            }
            printf("\n");
            return 0;
        }
