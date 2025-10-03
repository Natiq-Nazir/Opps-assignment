 #include <stdio.h>
        int main(){
            int i = 0;
            
            printf("Do-while loop: ");
            do {
                printf("%d ", i);
                i++;
            } while(i < 5);
            printf("\n");

          
            printf("While loop equivalent: ");
            i = 0;
            if(i < 5){
                while(i < 5){
                    printf("%d ", i);
                    i++;
                }
            }
            printf("\n");
            return 0;
        }
