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
    int value, i = 0, num;
    printf("Enter the size of BST : ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the [%d] element of BST : ", i + 1);
        scanf("%d", &value);
        new_node->info = value;
        new_node->left = NULL;
        new_node->right = NULL;
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
    // Postorder traversal of BST.

    struct node *stack1[100], *stack2[100];
    int top1 = -1, top2 = -1;
    top1 = top1 + 1;
    stack1[top1] = root;

    while (top1 != -1)
    {
        struct node *temp = stack1[top1];
        top1 = top1 - 1;
        top2 = top2 + 1;
        stack2[top2] = temp;

        if (temp->left!=NULL)
        {
            top1 = top1 + 1;
            stack1[top1] = temp->left;
        }
        if (temp->right!=NULL)
        {
            top1 = top1 + 1;
            stack1[top1] = temp->right;
        }
    }

    printf("Postorder traversal of BST: ");
    while (top2 != -1)
    {
        printf("%d ", stack2[top2]->info);
        top2 = top2 - 1;
    }
    printf("\n");
}
