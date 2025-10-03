     #include <stdio.h>
        int main(){
            int i = 0;
            printf("While loop: ");
            while(i < 5){
                printf("%d ", i);
                i++;
            }
            printf("\n");

            printf("For loop equivalent: ");
            for(i = 0; i < 5; i++){
                printf("%d ", i);
            }
            printf("\n");
            return 0;
        }
