#include <stdlib.h>
#include <stdio.h>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int rootEqualsSumOfChildren(struct TreeNode* root) {
    if (root->val != root->left->val + root->right->val)
        return 0;
    else
        return 1;
}

int main() {
    struct TreeNode *root = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    struct TreeNode *left = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    struct TreeNode *right = (struct TreeNode*) malloc(sizeof(struct TreeNode));

    printf("Enter three numbers: ");
    scanf("%d %d %d", &root->val, &left->val, &right->val);

    root->left = left;
    root->right = right;

    if (rootEqualsSumOfChildren(root))
        printf("Root equals sum of children\n");
    else
        printf("Root does not equal sum of children\n");

    return 0;
}


