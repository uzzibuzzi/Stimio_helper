#include <stdio.h>


#include <math.h>


typedef struct ring_buffer
    {
    int counter;
    int maxLeangth;
    int values[101] ;

    } ring_buffer;



void addtoStruk(ring_buffer* a,int value ){
    /* add the value to the buffer at actual postioin*/
    int position= a->counter;
    a->values[position]=value;
      if (position+1 > a -> maxLeangth ){
           a->counter = 0;
        }
     else{
         a->counter =position+1;
     }
}

void initBuffer(ring_buffer* a ){
    /* init the buffer woth values 0*/
    a->counter=0;
    a->maxLeangth=(sizeof(a->values)/sizeof(a->values[0]))-1;
    for (int i=0; i <a->maxLeangth;i++){
       a->values[i]=0;
    }
}

void printBuffer(ring_buffer* a , int leangth){
    for (int i=0; i < leangth;i++)
    {
        printf ( " array %d :  %d \n ",i,a->values[i] );
     }

}


int main(){
    ring_buffer RingBuffer;

    struct ring_buffer *abc;
    abc=&RingBuffer;
    initBuffer(abc);
    printBuffer(abc,10);
    
    addtoStruk(abc,222);
}