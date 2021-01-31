#include <stdio.h>
#include <stdlib.h>
struct node
{
    int key ; struct node *next; 
};
int main()
{
    int i, N,M;
    struct node *t, *x;
    scanf("%d %d",&N ,&M);
    t = (struct node *) malloc(sizeof(*t));
    t-> key = 1; x = t;
    for(i = 2;i <= N ;i++)
    {
        t -> next = (struct node*) malloc(sizeof *t);
        t = t-> next;
        t -> key = i;
    }
t -> next = x;
while(t != t->next)
    {
        for(i = 1;i < M ;i++) t = t -> next;
        printf("%d ", t-> next->key);
        x = t -> next;
        t -> next = t->next->next;
        free(x);
        
    }
    printf("%d \n", t->key);
}
/*
the program used to link lost that link list simulate the s
equnce of executions directly .first ,the list bulid with key 
from 1 to N : the variable x hold onto the beggening of the list
as it is build then thw pointer last node in the list set to x 
.then the program preesid throuw the list , counting throught 
the list M-1 , item and deleting the next , until only one is not left n
note the call to the free for the delet wich correspond to an execution
this is opposite of malloc as mention as above 
*/
