#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stack>

using namespace std;

struct NodeTree
{
    int data;
    NodeTree *left;
    NodeTree *right;
};

bool addTree(NodeTree* &root, int value)
{
    NodeTree *newN;
    newN = new NodeTree;
    newN->data = value;
    newN->left = NULL;
    newN->right = NULL;
    
    if (root== NULL)
    {
        root = newN;
    }
    else
    {

        NodeTree* i = root, *parent = NULL;
        while(i!=NULL)
        {
            parent = i;
            if(value <= i->data)
            {
                i = i->left;
            }
            else
            {
                i = i->right;
            }
        }

        if (value <= parent->data)
        {
            parent->left = newN;
        }
        else
        {
            parent->right = newN;
        }
    }
    return true;
}

void InorderPrintRecursive(NodeTree *root)
{
    if (root == NULL)
        return;
    else
    {
        InorderPrintRecursive(root->left);
        cout << root->data << ",";
        InorderPrintRecursive(root->right);
        return;
    }
}


void descendingRecursive(NodeTree *root)
{
    if (root == NULL)
        return;
    else
    {
        descendingRecursive(root->right);
        cout << root->data << ",";
        descendingRecursive(root->left);
        return;
    }
}


void rightleftrootPrintRec(NodeTree *root)
{
    if (root == NULL)
        return;
    else
    {
        cout << root->data << ",";
        rightleftrootPrintRec(root->right);
        rightleftrootPrintRec(root->left);
        return;
    }
}


bool searchTIter(NodeTree *root, int value)
{
    NodeTree *current = root;
    if (current == NULL)
    {
        cout << "BST is empty";
    }
    else
    {
        while(current!=NULL)
        {
            if (current->data == value)
            {
                return true;
            }
            else
            {
                if(value < current->data)
                {
                    current = current->left;
                }
                else
                {
                    current = current->right;
                } 
            }
        }
    }
    return false;
}

bool searchTRec(NodeTree* root, int value)
{
    if (root == NULL)
    {
        return  false;
    }
    if (root->data ==  value)
    {
        return true;
    }

    else
    {
        if(value < root->data)
        {
            return searchTRec(root->left);
        }
        else
        {
            return searchTRec(root->right);
        }
    }
}

void searchTRecTopDown(NodeTree* root, int value, bool &found)
{
    if (root == NULL)
    {
        found = false;
        return;
    }

    if (root->data == value)
    {
        found = true;
        return;
    }

    else
    {
        if (value < root->data)
        {
            searchTopDown(root->left, value, found);
        }
        else
        {
            searchTopDown(root->right, value, found);
        }
    }
}

int findMinimumRec(NodeTree *root)
{
    if(root == NULL)
        return -9999999;
    if(root -> left ==NULL)
        return root->data;
    else
    {
        return findMinimumRec(root->left);
    }
}

int findMaximumRec(NodeTree *root)
{
    if(root == NULL)
        return -9999999;
    if(root -> right ==NULL)
        return root->data;
    else
    {
        return findMaximumRec(root->right);
    }
}

/* Iterative function for inorder tree
   traversal */
void inorderPrintIter(NodeTree *root)
{
    stack<NodeTree *> s;
    NodeTree *curr = root;

    while (curr != NULL || s.empty() == false)
    {
        /* Reach the left most Node of the
           curr Node */
        while (curr !=  NULL)
        {
            /* place pointer to a tree node on
               the stack before traversing
              the node's left subtree */
            s.push(curr);
            curr = curr->left;
        }

        /* Current must be NULL at this point */
        curr = s.top();
        s.pop();

        cout << curr->data<< ", ";

        /* we have visited the node and its
           left subtree.  Now, it's right
           subtree's turn */
        curr = curr->right;

    } /* end of while */
}

/* Iterative function for printing tree
   in descending order */
void descendingPrintIter(NodeTree *root)
{
    stack<NodeTree *> s;
    NodeTree *curr = root;

    while (curr != NULL || s.empty() == false)
    {
        /* Reach the left most Node of the
           curr Node */
        while (curr !=  NULL)
        {
            /* place pointer to a tree node on
               the stack before traversing
              the node's right subtree */
            s.push(curr);
            curr = curr->right;
        }

        /* Current must be NULL at this point */
        curr = s.top();
        s.pop();

        cout << curr->data<< ", ";

        /* we have visited the node and its
           left subtree.  Now, it's left
           subtree's turn */
        curr = curr->left;

    } /* end of while */
}

