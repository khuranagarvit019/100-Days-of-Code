#include <stdio.h>


int main() {
   int key, c, n=6;
   int arr[] = { 21, 53, 96, 47, 56, 45};
   key=56;
   
   for (c = 0; c < n; c++) {
      if (arr[c] == key) {
         printf("%d is present at index %d.\n", key, c);
         break;
      }
   }
   
   if (c == n)
      printf("%d isn't present in the array.\n", key);
   return 0;
}