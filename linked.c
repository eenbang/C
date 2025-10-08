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
        scanf("%i",&(n->number));/*����*/
        //����Ĺؼ�����
        n->next = list ;
        list = n ;
    }
    node *ptr = list ;
    //���
    while (ptr != NULL)
    {
        printf("%i\n",ptr->number);
        ptr = ptr->next;
    }
    //���������ͷ��ڴ� 
    while (list != NULL)
    {
        node*temp = list ;
        list = list->next ;
        free(temp);
    }
    return 0 ;
}