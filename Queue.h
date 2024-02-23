


typedef struct Queue{
	NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int ordernum,int qty){
  Node *new_node=(Node*) malloc(sizeof(Node));


if(new_node){ 
        new_node->order_number=ordernum;
        new_node->quantity=qty;
        new_node->nextPtr=NULL;

    if(q->size==0)
      q->headPtr=new_node;
    else (q->tailPtr)->nextPtr=new_node;

    q->tailPtr=new_node;
    q->size++;

    //printf("%d %d\n",q->tailPtr->order_number,q->tailPtr->quantity);
    printf("My order is %d\n",q->tailPtr->order_number);
 }
 else{
  printf("fail");
 }
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   if(t){
   int o = t->order_number;
   int n = t->quantity;
   int cash;
   if(o==1)
   {
      printf("Ramen\n");
      cash = n*100;
   }
   else if (o==2)
   {
      printf("Somtum\n");
      cash = n*20;
   }
   else if (o==3)
   {
      printf("Fried Chicken\n");
      cash = n*50;
   }
   else cash = 0;

      q->headPtr=t->nextPtr;

      if(q->size==1) q->tailPtr=NULL;
      
      q->size--;
      free(t);
   return cash;
   }
   printf("Empty queue\n");
    return 0;
}

