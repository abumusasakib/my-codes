#include <iostream>

using namespace std;

struct NodeTree
{
    int data;
    NodeTree *left;
    NodeTree *right;
};

int findLevelIter(NodeTree *root, int value)
{
    NodeTree *i = root;
    int level = -1;
    if (i == NULL)
	{
		return -9999;
	}
    else
    {
        while(i != NULL)
        {
            if (i->data == value)
			{
			    level++;
				break;
			}
            else
            {
                if(value > i->data)
				{
					i = i->right;
				}
                else
				{
					i = i->left;
				}

				level++;
            }
        }
    }
    return level;
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
    NodeTree* Root = NULL;
    srand(time(NULL));

    addTree(Root, 10);
	addTree(Root, 15);
	addTree(Root, 25);
	addTree(Root, 27);
	addTree(Root, 35);

    cout << endl << "Tree inorder recursive:" << endl;
    InorderPrintRecursive(Root);

    cout << endl;
    int val;
    cout << "Enter value to search for level: ";
    cin >> val;
    cout << findLevelIter(Root, val);
}
