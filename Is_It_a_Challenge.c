

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
   // int arr[n];
    
    
      
        // for (int i = 0; i < n; i++) {
        //     scanf("%d", &arr[i]);
           
        // }
         if(n>0 ){
        for (int i = 1; i < n+1; i++) {
            printf("%d ",i);
        }
         }
      else //if (n<0)
     {
        for (int i =n; i <=0; i++) 
        { 
            
            printf("%d ", i);
     }
        
        
        
    

    return 0;
}

}

