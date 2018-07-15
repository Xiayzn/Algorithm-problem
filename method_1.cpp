class Solution{
public:
	bool IsBalanced_Solution(TreeNode * pRoot){
		if (NULL == pRoot)
			return true;
		int leftheight = GetTreeDepth(pRoot->left);
		int rightheight = GetTreeDepth(pRoot->right);
		int ret = leftheight - rightheight;
		if (ret > 1 || ret < -1)
			return false;
		return IsBalanced_Solution(pRoot->left)&&IsBalanced_Solution(pRoot->right);
	}
	int GetTreeDepth(TreeNode* pRoot){
		if (NULL == pRoot)
			return 0;
		int left = GetTreeDepth(pRoot->left);
		int right = GetTreeDepth(pRoot->right);
		return left < right ? (right + 1) : (left + 1);
	}
};
