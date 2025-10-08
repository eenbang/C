#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int number;
    struct node *next ;
}node;
int main()
{
    node *list = NULL;
    for (int i = 0 ; i < 3 ; i ++)
    {
        node *n = malloc(sizeof(node));
        if(n==NULL)
        {
            while(list != NULL)
            {
                node *temp = list;
                list = list->next;
                free(temp);
            }
            return 1 ;
        }
        scanf("%i",&(n->number));/*输入*/
        //链表的关键步骤
        n->next = list ;
        list = n ;
    }
    node *ptr = list ;
    //输出
    while (ptr != NULL)
    {
        printf("%i\n",ptr->number);
        ptr = ptr->next;
    }
    //遍历链表，释放内存 
    while (list != NULL)
    {
        node*temp = list ;
        list = list->next ;
        free(temp);
    }
    return 0 ;
}