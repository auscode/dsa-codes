#include <iostream>
#include <vector>
using namespace std;

// node class for tree 
template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode *> children;
    // both will work in this
    // vector<TreeNode<T> *> children;
    // constructor
    TreeNode(T data)
    {
        this->data = data;
    }
    // destructor
    ~TreeNode()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
        delete root;
    }
};

// printing tree function 
void printTree(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data <<":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data <<",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

// taking inout function 
TreeNode<int>* takeinput(){
    int rootData;
    cout<<"Enter Data"<<endl;
    cin>>rootData;

    TreeNode<int>* root = new TreeNode<int>(rootData);

    int n;
    cout<<"Enter number of children"<<endl;
    cin>>n;

    for (int i=0; i<n; i++){
        TreeNode<int>* child = takeinput();
        root->children.push_back(child);
    }
    return root;
}

// main function 
int main()
{
    

    // generating node dynamically
    TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *node1 = new TreeNode<int>(2);
    TreeNode<int> *node2 = new TreeNode<int>(3);
    // connecting nodes in the form of tree
    root->children.push_back(node1);
    root->children.push_back(node2);
    
    printTree(root);
    delete root;
}