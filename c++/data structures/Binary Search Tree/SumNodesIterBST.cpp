#include <iostream>

using namespace std;

struct NodeTree
{
    int data;
    NodeTree *left;
    NodeTree *right;
};

int sumTreeIter(NodeTree* root)
{
    int sum = 0;
    if (root== NULL)
    {
        return 0;
    }
    else
    {
        NodeTree* i = root;
        sum = sum + root->data;
        while(i->left!=NULL)
        {
            sum = sum + i->data;
            i = i->left;
        }

        i = root;
        while(i->right!=NULL)
        {
            i = i->right;
            sum = sum + i->data;
        }
    }
    return sum;
}

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
            if( value <= i->data)
                i = i->left;
            else
                i = i->right;
        }

        if (value <= parent->data)
            parent->left = newN;
        else
            parent->right = newN;
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

int main()
{
    srand(time(NULL));

	NodeTree* Root = NULL;
	addTree(Root, 10);
	addTree(Root, 15);
	addTree(Root, 25);
	addTree(Root, 27);
	addTree(Root, 35);
    cout << "Data: " <<endl;
    InorderPrintRecursive(Root);

    cout << endl;

    cout << sumTreeIter(Root);
}
