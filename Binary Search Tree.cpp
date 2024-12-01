#include<iostream>
using namespace std;

struct node
{
    int data;
    node *left, *right;
};

class btree
{
    node *root;
public:
    btree();
    void insert(int);
    void traverse();
    void inorder(node*);
    void preorder(node*);
    void postorder(node*);
    node* del(node*, int);
    node* FindMax(node*);
};

btree::btree()
{
    root = NULL;
}

node* btree::FindMax(node* root)
{
    if (root == NULL)
        return NULL;
    while (root->right != NULL) // Find the rightmost node
        root = root->right;
    return root;
}

void btree::insert(int v)
{
    node *r, *temp, *prev;
    r = new node;
    r->data = v;
    r->left = NULL;
    r->right = NULL;
    if (root == NULL)
    {
        root = r;
    }
    else
    {
        temp = root;
        while (temp != NULL)
        {
            prev = temp;
            if (temp->data > v)
                temp = temp->left;
            else
                temp = temp->right;
        }
        if (prev->data > v)
            prev->left = r;
        else
            prev->right = r;
    }
}

void btree::preorder(node* t)
{
    if (t != NULL)
    {
        cout << "  " << t->data << endl;
        preorder(t->left);
        preorder(t->right);
    }
}

void btree::inorder(node* t)
{
    if (t != NULL)
    {
        inorder(t->left);
        cout << "  " << t->data << endl;
        inorder(t->right);
    }
}

void btree::postorder(node* t)
{
    if (t != NULL)
    {
        postorder(t->left);
        postorder(t->right);
        cout << "  " << t->data << endl;
    }
}

void btree::traverse()
{
    cout << "\n Preorder:" << endl;
    preorder(root);
    cout << "\n Inorder:" << endl;
    inorder(root);
    cout << "\n Postorder:" << endl;
    postorder(root);
}

node* btree::del(node* ROOT, int data)
{
    node* temp;
    if (ROOT == NULL)
    {
        cout << "No such element exists" << endl;
        return NULL;
    }
    else if (data < ROOT->data)
    {
        ROOT->left = del(ROOT->left, data);
    }
    else if (data > ROOT->data)
    {
        ROOT->right = del(ROOT->right, data);
    }
    else
    {
        if (ROOT->left && ROOT->right) // Both children
        {
            temp = FindMax(ROOT->left); // Find maximum node in the left subtree
            ROOT->data = temp->data;
            ROOT->left = del(ROOT->left, ROOT->data); // Delete the max node
        }
        else // One or no child
        {
            temp = ROOT;
            if (ROOT->left == NULL)
                ROOT = ROOT->right;
            else if (ROOT->right == NULL)
                ROOT = ROOT->left;
            delete temp;
        }
    }
    return ROOT; // Return the new root (after deletion)
}

int main()
{
    btree b1;
    b1.insert(40);
    b1.insert(30);
    b1.insert(10);
    b1.insert(6);
    b1.insert(12);
    b1.insert(15);
    b1.insert(20);
    b1.insert(36);
    b1.insert(32);
    b1.insert(5);
    b1.insert(50);
    b1.insert(60);
    b1.insert(70);
    b1.insert(18);
    b1.insert(8);
    b1.insert(44);
    b1.insert(33);
    b1.insert(22);
    b1.insert(11);
    b1.insert(16);
    b1.traverse();
}
