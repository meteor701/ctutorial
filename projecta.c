#include <stdio.h>
#include <stdlib.h>


const int MAX = 4, MIN = 0;
int x = 0,y = 0;
int proceed = 1; 
int me(), map();
char path, usrinp, op;


int main(void) {
  char grid[MAX][MAX];
  int i, j, r;
  char (*p)[MAX][MAX];
  p = &grid;
  for (i = 0; i < MAX; i++) {
    for (j = 0; j < MAX; j++) {
      r = rand()%8;
      if (r == 2 || r == 4) {
        (*p)[i][j] = 'G';
      } else if (r == 1 || r == 3) {
        (*p)[i][j] = 'D';
      } else {
        (*p)[i][j] = '@';
      }
      printf("%d",r);
    }
    printf("\n");
  }

while(proceed == 1){
  path = grid[x][y];
  grid[x][y] = 'M';
  for (i = 0; i < MAX; i++) {
    for (j = 0; j < MAX; j++) {
      printf("%c",grid[i][j]);
      }
    printf("\n");
  }
  printf("Do you still want to proceed y/n: ");
  scanf("%c",&usrinp);
  //switch(usrinp){
  //  case'n':
  //      proceed = 0;
  //      break;
   // case'y':
    
 // }
  if(usrinp == 'n'){
    proceed = 0;
    break;
}else if(usrinp == 'y'){
    grid[x][y] = path;
    printf("Press w, a, s, d to move: ");
    scanf("%c",&op);
    if(op == 'w'){
    y --;
  }else if(op == 'a'){
    x --;
  }else if(op == 's'){
    y ++;
  }else if(op == 'd'){
    x ++;
  }else{
    printf("Invalid\n");
  }
  if(x >= MAX){
    x = MAX;
  }else if(x <= MIN){
    x = MIN;
  }else if(y >= MAX){
    y = MAX;
  }else if(y <= MIN){
    y = MIN;
  }
    printf("%d,%d\n",x,y);
    printf("%c",op);
 }else{
     printf("Invalid answer.");
 }
} 
  return 0;
}

