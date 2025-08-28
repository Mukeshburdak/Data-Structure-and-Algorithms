#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *left;
    struct node *right;
};

int main()
{
    struct node *root = NULL;
    int n, value;

    printf("Enter the number of elements in the binary search tree: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter element [%d]: ", i + 1);
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
            struct node *parent = NULL;

            while (current != NULL)
            {
                parent = current;
                if (value < current->info)
                    current = current->left;
                else
                    current = current->right;
            }

            if (value < parent->info)
                parent->left = new_node;
            else
                parent->right = new_node;
        }
    }

    // In-order traversal (manual, no function)
    printf("In-order traversal of the BST: ");
    struct node *stack[100]; // basic stack for traversal
    int top = -1;
    struct node *current = root;

    while (current != NULL || top != -1)
    {
        while (current != NULL)
        {
            stack[++top] = current;
            current = current->left;
        }

        current = stack[top--];
        printf("%d ", current->info);
        current = current->right;
    }

    printf("\n");
    return 0;
}
