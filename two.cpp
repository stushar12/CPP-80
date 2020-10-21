int diameterOpt(Node* root, int& height)
{
    int lh = 0, rh = 0;
    int ldiameter = 0, rdiameter = 0;
 
    if (root == NULL) 
    {
        height = 0;
        return 0; 
    }
    ldiameter = diameterOpt(root->left, lh);
    rdiameter = diameterOpt(root->right, rh);
    height = max(lh, rh) + 1;
 
    return max(lh + rh + 1, max(ldiameter, rdiameter));
}
int diameter(Node* node)
{
int res=0;
int a=diameterOpt(node,res);
return a;
}