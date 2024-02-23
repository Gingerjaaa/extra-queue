#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
    NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;

   int x;
    /*enqueue(&headPtr,&tailPtr,5);
    enqueue(&headPtr,&tailPtr,6);
    enqueue(&headPtr,&tailPtr,7);*/

    /*x=dequeue(&headPtr,&tailPtr);
    printf("%d\n",x);*/

//5 x 9 x 7 x 8 2 x

//For struct Queue
  Queue  q;
   q.headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;

  //enqueue_struct(&q,1,2);
  //x=dequeue_struct(&q);
  //if(x!=0)
  //printf("cash %d\n",x);
   

// enqueue_struct(&q, 1,1);


// printf("%d \n", argc);
// printf("%d %d \n", atoi(argv[1]),atoi(argv[1+1]));
int i,customerid=1;
for(i=1;i<argc;i++) {
        if(strcmp(argv[i],"x")==0){
            printf("customer no : %d\n",customerid);
            x=dequeue_struct(&q);
            customerid++;
            if(x!=0)
            printf("cash %d\n",x);
        }else{
          enqueue_struct(&q, atoi(argv[i]),atoi(argv[i+1]));
          i++;
        }
 }
  return 0;
}
