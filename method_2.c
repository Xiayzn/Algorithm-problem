
class Solution{
public:
	bool IsBalanced_Solution(TreeNode * pRoot){
		int height = 0;
		return IsBalanced_Solution(pRoot, &height);
	}
	bool IsBalanced_Solution(TreeNode * pRoot, int * height){
		if (NULL == pRoot){
			*height = 0;
			return true;
		}
		int leftheight, rightheight;
		if (IsBalanced_Solution(pRoot->left, &leftheight) &&
			IsBalanced_Solution(pRoot->right, &rightheight))
		{
			int ret = leftheight - rightheight;
			if (ret <= 1 && ret >= -1){
				*height = 1 + (leftheight > rightheight ? leftheight : rightheight);
				return true;
			}
		}
		return false;
	}
	
};
