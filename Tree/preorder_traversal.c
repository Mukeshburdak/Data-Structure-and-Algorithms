#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *left;
    struct node *right;
};
void main()
{
    struct node *root = 0;
    int i = 0, n, value;
    printf("Enter the size of binary tree : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the  {%d} node : ", i);
        scanf("%d", &value);
        new_node->info = value;
        new_node->left = 0;
        new_node->right = 0;
        if (root == NULL)
        {
            root = new_node;
        }
        else
        {
            struct node *current = root;
            struct node *par = NULL;
            while (current != NULL)
            {
                par = current;
                if (value < current->info)
                {
                    current = current->left;
                }
                else
                {
                    current = current->right;
                }
            }
            if (value < par->info)
            {
                par->left = new_node;
            }
            else
            {
                par->right = new_node;
            }
        }
    }

    // Preorder traversal
    struct node *stack[20];
    int top = -1;
    top = top + 1;
    stack[top] = 0;
    struct node *ptr = 0;
    ptr = root;
    while (top != -1)
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->info);
            if (ptr->right != NULL)
            {
                top = top + 1;
                stack[top] = ptr->right;
            }
            ptr = ptr->left;
        }
        ptr = stack[top];
        top = top - 1;
    }
}
