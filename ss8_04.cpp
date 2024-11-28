#include <stdio.h>

int main() {
    
    int mtv[3][4] = {{2,33,4,54},{9,6,12,17},{51,37,1,24}};
        
    

    int hang = 3;
    int cot = 4; 
    int max = mtv[0][0]; 

    
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (mtv[i][j] > max) {
                max = mtv[i][j];
            }
        }
    }

    
    printf("Phan tu lon nhat trong mang la: %d\n", max);

   
}