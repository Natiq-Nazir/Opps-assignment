 #include <stdio.h>
        int main(){
            int i = 0;
            printf("While loop: ");
            while(i < 5){
                printf("%d ", i);
                i++;
            }
            printf("\n");

            printf("Do-while loop equivalent: ");
            i = 0;
            if(i < 5){ 
                do {
                    printf("%d ", i);
                    i++;
                } while(i < 5);
            }
            printf("\n");
            return 0;
        }