int sumIter(NodeTree *root)
{
    int sum  = 0;
    stack<NodeTree *> s;
    NodeTree *curr = root;

    while (curr != NULL || s.empty() == false)
    {
        /* Reach the left most Node of the
           curr Node */
        while (curr !=  NULL)
        {
            /* place pointer to a tree node on
               the stack before traversing
              the node's left subtree */
            s.push(curr);
            curr = curr->left;
        }

        /* Current must be NULL at this point */
        curr = s.top();
        s.pop();

        sum = sum+ curr->data;

        /* we have visited the node and its
           left subtree.  Now, it's right
           subtree's turn */
        curr = curr->right;

    } /* end of while */

    return sum;
}

int sumRec(NodeTree *root)
{
    if(root == NULL)
    {
        return 0;
    }

    else
    {
        return root->data + sumRec(root->left) + sumRec(root->right);
    }
}

bool balancedSum(NodeTree *root)
{
    if(root == NULL)
    {
        return 0;
    }

    else
    {
        int sumL = sumRec(root->left);
        int sumR = sumRec(root->right);

        if(sumL == sumR)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int findMinimumIter(NodeTree *root)
{
    NodeTree *i = root;
    if (i == NULL)
        return -999999;
    if(i->left == NULL)
    {
        return i->data;
    }
    else
    {
        while(i->left!=NULL)
        {
            i = i->left;
        }
    }

    return i->data;
}

int findMaximumIter(NodeTree *root)
{
    NodeTree *i = root;
    if (i == NULL)
        return -999999;
    if(i->right == NULL)
    {
        return i->data;
    }
    else
    {
        while(i->right!=NULL)
        {
            i = i->right;
        }
    }

    return i->data;
}

int findLevelRec(NodeTree* root, int value)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == value)
    {
        return 0;
    }

    else
    {
        if (value < root->data)
        {
            int lh = findLevelRec(root->left, value);
            if (lh == -1)
            {
                return -1;
            }
            else
            {
                return  1 + lh;
            }
        }

        else
        {
            int rh = findLevelRec(root->right, value);
            if (rh == -1)
            {
                return -1;
            }
            else
            {
                return 1 + rh;
            }
        }
    }
}


void findLevelRecTopDown(NodeTree* root, int value,  int &level)
{
    if (root == NULL)
    {
        level = -1;
        return;
    }
    if (root->data ==  value)
    {
        return;
    }

    else
    {
        level++;
        if ( value < root->data)
        {
            findLevelRecTopDown(root->left, value, level);
        }
        else
        {
            findLevelRecTopDown(root->right, value, level);
        }
    }
}

int digitCounter(int p)
{
    int counter = 0;

    while(p != 0)
    {
        p = p / 10;
        counter++;
    }

    return counter;
}

int power(int x,int y)
{
    int result = 1;

    for(int i = 0; i < y; ++i)
	{
        result = result * x;
	}
    return result;
}

void MakeFullNumberRecursive(NodeTree *root, int &num)
{
    if (root == NULL)
        return;
    else
    {

        MakeFullNumberRecursive(root->left, num);
        int digits = digitCounter(root->data);

        if(digits == 1)
        {
            num = num * 10 + root->data;
        }
        else
        {
            num = num * (power(10, digits)) + root->data;
        }

        MakeFullNumberRecursive(root->right, num);
        return;
    }
}

bool issame(NodeTree *root1, NodeTree *root2)
{
    int num1 = 0, num2 = 0;
    MakeFullNumberRecursive(root1, num1);
    MakeFullNumberRecursive(root2, num2);

    if(num1 == num2)
    {
        return true;
    }

    else
    {
        return false;
    }
}


int main()
{
    srand(time(NULL));
    NodeTree* Root = NULL;
    cout << "Data: " <<endl;
    for (int i = 0; i < 10; i++)
    {
        int d = rand()%100;
        cout << d  << ",";
        addTree(Root, d);
    }

    cout << endl << "Tree inorder recursive:" << endl;
    InorderPrintRecursive(Root);
    cout << endl << "Descending order:" << endl;
    descendingRecursive(Root);
}