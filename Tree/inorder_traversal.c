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
    int n, i = 0, value;
    printf("Enter the size of tree : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        printf("enter the [%d] node of tree : ", i + 1);
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
            struct node *parent = NULL;
            while (current != NULL)
            {
                parent = current;
                if (value < current->info)
                {
                    current = current->left;
                }
                else
                {
                    current = current->right;
                }
            }
            if (value < parent->info)
            {
                parent->left = new_node;
            }
            else
            {
                parent->right = new_node;
            }
        }
    }

    // Inorder Traversal of binary search tree.
    struct node *stack[20];
    struct node *ptr = 0;
    int top = -1;
    ptr = root;
    while (ptr != NULL || top != -1)
    {
        while (ptr != NULL)
        {
            top = top + 1;
            stack[top] = ptr;
            ptr = ptr->left;
        }
        ptr = stack[top];
        top = top -1;
        printf("%d ",ptr->info);
        ptr = ptr->right;
    }
}